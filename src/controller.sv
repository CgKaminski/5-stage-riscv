module controller(input logic [6:0] op,
                  input logic [2:0] funct3,
                  input logic funct7b5, zero,
                  output logic [1:0] result_src, imm_src,
                  output logic  mem_write, pc_src, alu_src, reg_write, jump,
                  output logic [2:0] alu_control);

  logic [1:0] alu_op;
  logic branch;

  main_decoder main_dec(op, result_src, mem_write, branch, alu_src, reg_write,
                        jump, imm_src, alu_op);
  alu_decoder alu_dec(op[5], funct3, funct7b5, alu_op, alu_control);

  assign pc_src = branch & zero | jump;

  endmodule
