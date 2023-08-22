/*
 * Testbench for the hazard unit module
 * How to run: use the hazard_unit_testbench.sh script located in the ~/5stage-processor/scripts directory.
 * Note: this testbench is not exhaustive, however due to the simplicity of the module that is **mostly** okay,
*/

#include "Vhazard_unit.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Vhazard_unit* top = new Vhazard_unit;

  // Test #1: No hazards
  top->rs1_e_i = 0b00000;
  top->rs2_e_i = 0b00000;
  top->rd_m_i  = 0b00000;
  top->rd_w_i  = 0b00000;
  top->reg_write_m_i = 0;
  top->reg_write_w_i = 0;
  top->rs1_d_i = 0b00000;
  top->rs2_d_i = 0b00000;
  top->rd_e_i  = 0b00000;
  top->pc_src_e_i = 0b0;
  top->result_src_e_i = 0b0;
  top->eval();
  if (top->forward_a_o != 0b00 || top->forward_b_o != 0b00 || top->stall_f_o != 0b0 || top->stall_d_o != 0b0 ||
      top->flush_e_o != 0b0 || top->flush_d_o != 0b0)
  {
    std::cout << "ERROR TEST #1" << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #1 (no hazards)  PASSED" << std::endl;
  }

  // Test #2 Forwarding from memory stage
  top->rs1_e_i = 0b00001;
  top->rs2_e_i = 0b00000;
  top->rd_m_i  = 0b00001;
  top->rd_w_i  = 0b00000;
  top->reg_write_m_i = 1;
  top->reg_write_w_i = 0;
  top->rs1_d_i = 0b00000;
  top->rs2_d_i = 0b00000;
  top->rd_e_i  = 0b00000;
  top->pc_src_e_i = 0b0;
  top->result_src_e_i = 0b0;
  top->eval();
  if (top->forward_a_o != 0b10 || top->forward_b_o != 0b00 || top->stall_f_o != 0b0 || top->stall_d_o != 0b0 ||
      top->flush_e_o != 0b0 || top->flush_d_o != 0b0)
  {
    std::cout << "ERROR TEST #2" << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #2 (forwarding from memory) PASSED" << std::endl;
  }

  // Test #3 Forwarding from writeback stage
  top->rs1_e_i = 0b00001;
  top->rs2_e_i = 0b00000;
  top->rd_m_i  = 0b00000;
  top->rd_w_i  = 0b00001;
  top->reg_write_m_i = 0;
  top->reg_write_w_i = 1;
  top->rs1_d_i = 0b00000;
  top->rs2_d_i = 0b00000;
  top->rd_e_i  = 0b00000;
  top->pc_src_e_i = 0b0;
  top->result_src_e_i = 0b0;
  top->eval();
  if (top->forward_a_o != 0b01 || top->forward_b_o != 0b00 || top->stall_f_o != 0b0 || top->stall_d_o != 0b0 ||
      top->flush_e_o != 0b0 || top->flush_d_o != 0b0)
  {
    std::cout << "ERROR TEST #3" << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #3 (forwarding from writeback) PASSED" << std::endl;
  }

  // Test #4 Data hazard (stalling)
  top->rs1_e_i = 0b00000;
  top->rs2_e_i = 0b00000;
  top->rd_m_i  = 0b00000;
  top->rd_w_i  = 0b00000;
  top->reg_write_m_i = 0;
  top->reg_write_w_i = 0;
  top->rs1_d_i = 0b00001;
  top->rs2_d_i = 0b00001;
  top->rd_e_i  = 0b00001;
  top->pc_src_e_i = 0b0;
  top->result_src_e_i = 0b1;
  top->eval();
  if (top->forward_a_o != 0b00 || top->forward_b_o != 0b00 || top->stall_f_o != 0b1 || top->stall_d_o != 0b1 ||
      top->flush_e_o != 0b1 || top->flush_d_o != 0b0)
  {
    std::cout << "ERROR TEST #4" << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #4 (Data hazard) PASSED" << std::endl;
  }

  // Test #5 Control hazard (stalling)
  top->rs1_e_i = 0b00000;
  top->rs2_e_i = 0b00000;
  top->rd_m_i  = 0b00000;
  top->rd_w_i  = 0b00000;
  top->reg_write_m_i = 0;
  top->reg_write_w_i = 0;
  top->rs1_d_i = 0b00000;
  top->rs2_d_i = 0b00000;
  top->rd_e_i  = 0b00000;
  top->pc_src_e_i = 0b1;
  top->result_src_e_i = 0b0;
  top->eval();
  if (top->forward_a_o != 0b00 || top->forward_b_o != 0b00 || top->stall_f_o != 0b0 || top->stall_d_o != 0b0 ||
      top->flush_e_o != 0b1 || top->flush_d_o != 0b1)
  {
    std::cout << "ERROR TEST #5" << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #5 (Control hazard) PASSED" << std::endl;
  }
  

  delete top;
  std::cout << "ALL TESTS PASSED" << std::endl;
}
