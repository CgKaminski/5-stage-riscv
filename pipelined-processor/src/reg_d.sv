/*
 * Register for the Fetch -> Decode stage
 * en: enable signal (should stall the pipeline)
 * clr: clear signal (should flush the pipeline)
 */
module reg_d(input  logic        en_i,
             input  logic        clr_i,
             input  logic        clk_i,
             input  logic [31:0] rd_f_i, 
             input  logic [31:0] pc_plus4_f_i, 
             input  logic [31:0] pc_f_i,
             output logic [31:0] instr_d_o,
             output logic [31:0] pc_d_o,
             output logic [31:0] pc_plus4_d_o);

  always_ff @(posedge clk_i) begin
    if (clr_i) begin                                                          
      instr_d_o <= 0;
      pc_d_o <= 0;
      pc_plus4_d_o <= 0;
    end
    else if (en_i) begin                                                      
      instr_d_o <= instr_d_o;
      pc_d_o <= pc_d_o;
      pc_plus4_d_o <= pc_plus4_d_o;
    end
    else begin
      instr_d_o <= rd_f_i;
      pc_d_o <= pc_f_i;
      pc_plus4_d_o <= pc_plus4_f_i;
    end

  end

endmodule
