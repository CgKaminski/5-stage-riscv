/*
 * Data Memory module 
 */
module dmem(
  input  logic        clk_i,
  input  logic        we_i,
  input  logic [31:0] a_i,
  input  logic [31:0] wd_i,
  output logic [31:0] rd_o);

  logic [31:0] ram[63:0];
  assign rd_o = ram[a_i[31:2]];

  always_ff @(posedge clk_i) begin
    if (we_i) 
      ram[a_i[31:2]] <= wd_i;
  end

endmodule
