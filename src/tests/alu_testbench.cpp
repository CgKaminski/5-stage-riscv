#include "Valu.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Valu* top = new Valu;

  // Test #1: 1 + 1
  top->alu_control = 0b000;
  top->A = 0x0000'0001;
  top->B = 0x0000'0001;
  top->eval();
  if (top->result != 0x0000'0002 || top->C != 0 || top->V != 0 || top->N != 0 || top->Z != 0) 
  {
    std::cout << "ERROR TEST #1" << std::endl;
    std::cout << "RESULT: " << top -> result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  }

  // Test #2: 1 - 1
  top->alu_control = 0b001;
  top->A = 0x0000'0001;
  top->B = 0x0000'0001;
  top->eval();
  if (top->result != 0x0000'0000 || top->C != 0 || top->V != 0 || top->N != 0 || top->Z != 1) 
  {
    std::cout << "ERROR TEST #2" << std::endl;
    std::cout << "RESULT: " << top -> result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  }

  // Test #3: 0x5555'5555 AND 0xAAAA'AAAA
  top->alu_control = 0b010;
  top->A = 0x5555'5555;
  top->B = 0xAAAA'AAAA;
  top->eval();
  if (top->result != 0x0000'0000 || top->C != 0 || top->V != 0 || top->N != 0 || top->Z != 1) 
  {
    std::cout << "ERROR TEST #3" << std::endl;
    std::cout << "RESULT: " << top->result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  } 

  // Test #4: 0x5555'5555 OR 0xAAAA'AAAA
  top->alu_control = 0b011;
  top->A = 0x5555'5555;
  top->B = 0xAAAA'AAAA;
  top->eval();
  if (top->result != 0xFFFF'FFFF || top->C != 0 || top->V != 0 || top->N != 1 || top->Z != 0) 
  {
    std::cout << "ERROR TEST #4" << std::endl;
    std::cout << "RESULT: " << top->result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  } 

  // Test #5 0x7FFF'FFFF + 0x7FFF'FFFF
  top->alu_control = 0b000;
  top->A = 0x7FFF'FFFF;
  top->B = 0x7FFF'FFFF;
  top->eval();
  if (top->result != 0xFFFF'FFFE || top->C != 0 || top->V != 1 || top->N != 1 || top->Z != 0) 
  {
    std::cout << "ERROR TEST #5" << std::endl;
    std::cout << "RESULT: " << top->result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  } 

  // Test #6 0xFFFF'FFFF - 0x0000'0001
  top->alu_control = 0b000;
  top->A = 0xFFFF'FFFF;
  top->B = 0x0000'0001;
  top->eval();
  if (top->result != 0x0000'0000 || top->C != 1 || top->V != 0 || top->N != 0 || top->Z != 1) 
  {
    std::cout << "ERROR TEST #6" << std::endl;
    std::cout << "RESULT: " << top->result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  } 

  // Test #7: SLT 0x0000'0001 -> 0x0000'0002
  top->alu_control = 0b101;
  top->A = 0x0000'0002;
  top->B = 0x0000'0002;
  top->eval();
  if (top->result != 0x0000'00000|| top->C != 0 || top->V != 0 || top->N != 0 || top->Z != 1) 
  {
    std::cout << "ERROR TEST #7" << std::endl;
    std::cout << "RESULT: " << top->result << std::endl;
    std::cout << "C: " << top->C << " V: " << top->V << " N: " << top->N << " Z: " << top->Z << std::endl;
    delete top;
    return 1;
  }

  delete top;
  std::cout << "ALL TESTS PASSED" << std::endl;
}
