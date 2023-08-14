module top(input logic clk, reset,
           output logic [31:0] write_data, data_adr,
           output logic mem_write);

  logic [31:0] pc, instruction, read_data;

  // instantiate processor and memories
  riscv_single_cycle riscv(.clk(clk), .reset(reset), .pc(pc), 
                           .instruction(instruction), .mem_write(mem_write), 
                           .alu_result(data_adr), .write_data(write_data), 
                           .read_data(read_data));

  imem imem(.a(pc), .rd(instruction));
  dmem dmem(.clk(clk), .we(mem_write), .a(data_adr), .wd(write_data), 
            .rd(read_data));

endmodule 

