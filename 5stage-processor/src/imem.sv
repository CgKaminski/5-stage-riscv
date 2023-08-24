/*
 * Instruction memory module
 */
module imem(
  input  logic [31:0] a_i,
  output logic [31:0] rd_o);

  logic [31:0] ram[63:0];

  // Reading from test file and storing in ram
  initial 
    $readmemh("riscvtest.txt", ram);
  assign rd = ram[a[31:2]];

endmodule 
