#include <verilated.h>
#include "Vmips.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vmips* top = new Vmips;

    top->clk = 0;
    top->reset = 1;

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
            if (top->dataadr == 84 && top->writedata == 7) {
                printf("Simulation succeeded\n");
                std::cout << "dataadr: " << top->dataadr << std::endl;
                std::cout << "writedata: " << top->writedata << std::endl;
                break;
            } else if (top->dataadr != 80) {
                printf("Simulation failed\n");
                std::cout << "dataadr: " << top->dataadr << std::endl;
                std::cout << "writedata: " << top->writedata << std::endl;
                break;
            }
        }

        top->clk = 0;
        top->eval();
    }

    delete top;
    return 0;
}
