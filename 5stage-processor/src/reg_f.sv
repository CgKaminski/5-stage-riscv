/*
 * Register from the Fetch -> Decode stage
 * Fetch register is fairly simple, it just hold the pc value for the next instruction
 */
module reg_f(input  logic        clk_i,
             input  logic        en_i,
             input  logic [31:0] pc_f_i,
             output logic [31:0] pc_f_o);

  always_ff(posedge clk_i) begin
    if (en_i)
      pc_f_o <= pc_f_o;
    else
        pc_f_o <= pc_f_i;
  end 

endmodule
