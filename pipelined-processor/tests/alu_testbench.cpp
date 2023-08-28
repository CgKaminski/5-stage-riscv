#include "Valu.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Valu* top = new Valu;

  // Test #1: 1 + 1
  top->alu_control_i = 0b000;
  top->src_a_i = 0x0000'0001;
  top->src_b_i = 0x0000'0001;
  top->eval();
  if (top->result_o != 0x0000'0002 || top->carry_o != 0 || top->overflow_o != 0 || top->negative_o != 0 || top->zero_o != 0) 
  {
    std::cout << "ERROR TEST #1" << std::endl;
    delete top;
    return 1;
  }

  // Test #2: 1 - 1
  top->alu_control_i = 0b001;
  top->src_a_i = 0x0000'0001;
  top->src_b_i = 0x0000'0001;
  top->eval();
  if (top->result_o != 0x0000'0000 || top->carry_o != 0 || top->overflow_o != 0 || top->negative_o != 0 || top->zero_o != 1) 
  {
    delete top;
    return 1;
  }

  // Test #3: 0x5555'5555 AND 0xAAAA'AAAA
  top->alu_control_i = 0b010;
  top->src_a_i = 0x5555'5555;
  top->src_b_i = 0xAAAA'AAAA;
  top->eval();
  if (top->result_o != 0x0000'0000 || top->carry_o != 0 || top->overflow_o != 0 || top->negative_o != 0 || top->zero_o != 1) 
  {
    delete top;
    return 1;
  } 

  // Test #4: 0x5555'5555 OR 0xAAAA'AAAA
  top->alu_control_i = 0b011;
  top->src_a_i = 0x5555'5555;
  top->src_b_i = 0xAAAA'AAAA;
  top->eval();
  if (top->result_o != 0xFFFF'FFFF || top->carry_o != 0 || top->overflow_o != 0 || top->negative_o != 1 || top->zero_o != 0) 
  {
    delete top;
    return 1;
  } 

  // Test #5 0x7FFF'FFFF + 0x7FFF'FFFF
  top->alu_control_i = 0b000;
  top->src_a_i = 0x7FFF'FFFF;
  top->src_b_i = 0x7FFF'FFFF;
  top->eval();
  if (top->result_o != 0xFFFF'FFFE || top->carry_o != 0 || top->overflow_o != 1 || top->negative_o != 1 || top->zero_o != 0) 
  {
    delete top;
    return 1;
  } 

  // Test #6 0xFFFF'FFFF - 0x0000'0001
  top->alu_control_i = 0b000;
  top->src_a_i = 0xFFFF'FFFF;
  top->src_b_i = 0x0000'0001;
  top->eval();
  if (top->result_o != 0x0000'0000 || top->carry_o != 1 || top->overflow_o != 0 || top->negative_o != 0 || top->zero_o != 1) 
  {
    delete top;
    return 1;
  } 

  // Test #7: SLT 0x0000'0001 -> 0x0000'0002
  top->alu_control_i = 0b101;
  top->src_a_i = 0x0000'0002;
  top->src_b_i = 0x0000'0002;
  top->eval();
  if (top->result_o != 0x0000'00000|| top->carry_o != 0 || top->overflow_o != 0 || top->negative_o != 0 || top->zero_o != 1) 
  {
    delete top;
    return 1;
  }

  delete top;
  std::cout << "ALL TESTS PASSED" << std::endl;
}
