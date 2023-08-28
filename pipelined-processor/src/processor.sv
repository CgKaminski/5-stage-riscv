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
`include "src/reg_f.sv"
`include "src/regfile.sv"
`include "src/alu.sv"
`include "src/controller.sv"
`include "src/extend.sv"
`include "src/hazard_unit.sv"
`include "src/imem.sv"
`include "src/dmem.sv"

module processor(input  logic        clk_i,
                 input  logic        reset_i,
                 output logic        mem_write_o,
                 output logic [31:0] alu_result_o,
                 output logic [31:0] write_data_o);

  // Misc. signals
  logic       alu_src_d, reg_write_d, jump_d, branch_d, mem_write_d;
  logic [1:0] result_src_d, imm_src_d;
  logic [2:0] alu_control_d;  

  /*
   * Control unit
   */
  controller controller(
    .op_i(instr_d[6:0]),
    .funct3_i(instr_d[14:12]),
    .funct7b5_i(instr_d[30]), 
    .reg_write_o(reg_write_d),
    .result_src_o(result_src_d),
    .mem_write_o(mem_write_d),
    .jump_o(jump_d), 
    .branch_o(branch_d),
    .alu_control_o(alu_control_d),
    .alu_src_o(alu_src_d),
    .imm_src_o(imm_src_d));

  /*
   * Hazard Unit
   */
  logic [1:0] forward_a, forward_b;
  logic       stall_f, stall_d, flush_e, flush_d;
  hazard_unit hazard_unit(
    .rs1_e_i(rs1_e),
    .rs2_e_i(rs2_e), 
    .rd_m_i(rd_m),
    .rd_w_i(rd_w), 
    .reg_write_m_i(reg_write_m),
    .reg_write_w_i(reg_write_w),
    .rs1_d_i(instr_d[19:15]), 
    .rs2_d_i(instr_d[24:20]),
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


  always_ff @(negedge clk_i) begin
    $display("-------------------------------------------------");
    $display("Hazards");
    $display("Forward A      : %b", forward_a);
    $display("Forward B      : %b", forward_b);
    $display("Stall F        : %b", stall_f);
    $display("Stall D        : %b", stall_d);
    $display("Flush D        : %b", flush_d);
    $display("Flush E        : %b", flush_e);
    $display("-------------------------------------------------");
    $display("Fetch Stage");
    $display("Instruction    : %b", rd_f);
    $display("Stall F        : %b", stall_f);
    $display("PC             : %b", pc_f);
    $display("PC + 4         : %b", pc_plus4_f);
    $display("-------------------------------------------------");
    $display("Decode Stage");
    $display("Instruction    : %b", instr_d);
    $display("A1             : %b", instr_d[19:15]);
    $display("A2             : %b", instr_d[24:20]);
    $display("Register Data 1: %b", rd1_d);
    $display("Register Data 2: %b", rd2_d);
    $display("A3             : %b", rd_w);
    $display("Reg Write      : %b", reg_write_w);
    $display("Immediate      : %b", imm_ext_d);
    $display("PC             : %b", pc_d);
    $display("PC + 4         : %b", pc_plus4_d);
    $display("-------------------------------------------------");
    $display("Execute Stage");
    $display("Register Data 1: %b", rd1_e);
    $display("Register Data 2: %b", rd2_e);
    $display("Alu src e      : %b", alu_src_e);
    $display("ALU src A      : %b", src_a_e);
    $display("ALU src B      : %b", src_b_e);
    $display("ALU Result     : %b", alu_result_e);
    $display("Write Data     : %b", write_data_e);
    $display("Immediate      : %b", imm_ext_e);
    $display("Forward A      : %b", forward_a);
    $display("Forward B      : %b", forward_b);
    $display("PC             : %b", pc_e);
    $display("PC + 4         : %b", pc_plus4_e);
    $display("-------------------------------------------------");
    $display("Memory Stage");
    $display("Data Memory A  : %b", alu_result_m);
    $display("Data Memory WD : %b", write_data_m);
    $display("Write Enable   : %b", mem_write_m);
    $display("Read Data      : %b", read_data_m);
    $display("PC + 4         : %b", pc_plus4_m);
    $display("-------------------------------------------------");
    $display("Writeback Stage");
    $display("ALU Result W   : %b", alu_result_w);
    $display("Read Data W    : %b", rd1_w);
    $display("Result W       : %b", result_w);
    $display("Result Src W   : %b", result_src_w);
    $display("Rd W           : %b", rd_w);
    $display("PC + 4         : %b", pc_plus4_w);
    $display("=================================================");
    $display("\n");
  end

  logic [31:0] pc_f0;
  logic [31:0] pc_target_e;
  assign pc_f0 = (pc_src_e) ? pc_target_e : pc_plus4_f;

  // Fetch stage
  logic [31:0] pc_plus4_f;
  logic [31:0] pc_f;
  logic [31:0] rd_f;
  imem imem(
    .a_i(pc_f),
    .rd_o(rd_f));
  reg_f reg_f(
    .clk_i(clk_i),
    .en_i(~stall_f),
    .rst_i(reset_i),
    .pc_f_i(pc_f0),
    .pc_f_o(pc_f));

  assign pc_plus4_f = pc_f + 32'b100;
  // always_ff @(posedge clk_i) begin
  //   pc_plus4_f <= pc_f + 4;
  // end 

  // Decode stage
  logic [31:0] instr_d, pc_d, pc_plus4_d, rd1_d, rd2_d, imm_ext_d;
  reg_d reg_d(
    .clk_i(clk_i),
    .en_i(stall_d),
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
    .a1_i(instr_d[19:15]),
    .a2_i(instr_d[24:20]),
    .a3_i(rd_w),
    .wd3_i(result_w),
    .rd1_o(rd1_d),
    .rd2_o(rd2_d));
  extend extend(
    .instr_i(instr_d[31:7]),
    .imm_src_i(imm_src_d),
    .imm_ext_o(imm_ext_d));

  // Execute stage
  logic pc_src_e, reg_write_e, mem_write_e, jump_e, branch_e, alu_src_e, overflow_e, carry_e, negative_e, zero_e;
  logic [1:0] result_src_e;
  logic [2:0] alu_control_e;
  logic [4:0] rs1_e, rs2_e, rd_e;
  logic [31:0] rd1_e, rd2_e, pc_e, imm_ext_e, pc_plus4_e, alu_result_e, src_a_e, src_b0_e, src_b_e, write_data_e;
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
    .rs1_d_i(instr_d[19:15]),
    .rs2_d_i(instr_d[24:20]),
    .rd_d_i(instr_d[11:7]),
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

  always_comb begin
    case (forward_a)
      2'b00: src_a_e = rd1_e;
      2'b01: src_a_e = result_w;
      2'b10: src_a_e = alu_result_m;
      2'b11: src_a_e = 32'bx;
    endcase 
   
    case (forward_b)
      2'b00: begin 
        src_b0_e = rd2_e;
        write_data_e = rd2_e;
      end
      2'b01: begin 
        src_b0_e = result_w;
        write_data_e = result_w;
      end
      2'b10: begin 
        src_b0_e = alu_result_m;
        write_data_e = alu_result_m;
      end
      2'b11: begin
        src_b0_e = 32'bx;
        write_data_e = 32'bx;
      end
    endcase

    case (alu_src_e)
      1'b0: src_b_e = src_b0_e;
      1'b1: src_b_e = imm_ext_e;
    endcase
    
    pc_src_e = jump_e || (branch_e && zero_e); 
    pc_target_e = pc_e + imm_ext_e;
  end


  // always_ff @(posedge clk_i) begin
  //   case (forward_a)
  //     2'b00: src_a_e <= rd1_e;
  //     2'b01: src_a_e <= result_w;
  //     2'b10: src_a_e <= alu_result_m;
  //     2'b11: src_a_e <= 32'bx;
  //   endcase 
  //  
  //   case (forward_b)
  //     2'b00: begin 
  //       src_b0_e <= rd2_e;
  //       write_data_e <= rd2_e;
  //     end
  //     2'b01: begin 
  //       src_b0_e <= alu_result_m;
  //       write_data_e <= alu_result_m;
  //     end
  //     2'b10: begin 
  //       src_b0_e <= result_w;
  //       write_data_e <= result_w;
  //     end
  //     2'b11: begin
  //       src_b0_e <= 32'bx;
  //       write_data_e <= 32'bx;
  //     end
  //   endcase

  //   case (alu_src_e)
  //     1'b0: src_b_e <= src_b0_e;
  //     1'b1: src_b_e <= imm_ext_e;
  //   endcase
  //   
  //   pc_src_e <= jump_e || (branch_e && zero_e); 
  //   pc_target_e <= pc_e + imm_ext_e;
  // end

  // Memory stage   
  logic reg_write_m, mem_write_m;
  logic [1:0] result_src_m;
  logic [4:0] rd_m;
  logic [31:0] alu_result_m, write_data_m, pc_plus4_m, read_data_m;
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

  always_ff @(posedge clk_i) begin
    alu_result_o <= alu_result_m;
    mem_write_o <= mem_write_m;
    write_data_o <= write_data_m;
  end

  // Writeback stage
  logic reg_write_w;
  logic [1:0] result_src_w;
  logic [4:0] rd_w;
  logic [31:0] alu_result_w, rd1_w, pc_plus4_w, result_w;
  reg_w reg_w(
    .clk_i(clk_i),
    .reg_write_m_i(reg_write_m),
    .result_src_m_i(result_src_m),
    .alu_result_m_i(alu_result_m),
    .rd1_m_i(read_data_m),
    .rd_m_i(rd_m),
    .pc_plus4_m_i(pc_plus4_m),
    .reg_write_w_o(reg_write_w),
    .result_src_w_o(result_src_w),
    .alu_result_w_o(alu_result_w),
    .rd1_w_o(rd1_w),
    .rd_w_o(rd_w),
    .pc_plus4_w_o(pc_plus4_w));

  always_comb begin
    case (result_src_w)
      2'b00: result_w = alu_result_w;
      2'b01: result_w = rd1_w;
      2'b10: result_w = pc_plus4_w;
      2'b11: result_w = 32'bx;
    endcase
  end

  // always_ff @(posedge clk_i) begin
  //   case (result_src_w)
  //     2'b00: result_w <= alu_result_w;
  //     2'b01: result_w <= rd1_w;
  //     2'b10: result_w <= pc_plus4_w;
  //     2'b11: result_w <= 32'bx;
  //   endcase
  // end

endmodule
