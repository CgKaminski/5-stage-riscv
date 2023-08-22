/*
 * Datapath Module 
 * This module is responsible for the execution of the instructions including the organization of the pipeline. This 
 * particular implementation is a 5 stage pipeline with the following stages: Fetch, Decode, Execute, Memory, Writeback.
 * Note: the datapath implementation is also located inside the 
 */

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
  controller controller(.op_i(instr[6:0]), .funct3_i(instr[14:12]), .funct7_i(instr[30]), .zero_i(zero)
                        .pc_src_o(pc_src), .reg_write_o(reg_write), .imm_src_o(imm_src), .alu_src_o(alu_src), 
                        .mem_write_o(mem_write_o), .result_src_o(result_src), .jump_o(jump), 
                        .alu_control_o(alu_control));

  /*
   * Datapath
   * The datapath is a 5 stage pipeline with the following stages: Fetch, Decode, Execute, Memory, Writeback.
   */

  