/*
 * ALU Module
 */ 
module alu(input logic [31:0] A, B,
          input logic [2:0] alu_control, 
          output logic [31:0] result,
          output logic V, C, N, Z);

 logic [31:0] and_result, or_result, logic_result, adder_result, slt_result;
 logic [31:0] logic_adder_result;
 logic carry;

 // AND + OR case
 assign and_result = A & B;
 assign or_result = A | B;
 assign logic_result = (alu_control[0]) ? or_result : and_result;

 // ADD + SUB case
 assign {carry, adder_result} = (alu_control[0]) ? A - B : A + B;

 // SLT case
 assign slt_result = {31'b0, V ^ adder_result[31]};

 // Result
 assign logic_adder_result = (alu_control[1]) ? logic_result : adder_result;
 assign result = (alu_control[2]) ? slt_result : logic_adder_result;
 
 // Overflow flag
 assign V = (((A[31] == B[31]) && (alu_control[0] == 0)) || ((A[31] != B[31]) && (alu_control[0] == 1))) && (A[31] != adder_result[31]) && ~alu_control[1];

 // Carry flag
 assign C = ~alu_control[1] && ~alu_control[2] && carry;

 // Negative flag
 assign N = result[31];

 // Zero flag
 assign Z = (32'b0 == result);

endmodule
