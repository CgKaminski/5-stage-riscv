/*
 * Instruction memory module
 */
module imem(
  input  logic [31:0] a_i,
  output logic [31:0] rd_o);

  logic [31:0] ram[63:0];

  // Reading from test file and storing in ram
  initial 
    $readmemh("src/riscvtest.txt", ram);
  assign rd_o = ram[a_i[31:2]];

endmodule 
