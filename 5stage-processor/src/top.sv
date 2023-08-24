`include "src/processor.sv"
module top(
  input  logic        clk_i,
  input  logic        reset_i,
  output logic [31:0] write_data_o,
  output logic [31:0] data_adr_o,
  output logic        mem_write_o);
 
  logic [31:0] pc, instr, read_data;

  processor processor(
    .clk_i(clk_i),
    .reset_i(reset_i),
    .pc_i(pc),
    .instr_i(instr),
    .alu_result_i(alu_result),
    .read_data_i(read_data),
    .mem_write_o(mem_write_o),
    .pc_o(pc),
    .instr_o(instr),
    .alu_result_o(data_adr_o),
    .write_data_o(write_data_o));

endmodule
