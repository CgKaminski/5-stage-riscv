# 5-Stage Pipelined RISC-V Processor

The 5-Stage Pipelined RISC-V Processor is an implementation of a RISC-V architecture processor that employs a 5-stage pipeline for efficient instruction execution. This project aims to showcase the my conceptual understanding of pipelining, hazard handling, and instruction parallelism.

## Features

- 5-stage pipelined architecture: Fetch, Decode, Execute, Memory, and Writeback.
- Support for the RISC-V instruction set.
- Hazard handling mechanisms: stalls and forwarding.
- Basic ALU operations and memory access.
- Instruction fetch from memory.

## Project Structure

The project is organized as follows:

- `src/`: Contains the Verilog source files for the pipelined processor.
  - `reg_f.sv`: Register file for the Fetch stage.
  - `reg_d.sv`: Register file for the Decode stage.
  - `reg_e.sv`: Register file for the Execute stage.
  - `reg_m.sv`: Register file for the Memory stage.
  - `reg_w.sv`: Register file for the Writeback stage.
  - `regfile.sv`: Overall register file that integrates the above stages.
  - `alu.sv`: Arithmetic Logic Unit (ALU) module.
  - `controller.sv`: Control unit for instruction decoding and execution.
  - `extend.sv`: Sign-extend module for immediate values.
  - `hazard_unit.sv`: Hazard detection and control unit.
  - `imem.sv`: Instruction memory module.
  - `dmem.sv`: Data memory module.
  - `processor.sv`: Top-level processor module integrating all stages.
- `testbenches/`: Contains testbench files for functional verification.

## Getting Started

To explore and experiment with the pipelined processor:

1. Clone this repository to your local machine.
2. Navigate to the `pipelined-processor` directory.
3. Use your preferred Verilog simulation tool (I used Verilator) to compile and simulate the processor.
4. Modify and test the `src/risctvtest.txt` file with the appropriate machine code.
5. Analyze the waveforms to understand the pipeline stages, hazard handling, and instruction execution.

## Generating Machine Code

The project processor uses RISC-V ISA, therefore most standard RISC-V assemblers should produce usable machine code (so long that unsupported instructions are not used). One of my favorite online assemblers can be found at [https://riscvasm.lucasteske.dev/#].

## Contributing

Contributions to this project are welcome. If you identify issues or have suggestions for improvements, please feel free to fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

---

**Note:** This pipelined processor implementation is designed for educational purposes. It may not be suitable for production environments.
