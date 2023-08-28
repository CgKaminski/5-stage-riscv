#include <verilated.h>
#include "Vtop.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop;

    std::cout << "Simulation started\n" << std::endl;

    top->reset_i = 0;
    std::cout << "Simulation running" << std::endl;
    for (int cycle = 0; cycle < 30 ; ++cycle) {
        std::cout << "Cycle: " << cycle << std::endl;
        top->clk_i = 1;
        top->eval();

        if (top->mem_write_o) {
            if (top->data_adr_o == 100 && top->write_data_o == 25) {
                printf("Test succeeded\n");
                std::cout << "dataadr: " << top->data_adr_o << std::endl;
                std::cout << "writedata: " << top->write_data_o << std::endl;
                std::cout << "memwrite: " << top->mem_write_o << std::endl;
                break;
            } else if (top->data_adr_o != 96) {
                printf("Test failed\n");
                std::cout << "dataadr: " << top->data_adr_o << std::endl;
                std::cout << "writedata: " << top->write_data_o << std::endl;
                std::cout << "memwrite: " << top->mem_write_o << std::endl;
                break;
            }
        }
        

        top->clk_i = 0;
        top->eval();
    }

    delete top;
    std::cout << "Simulation ended\n" << std::endl;
    return 0;
}
