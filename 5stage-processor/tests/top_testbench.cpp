#include <verilated.h>
#include "Vprocessor.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vprocessor* top = new Vprocessor;

    top->clk_i = 0;
    top->reset_i = 1;

    top->eval();
    top->reset = 0;
    top->eval();

    std::cout << "Simulation started" << std::endl;

    for (int cycle = 0; cycle < 100; ++cycle) {
        top->clk = 1;
        top->eval();
        top->clk = 0;
        top->eval();
    }

    for (int cycle = 0; cycle < 200; ++cycle) {
        top->clk = 1;
        top->eval();

        if (top->memwrite) {
            if (top->data_adr_o == 84 && top->write_data_o == 7) {
                printf("Simulation succeeded\n");
                std::cout << "dataadr: " << top->data_adr_o << std::endl;
                std::cout << "writedata: " << top->write_data_o << std::endl;
                break;
            } else if (top->data_adr_o != 80) {
                printf("Simulation failed\n");
                std::cout << "dataadr: " << top->data_adr_o << std::endl;
                std::cout << "writedata: " << top->write_data_o << std::endl;
                break;
            }
        }

        top->clk = 0;
        top->eval();
    }

    delete top;
    return 0;
}
