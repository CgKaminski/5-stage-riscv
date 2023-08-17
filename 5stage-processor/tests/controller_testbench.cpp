/*
 * Testbench for the controller module
 * How to run: use the controller_testbench.sh script located in the ~/5stage-processor/scripts directory.
 * Note: this testbench is not exhaustive, however due to the simplicity of the module that is **mostly** okay,
*/

#include "Vcontroller.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Vcontroller* top = new Vcontroller;

  // Test #1: R-type (add) instruction w/ register write
  top->op_i       = 0b0110011;
  top->funct3_i   = 0b000;
  top->funct7b5_i = 0;
  top->zero_i     = 0;
  top->eval();
  if (top->pc_src_o != 0b0 || top->reg_write_o != 1 || top->alu_src_o != 0b0 || top->mem_write_o != 0b0 || 
      top->result_src_o != 0b00 || top->jump_o != 0b0 || top->alu_control_o != 0b000)
  {
    std::cout << "ERROR TEST #1" << std::endl;
    std::cout << "pc_src ="        << top->pc_src_o      << 
                 " reg_write = "   << top->reg_write_o   << 
                 " alu_src = "     << top->alu_src_o     << 
                 " mem_write = "   << top->mem_write_o   << 
                 " result_src = "  << top->result_src_o  << 
                 " jump = "        << top->jump_o        << 
                 " alu_control = " << top->alu_control_o << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #1 (add)  PASSED" << std::endl;
  }


  // Test #2 I-type (addi) instruction w/ register write
  top->op_i       = 0b0010011;
  top->funct3_i   = 0b000;
  top->funct7b5_i = 0;
  top->zero_i     = 1;
  top->eval();
  if (top->pc_src_o != 0b0 || top->reg_write_o != 1 || top->alu_src_o != 0b1 || top->mem_write_o != 0b0 || 
      top->result_src_o != 0b00 || top->jump_o != 0b0 || top->alu_control_o != 0b000)
  {
    std::cout << "ERROR TEST #2" << std::endl;
    std::cout << "pc_src ="        << top->pc_src_o      << 
                 " reg_write = "   << top->reg_write_o   << 
                 " alu_src = "     << top->alu_src_o     << 
                 " mem_write = "   << top->mem_write_o   << 
                 " result_src = "  << top->result_src_o  << 
                 " jump = "        << top->jump_o        << 
                 " alu_control = " << top->alu_control_o << std::endl;
    delete top;
  } 
  else
  {
     std::cout << "TEST #2 (addi) PASSED" << std::endl;
  }


  // Test #3: R-type (or) instruction w/ register write
    top->op_i       = 0b0110011;
    top->funct3_i   = 0b110;
    top->funct7b5_i = 0;
    top->zero_i     = 0;
    top->eval();
    if (top->pc_src_o != 0b0 || top->reg_write_o != 1 || top->alu_src_o != 0b0 || top->mem_write_o != 0b0 || 
        top->result_src_o != 0b00 || top->jump_o != 0b0 || top->alu_control_o != 0b011)
    {
      std::cout << "ERROR TEST #3 (or)" << std::endl;
      std::cout << "pc_src ="        << top->pc_src_o      << 
                   " reg_write = "   << top->reg_write_o   << 
                   " alu_src = "     << top->alu_src_o     << 
                   " mem_write = "   << top->mem_write_o   << 
                   " result_src = "  << top->result_src_o  << 
                   " jump = "        << top->jump_o        << 
                   " alu_control = " << top->alu_control_o << std::endl;
      delete top;
    } 
    else
    {
       std::cout << "TEST #3 (or)   PASSED" << std::endl;
    }

  // Test #4: (slt) instruction w/ register write
      top->op_i       = 0b0110011;
      top->funct3_i   = 0b010;
      top->funct7b5_i = 0;
      top->zero_i     = 0;
      top->eval();
      if (top->pc_src_o != 0b0 || top->reg_write_o != 1 || top->alu_src_o != 0b0 || top->mem_write_o != 0b0 || 
          top->result_src_o != 0b00 || top->jump_o != 0b0 || top->alu_control_o != 0b101)
      {
        std::cout << "ERROR TEST #4 (slt)" << std::endl;
        std::cout << "pc_src ="        << top->pc_src_o      << 
                     " reg_write = "   << top->reg_write_o   << 
                     " alu_src = "     << top->alu_src_o     << 
                     " mem_write = "   << top->mem_write_o   << 
                     " result_src = "  << top->result_src_o  << 
                     " jump = "        << top->jump_o        << 
                     " alu_control = " << top->alu_control_o << std::endl;
        delete top;
      } 
      else
      {
         std::cout << "TEST #4 (slt)  PASSED" << std::endl;
      }


  delete top;
  std::cout << "ALL TESTS PASSED" << std::endl;
}
