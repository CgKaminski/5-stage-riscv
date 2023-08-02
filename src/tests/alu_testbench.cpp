#include "Valu.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Valu* top = new Valu;

  // Test #1: 1 + 1
  top -> alu_control = 0b000;
  top -> A = 0x0000'0001;
  top -> B = 0x0000'0001;
  top -> eval();
  if (top -> result != 0x0000'0002) 
  {
    std::cout << "ERROR TEST #1" << std::endl;
    std::cout << "RESULT: " << top -> result << std::endl;
    delete top;
    return 1;
  }

  delete top;
  std::cout << "ALL TESTS PASSED" << std::endl;
  return 0;
}

