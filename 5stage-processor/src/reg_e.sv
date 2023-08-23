/*
 * Register file for Decode -> Execute stage
 */
module reg_e(input  logic        ckl_i,
             input  logic        clr_i,
             input  logic        reg_write_d_i,
             input  logic [1:0]  result_src_d_i,
             input  logic        mem_write_d_i,
             input  logic        jump_d_i,
             input  logic        branch_d_i,
             input  logic [2:0]  alu_control_d_i,
             input  logic        alu_src_d_i,
             input  logic [31:0] rd1_d_i,
             input  logic [31:0] rd2_d_i,
             input  logic [31:0] pc_d_i,
             input  logic [4:0]  rs1_d_i,
             input  logic [4:0]  rs2_d_i,
             input  logic [4:0]  rd_d_i,
             input  logic [31:0] imm_d_i,
             input  logic [31:0] pc_plus4_d_i,
             output logic        reg_write_e_o,
             output logic [1:0]  result_src_e_o,
             output logic        mem_write_e_o,
             output logic        jump_e_o,
             output logic        branch_e_o,
             output logic [2:0]  alu_control_e_o,
             output logic        alu_src_e_o,
             output logic [31:0] rd1_e_o,
             output logic [31:0] rd2_e_o,
             output logic [31:0] pc_e_o,
             output logic [4:0]  rs1_e_o,
             output logic [4:0]  rs2_e_o,
             output logic [4:0]  rd_e_o,
             output logic [31:0] imm_e_o,
             output logic [31:0] pc_plus4_e_o);

  always_ff (posedge clk_i) begin
    if (clr_i) // All output get set to 0 (with their respected width)
      reg_write_e_o <= 1'b0;
      result_src_e_o <= 2'b0;
      mem_write_e_o <= 1'b0;
      jump_e_o <= 1'b0;
      branch_e_o <= 1'b0;
      alu_control_e_o <= 3'b0;
      alu_src_e_o <= 1'b0;
      rd1_e_o <= 32'b0;
      rd2_e_o <= 32'b0;
      pc_e_o <= 32'b0;
      rs1_e_o <= 5'b0;
      rs2_e_o <= 5'b0;
      rd_e_o <= 5'b0;
      imm_e_o <= 32'b0;
      pc_plus4_e_o <= 32'b0;
    else
      reg_write_e_o <= reg_write_d_i;
      result_src_e_o <= result_src_d_i;
      mem_write_e_o <= mem_write_d_i;
      jump_e_o <= jump_d_i;
      branch_e_o <= branch_d_i;
      alu_control_e_o <= alu_control_d_i;
      alu_src_e_o <= alu_src_d_i;
      rd1_e_o <= rd1_d_i;
      rd2_e_o <= rd2_d_i;
      pc_e_o <= pc_d_i;
      rs1_e_o <= rs1_d_i;
      rs2_e_o <= rs2_d_i;
      rd_e_o <= rd_d_i;
      imm_e_o <= imm_d_i;
      pc_plus4_e_o <= pc_plus4_d_i;
  end

endmodule
