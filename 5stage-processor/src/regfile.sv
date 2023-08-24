module regfile(
  input  logic        clk_i,
  input  logic        we3_i,
  input  logic [4:0]  a1_i,
  input  logic [4:0]  a2_i,
  input  logic [4:0]  a3_i,
  input  logic [31:0] wd3_i,
  output logic [31:0] rd1_o,
  output logic [31:0] rd2_o);

  logic [31:0] rf[31:0];
  
  always_ff @(negedge clk_i) begin
    if (we3_i) rf[a3_i] <= wd3_i;
  end

  assign rd1_o = (a1_i != 0) ? rf[a1_i] : 0;
  assign rd2_o = (a2_i != 0) ? rf[a2_i] : 0;

endmodule
