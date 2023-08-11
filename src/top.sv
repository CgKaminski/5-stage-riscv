module top(input logic clk, reset,
           output logic [31:0] write_data, data_adr,
           output logic mem_write);

  logic [31:0] pc, instruction, read_data;

  // instantiate processor and memories
  riscv rvsingle(clk, reset, pc, instruction, mem_write, data_adr,
                 write_data, read_data);

  imem imem(pc, instruction);
  dmem dmem(clk, mem_write, data_adr, write_data, read_data);

endmodule 

