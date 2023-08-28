/*
 * Register from the Fetch -> Decode stage
 * Fetch register is fairly simple, it just hold the pc value for the next instruction
 */
module reg_f(input  logic        clk_i,
             input  logic        en_i,
             input  logic        rst_i,
             input  logic [31:0] pc_f_i,
             output logic [31:0] pc_f_o);

  always_ff @(posedge clk_i) begin
    case (en_i)
      1'b1: pc_f_o <= pc_f_i;
      1'b0: pc_f_o <= pc_f_o;
    endcase

    if (rst_i) begin
      pc_f_o <= 0;
    end
  end 

endmodule
