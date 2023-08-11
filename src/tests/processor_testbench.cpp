#include <verilated.h>
#include "Vtop.h" // Include the generated Verilator header file
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop; // Create an instance of the Verilator model

    // Initialize signals
    top->clk = 0;
    top->reset = 1;
    top->WriteData = 0;
    top->DataAdr = 0;
    top->MemWrite = 0;

    // Simulate
    for (int i = 0; i < 100; ++i) {
        top->clk = !top->clk; // Toggle clock

        if (i == 22) {
            top->reset = 0;
        }

        if (i == 27) {
            top->clk = 0; // End simulation after one cycle
        }

        top->eval(); // Evaluate the model

        // Check results
        if (top->MemWrite) {
            if (top->DataAdr == 100 && top->WriteData == 25) {
                std::cout << "Simulation succeeded" << std::endl;
                delete top;
                return 0;
            } else if (top->DataAdr != 96) {
                std::cout << "Simulation failed" << std::endl;
                delete top;
                return 1;
            }
        }
    }

    delete top;
    return 0;
}

