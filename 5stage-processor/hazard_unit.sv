/*
 * Harzard Unit Module
 */

module hazard_unit(input  logic [4:0] rs1_i,
                   input  logic [4:0] rs2_i,
                   input  logic [4:0] rd_i,
                   input  logic       reg_write_i,
                   output logic [1:0] forward_a,
                   output logic [1:0] forward_b);

  // ================
  // Bypass Unit
  // ================

 always_comb begin
    // forward_a
    if ((rs_1 == red_m) && reg_write && (rs_1 != 4'b0000))
        forward_a = 2'b10;
    else if ((rs_1 == red_w) && reg_write && (rs_1 != 4'b0000))
        forward_a = 2'b01;
    else
        forward_a = 2'b00;

    // forward_b
    if ((rs_2 == red_m) && reg_write && (rs_2 != 4'b0000))
        forward_b = 2'b10;
    else if ((rs_2 == red_w) && reg_write && (rs_2 != 4'b0000))
        forward_b = 2'b01;
    else
        forward_b = 2'b00;
  end

end module  
