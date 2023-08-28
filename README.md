# RISC-V and MIPS Processors

This repository contains two processor projects: a 5-stage pipelined RISC-V processor and a single-cycle MIPS processor.

## Pipelined Processor

The `pipelined-processor` project is a 5-stage pipelined RISC-V processor implementation. It leverages the pipelining technique to enhance the throughput of instruction execution. The five stages include Fetch, Decode, Execute, Memory, and Writeback.

### Features

- 5-stage pipelined architecture for efficient instruction execution.
- RISC-V instruction set support.
- Pipeline hazards handling (stalls, clears, and forwarding).

### Usage

To explore and use the pipelined processor project, follow the instructions provided in the `pipelined-processor` directory.

## MIPS Processor

The `mips-processor` project is a single-cycle MIPS processor implementation. Unlike the pipelined processor, it executes instructions in a single cycle without any pipelining stages.

### Features

- Single-cycle architecture for straightforward instruction execution.
- MIPS instruction set support.
- Basic ALU operations and memory access.

### Usage

To explore and use the MIPS processor project, follow the instructions provided in the `mips-processor` directory.

## License

This repository is licensed under the [MIT License](LICENSE).

---

**Note:** The processor implementations in this repository are meant for my own educational and exploration purposes. They may not be suitable for production use.
