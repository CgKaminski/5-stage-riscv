/* 
 * Register file for Memory -> Writeback stage
 */
module reg_w(
  input  logic        clk_i,   
  input  logic        reg_write_m_i,
  input  logic [1:0]  result_src_m_i,
  input  logic [31:0] alu_result_m_i,
  input  logic [31:0] rd1_m_i,
  input  logic [4:0]  rd_m_i,
  input  logic [31:0] pc_plus4_m_i,
  output logic        reg_write_w_o,
  output logic [1:0]  result_src_w_o,
  output logic [31:0] alu_result_w_o,
  output logic [31:0] rd1_w_o,
  output logic [4:0]  rd_w_o,
  output logic [31:0] pc_plus4_w_o);

  always_ff @(posedge clk_i) begin
    reg_write_w_o  <= reg_write_m_i;
    result_src_w_o <= result_src_m_i;
    alu_result_w_o <= alu_result_m_i;
    rd1_w_o        <= rd1_m_i;
    rd_w_o         <= rd_m_i;
    pc_plus4_w_o   <= pc_plus4_m_i;
    end

endmodule
