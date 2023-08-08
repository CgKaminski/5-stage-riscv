module main_decoder(input logic [6:0] op,
                    output logic mem_write, branch, alu_src, reg_write, jump,
                    output logic [1:0] imm_src, alu_op, result_src);

  logic [10:0] controls;

  assign (reg_write, imm_src, alu_src, mem_write, result_src, 
          alu_op, branch, jump) = controls;

  always_comb
    case(op)
      7'b0000011: controls = 11'b10010010000;
      7'b0100011: controls = 11'b00111000000;
      7'b0110011: controls = 11'b1xx00000100;
      7'b1100011: controls = 11'b01000001010;
      7'b0010011: controls = 11'b10010000100;
      7'b1101111: controls = 11'b11100100001;
      default:    controls = 11'bxxxxxxxxxxx;
    endcase

  endmodule

