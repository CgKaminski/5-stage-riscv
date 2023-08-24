/*
 * ALU Module
 */ 
module alu(
  input  logic [31:0] src_a_i,
  input  logic [31:0] src_b_i,
  input  logic [2:0]  alu_control_i,
  output logic [31:0] result_o,
  output logic        overflow_o,
  output logic        carry_o,
  output logic        negative_o,
  output logic        zero_o);

 logic [31:0] and_result, or_result, logic_result, adder_result, slt_result;
 logic [31:0] logic_adder_result;
 logic carry;

 // AND + OR case
 assign and_result = src_a_i & src_b_i;
 assign or_result = src_a_i | src_b_i;
 assign logic_result = (alu_control_i[0]) ? or_result : and_result;

 // ADD + SUB case
 assign {carry, adder_result} = (alu_control_i[0]) ? src_a_i - src_b_i : src_a_i + src_b_i;

 // SLT case
 assign slt_result = {31'b0, overflow_o ^ adder_result[31]};

 // Result
 assign logic_adder_result = (alu_control_i[1]) ? logic_result : adder_result;
 assign result_o = (alu_control_i[2]) ? slt_result : logic_adder_result;
 
 // Overflow flag
 assign overflow_o = (((src_a_i[31] == src_b_i[31]) && (alu_control_i[0] == 0)) || ((src_a_i[31] != src_b_i[31]) && (alu_control_i[0] == 1))) && (src_a_i[31] != adder_result[31]) && ~alu_control_i[1];

 // Carry flag
 assign carry_o = ~alu_control_i[1] && ~alu_control_i[2] && carry;

 // Negative flag
 assign negative_o = result_o[31];

 // Zero flag
 assign zero_o = (32'b0 == result_o);

endmodule
