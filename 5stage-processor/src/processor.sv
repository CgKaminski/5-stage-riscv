/*
 * Datapath Module 
 * This module is responsible for the execution of the instructions including the organization of the pipeline. This 
 * particular implementation is a 5 stage pipeline with the following stages: Fetch, Decode, Execute, Memory, Writeback.
 * Note: the datapath implementation is also located inside the 
 */

`include "src/reg_d.sv"
`include "src/reg_e.sv"
`include "src/reg_m.sv"
`include "src/reg_w.sv"
`include "src/regfile.sv"
`include "src/alu.sv"
`include "src/controller.sv"
`include "src/extend.sv"
`include "src/hazard_unit.sv"
`include "src/imem.sv"
`include "src/dmem.sv"

module processor(input  logic        clk_i,
                 input  logic        reset_i,
                 input  logic [31:0] instr_i,
                 input  logic [31:0] read_data_i,
                 output logic        mem_write_o,
                 output logic [31:0] pc_o,
                 output logic [31:0] alu_result_o,
                 output logic [31:0] write_data_o);

  // Misc. signals
  logic       alu_src, pc_src, reg_write, jump, zero;
  logic [1:0] result_src, imm_src;
  logic [2:0] alu_control;

  /*
   * Control unit
   */
  controller controller(
    .op_i(instr_d[6:0]),
    .funct3_i(instr_d[14:12]),
    .funct7_i(instr_d[30]), .zero_i(zero)
    .pc_src_o(pc_src),
    .reg_write_o(reg_write),
    .imm_src_o(imm_src), 
    .alu_src_o(alu_src), 
    .mem_write_o(mem_write_o),
    .result_src_o(result_src),
    .jump_o(jump), 
    .alu_control_o(alu_control));

  /*
   * Hazard Unit
   */
  hazard_unit hazard_unit(
    .rs1_e_i(rs1_e),
    .rs2_e_i(rs2_e), 
    .rd_m_i(rd_m),
    .rd_w_i(rd_w), 
    .reg_write_m_i(reg_write_m),
    .reg_write_w_i(reg_write_w),
    .rs1_d_i(rs1_d), 
    .rs2_d_i(rs2_d),
    .rd_e_i(rd_e),
    .pc_src_e_i(pc_src_e),
    .result_src_e_i(result_src_e),
    .forward_a_o(forward_a),
    .forward_b_o(forward_b),
    .stall_f_o(stall_f),
    .stall_d_o(stall_d),
    .flush_e_o(flush_e),
    .flush_d_o(flush_d));


  /*
   * Datapath
   * The datapath is a 5 stage pipeline with the following stages: Fetch, Decode, Execute, Memory, Writeback.
   */

  always_ff @(posedge clk_i) begin
    case (pc_src_e) 
      1'b0: pc_f0 <= pc_plus4_f;
      1'b1: pc_f0 <= pc_target_e;
    endcase
  end

  // Fetch stage
  logic [31:0] pc_f;
  logic [31:0] pc_plus4_f;
  logic [31:0] pc_f
  imem imem(
    .a_i(pc_f),
    .rd_o(rd_f));

  always_ff (posedge clk_i) begin
    pc_plus4_f <= pc_f + 4;
  end 

  // Decode stage
  reg_d reg_d(
    .clk_i(clk_i),
    .en_i(~stall_d),
    .clr_i(flush_d),
    .rd_f_i(rd_f),
    .pc_plus4_f_i(pc_plus4_f),
    .pc_f_i(pc_f),
    .instr_d_o(instr_d),
    .pc_d_o(pc_d),
    .pc_plus4_d_o(pc_plus4_d));
  regfile regfile(
    .clk_i(clk_i),
    .we3_i(reg_write_w),
    .a1_i(instr_d[19:150]),
    .a2_i(instr_d[24:20]),
    .a3_i(rd_w),
    .rd1_o(rd1_d),
    .rd2_o(rd2_d));
  extend extend(
    .intr_i(instr_d[31:7]),
    .imm_src_i(imm_src_d),
    .imm_ext_o(imm_ext_d));

  // Execute stage
  reg_e reg_e(
    .clk_i(clk_i),
    .clr_i(flush_e),
    .reg_write_d_i(reg_write_d),
    .result_src_d_i(result_src_d),
    .mem_write_d_i(mem_write_d),
    .jump_d_i(jump_d),
    .branch_d_i(branch_d),
    .alu_control_d_i(alu_control_d),
    .alu_src_d_i(alu_src_d),
    .rd1_d_i(rd1_d),
    .rd2_d_i(rd2_d),
    .pc_d_i(pc_d),
    .rs1_d_i(rs1_d),
    .rs2_d_i(rs2_d),
    .rd_d_i(rd_d),
    .imm_ext_d_i(imm_ext_d),
    .pc_plus4_d_i(pc_plus4_d),
    .reg_write_e_o(reg_write_e),
    .result_src_e_o(result_src_e),
    .mem_write_e_o(mem_write_e),
    .jump_e_o(jump_e),
    .branch_e_o(branch_e),
    .alu_control_e_o(alu_control_e),
    .alu_src_e_o(alu_src_e),
    .rd1_e_o(rd1_e),
    .rd2_e_o(rd2_e),
    .pc_e_o(pc_e),
    .rs1_e_o(rs1_e),
    .rs2_e_o(rs2_e),
    .rd_e_o(rd_e),
    .imm_ext_e_o(imm_ext_e),
    .pc_plus4_e_o(pc_plus4_e));
  alu alu(
    .src_a_i(src_a_e),
    .src_b_i(src_b_e),
    .alu_control_i(alu_control_e),
    .result_o(alu_result_e),
    .overflow_o(overflow_e),
    .carry_o(carry_e),
    .negative_o(negative_e),
    .zero_o(zero_e));


  always_ff @(posedge clk_i) begin
    case (forward_a)
      2'b00: src_a_e <= rd1_e;
      2'b01: src_a_e <= result_w;
      2'b10: src_a_e <= alu_result_m;
    endcase 
   
    case (forward_b)
      2'b00: src_b_e <= rd2_e;
      2'b01: src_b_e <= result_w;
      2'b10: src_b_e <= alu_result_m;
    endcase

    case (alu_src_e)
      1'b0: src_b_e <= src_b_e;
      1'b1: src_b_e <= imm_ext_e;
    endcase
    
    pc_src_e <= jump_e || (branch_e && zero_e) 
    pc_target_e <= pc_e + imm_ext_e;
  end

  // Memory stage
  reg_m reg_m(
    .clk_i(clk_i),
    .reg_write_e_i(reg_write_e),
    .result_src_e_i(result_src_e),
    .mem_write_e_i(mem_write_e),
    .alu_result_e_i(alu_result_e),
    .write_data_e_i(write_data_e),
    .rd_e_i(rd_e),
    .pc_plus4_e_i(pc_plus4_e),
    .reg_write_m_o(reg_write_m),
    .result_src_m_o(result_src_m),
    .mem_write_m_o(mem_write_m),
    .alu_result_m_o(alu_result_m),
    .write_data_m_o(write_data_m),
    .rd_m_o(rd_m),
    .pc_plus4_m_o(pc_plus4_m));
  dmem dmem(
    .clk_i(clk_i),
    .we_i(mem_write_m),
    .a_i(alu_result_m),
    .wd_i(write_data_m),
    .rd_o(read_data_m));

  // Writeback stage
  reg_w reg_w(
    .clk_i(clk_i),
    .reg_write_m_i(reg_write_m),
    .result_src_m_i(result_src_m),
    .alu_result_m_i(alu_result_m),
    .rd1_m_i(rd1_m),
    .rd_m_i(rd_m),
    .pc_plus4_m_i(pc_plus4_m),
    .alu_result_w_o(alu_result_w),
    .rd1_w_o(rd1_w),
    .rd_w_o(rd_w),
    .pc_plus4_w_o(pc_plus4_w));

  always_ff @(posedge clk_i) begin
    case (result_src_w)
      2'b00: result_w <= alu_result_w;
      2'b01: result_w <= read_data_m;
      2'b10: result_w <= pc_plus4_w;
    endcase
  end

endmodule
