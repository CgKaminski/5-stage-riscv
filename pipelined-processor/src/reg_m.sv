/*
 * Register file for Execute -> Memory stage
 */
module reg_m(input  logic        clk_i,
             input  logic        reg_write_e_i,
             input  logic [1:0]  result_src_e_i,
             input  logic        mem_write_e_i,
             input  logic [31:0] alu_result_e_i,
             input  logic [31:0] write_data_e_i, 
             input  logic [4:0]  rd_e_i,
             input  logic [31:0] pc_plus4_e_i,
             output logic        reg_write_m_o,
             output logic [1:0]  result_src_m_o,
             output logic        mem_write_m_o,
             output logic [31:0] alu_result_m_o,
             output logic [31:0] write_data_m_o,
             output logic [4:0]  rd_m_o,
             output logic [31:0] pc_plus4_m_o);

  always_ff @(posedge clk_i) begin
    reg_write_m_o   <= reg_write_e_i;
    result_src_m_o  <= result_src_e_i;
    mem_write_m_o   <= mem_write_e_i;
    alu_result_m_o  <= alu_result_e_i;
    write_data_m_o  <= write_data_e_i;
    rd_m_o          <= rd_e_i;
    pc_plus4_m_o    <= pc_plus4_e_i;
  end

endmodule
