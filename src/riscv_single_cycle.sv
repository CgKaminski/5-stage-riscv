module riscv_single_cycle(input logic clk, reset,
                    input logic [31:0] instruction, read_data,
                    output logic mem_write,
                    output logic [31:0] pc, alu_result, write_data);

  logic alu_src, reg_write, pc_src, jump, zero, negative, carry, overflow;
  logic [1:0] result_src, imm_src;
  logic [2:0] alu_control;

  controller contr(.op(instruction[6:0]), .funct3(instruction[14:12]), 
                   .funct7b5(instruction[30]), .zero(zero),
                   .result_src(result_src), .mem_write(mem_write), 
                   .pc_src(pc_src), .alu_src(alu_src), .reg_write(reg_write), 
                   .jump(jump), .imm_src(imm_src), .alu_control(alu_control));

  datapath dp(.clk(clk), .reset(reset), .result_src(result_src), 
              .pc_src(pc_src), .alu_src(alu_src), .reg_write(reg_write), 
              .imm_src(imm_src), .alu_control(alu_control), .zero(zero), 
              .negative(negative), .carry(carry), .overflow(overflow),
              .pc(pc), .instruction(instruction), .alu_result(alu_result),
              .write_data(write_data), .read_data(read_data));

endmodule : riscv_single_cycle
