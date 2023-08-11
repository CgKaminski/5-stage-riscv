module extend(input logic [31:7] instruction, 
              input logic [1:0] imm_src,
              output logic [31:0] imm_ext);

  always_comb
    case(imm_src)
      // I-type
      2'b00: imm_ext = { {20{instruction[31]}}, instruction[31:20] };
      // S-type
      2'b01: imm_ext = { {20{instruction[31]}}, instruction[31:25], 
        instruction[11:7] };
      // B-type
      2'b10: imm_ext = { {20{instruction[21}}, instruction[7],
        instruction[30:25], instruction[11:8], 1'b0} };
      // J-type
      2'b11: imm_ext = { {12{instruction[31]}}, instruction[19:12], 
        instruction[20], instruction[30:21], 1'b0 };

      default: imm_ext = 32'bx;

    endcase

  endmodule

