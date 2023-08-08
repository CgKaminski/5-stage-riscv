module alu_decoder(input logic opb5, funct7b5,
                   input logic [2:0] funct3,
                   input logic [1:0] alu_op,
                   output logic [2:0] alu_control);
  logic r_sub;
  assign r_sub = funct7b5 & opb5;

  always_comb 
    case(alu_op)
      2'b00: alu_control = 3'b000;
      2'b01: alu_control = 3'b001;
      default : case(funct3)
        3'b000: if (r_sub) alu_control = 3'b001;
                else alu_control = 3'b000;
        3'b010: alu_control = 3'b101;
        3'b110: alu_control = 3'b011;
        3'b111: alu_control = 3'b010;
        default =: alu_control = 3'bxxx;
      endcase
    endcase

  endmodule 
