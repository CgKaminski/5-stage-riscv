module single_cycle(input logic clk, reset,
                    input logic [31:0] instruction, read_data,
                    output logic mem_write,
                    output logic [31:0] pc, alu_result, write_data);

  logic alu_src, reg_write, jump, zero;
  logic [1:0] result_src, imm_src;
  logic [2:0] alu_control;

  controller contr(instruction[6:0], instruction[14:12], instruction[30], zero,
                   result_src, mem_write, pc_src, alu_src, reg_write, jump, 
                   imm_src, alu_control);

  datapath dp(clk, reset, result_src, pc_src, alu_src, reg_write, imm_src, 
              alu_control, zero, pc, instruction, alu_result, write_data,
              read_data);

endmodule : single_cycle
