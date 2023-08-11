module datapath(input logic clk, reset, pc_src, alu_src, reg_write, 
                input logic [1:0] result_src, imm_src, 
                input logic [2:0] alu_control,
                input logic [31:0] pc, read_data,
                output logic zero, 
                output logic [31:0] pc, alu_result, write_data);

  logic [31:0] pc_next, pc_plus_4, pc_target;
  logic [31:0] imm_exit;
  logic [31:0] src_a, src_b; 
  logic [31:0] result;

  // next PC logic
  flopr pc_reg(clk, reset, pc_next, pc);
  pc_plus_4 = pc + 4;
  pc_target = pc + imm_exit;
  pc_next = (pc_src == 0) ? pc_plus_4 : pc_target;

  // register file logic
  rf regfile(clk, reg_write, intruction[19:15], instruction[24:20], 
    instruction[11:7], result, src_a, write_data);
  imm_exit = {instruction[31:7], 2'b0000000};

  // alu logic
  src_b = (write_data == 0) ? imm_exit : alu_src;
  alu alu(src_a, src_b, alu_control, alu_result, zero);
  case(result_src):
    2'b00: result = alu_result;
    2'b01: result = read_data;
    2'b10: result = pc_plus_4;
  endcase 

endmodule

