`include "src/processor.sv"
module top(
  input  logic        clk_i,
  input  logic        reset_i,
  output logic [31:0] write_data_o,
  output logic [31:0] data_adr_o,
  output logic        mem_write_o);
 

  processor processor(
    .clk_i(clk_i),
    .reset_i(reset_i),
    .mem_write_o(mem_write_o),
    .alu_result_o(data_adr_o),
    .write_data_o(write_data_o));

endmodule
