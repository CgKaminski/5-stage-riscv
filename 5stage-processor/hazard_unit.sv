/*
 * Harzard Unit Module
 */

module hazard_unit(input  logic [4:0] rs1_e_i,
                   input  logic [4:0] rs2_e_i,
                   input  logic [4:0] rd_m_i,
                   input  logic [4:0] rd_w_i,
                   input  logic       reg_write_m_i,
                   input  logic       reg_write_w_i,
                   input  logic [4:0] rs1_d_i,
                   input  logic [4:0] rs2_d_i,
                   input  logic [4:0] rd_e_i,
                   output logic [1:0] forward_a_o,
                   output logic [1:0] forward_b_o,
                   output logic       stall_f_o,
                   output logic       stall_d_o,
                   output logic       flush_e_o,
                   output logic       result_src_e_o);


  // ================
  // Bypass Unit
  // ================

  always_comb begin
    // forward_a
    if ((rs1_e_i == rd_m_i) && reg_write_m_i && (rs1_e_i != 4'b0000))
        forward_a_o = 2'b10;
    else if ((rs1_e_i == rd_w_i) && reg_write_w_i && (rs1_e_i != 4'b0000))
        forward_a_o = 2'b01;
    else
        forward_a_o = 2'b00;

    // forward_b
    if ((rs2_e_i == rd_m_i) && reg_write_m_i && (rs2_e_i != 4'b0000))
        forward_b_o = 2'b10;
    else if ((rs2_e_i == rd_w_i) && reg_write_w_i && (rs2_e_i != 4'b0000))
        forward_b_o = 2'b01;
    else
        forward_b_o = 2'b00;
  end


  // ================
  // Data Hazard (stalling) Unit
  // ===============

  logic lw_stall; 

  always_comb begin
    assign lw_stall = result_src_e_o & ((rs1_d_i == rd_e_i) || (rs2_d_i == rd_e_i));
    assign stall_f_o = lw_stall;
    assign stall_d_o = lw_stall;
    assign flush_e_o = lw_stall;
  end  

end module  
