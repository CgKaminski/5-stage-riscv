module datapath(input logic clk, reset, pc_src, alu_src, reg_write, 
                input logic [1:0] result_src, imm_src, 
                input logic [2:0] alu_control,
                input logic [31:0] read_data, instruction,
                output logic zero, negative, carry, overflow,
                output logic [31:0] pc, alu_result, write_data);

  logic [31:0] pc_next, pc_plus_4, pc_target;
  logic [31:0] imm_exit;
  logic [31:0] src_a, src_b; 
  logic [31:0] result;

  // next PC logic
  flopr #(32) pc_reg(.clk(clk), .reset(reset), .d(pc_next), .q(pc));
  assign pc_plus_4 = pc + 4;
  assign pc_target = pc + imm_exit;
  assign pc_next = (pc_src == 0) ? pc_plus_4 : pc_target;
  extend ext(instruction[31:7], imm_src, imm_exit);

  // register file logic
  regfile regfile(.clk(clk), .we3(reg_write), .a1(instruction[19:15]), 
                  .a2(instruction[24:20]), .a3(instruction[11:7]), .wd3(result),
                  .rd1(src_a), .rd2(write_data));

  // alu logic
  assign src_b = (alu_src == 0) ? write_data : imm_exit;
  alu alu(.A(src_a), .B(src_b), .alu_control(alu_control), .result(alu_result),
          .Z(zero), .N(negative), .C(carry), .V(overflow));

  assign result = result_src[1] ? pc_plus_4 : (result_src[0] ? read_data : alu_result);

endmodule

