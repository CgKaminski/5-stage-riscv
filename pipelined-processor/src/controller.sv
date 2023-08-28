/*
 * Controller Module
 * This module is responsible for decoding the instruction input for both the ALU and the "main" system.
 * 
 * note: the instruction input (32'b) relates the the controller input as follows:
 *       op_i       ->  intruction[6:0]
 *       funct3_i   ->  instruction[14:12]
 *       funct7b5_i ->  instruction[30]
 */

module controller(
  input  logic [6:0] op_i,
  input  logic [2:0] funct3_i,
  input  logic       funct7b5_i,
  output logic       reg_write_o,
  output logic [1:0] result_src_o,
  output logic       mem_write_o,
  output logic       jump_o,
  output logic       branch_o,
  output logic [2:0] alu_control_o,
  output logic       alu_src_o,
  output logic [1:0] imm_src_o);


  // Misc. signals
  logic [1:0] alu_op;

  // Control signal output
  logic [10:0] controls;
  // assign {reg_write_o, imm_src_o, alu_src_o, mem_write_o, result_src_o, branch_o, alu_op, jump_o} = controls;
  assign reg_write_o  = controls[10];
  assign imm_src_o    = controls[9:8];
  assign alu_src_o    = controls[7];
  assign mem_write_o  = controls[6];
  assign result_src_o = controls[5:4];
  assign branch_o     = controls[3];
  assign alu_op       = controls[2:1];
  assign jump_o       = controls[0];

  // Main decoder

  always_comb
    case(op_i)
      // reg_write | imm_src | alu_src | mem_write | result_src | branch | alu_op | jump
      7'b0000011: controls = 11'b1_00_1_0_01_0_00_0;  // (lw) load word
      7'b0100011: controls = 11'b0_01_1_1_00_0_00_0;  // (sw) store word
      7'b0110011: controls = 11'b1_xx_0_0_00_0_10_0;  // (R-type) add, sub, and, or, ...  
      7'b1100011: controls = 11'b0_10_0_0_00_1_01_0;  // (beq) branch equal
      7'b0010011: controls = 11'b1_00_1_0_00_0_10_0;  // (I-type) immediate
      7'b1101111: controls = 11'b1_11_0_0_10_0_00_1;  // (jal) jump and link
      default:    controls = 11'bx_xx_x_x_xx_x_xx_x;  // (invalid)
    endcase

  // ALU decoder

  // R-type instuction handling
  logic r_type_sub;
  assign r_type_sub = funct7b5_i & op_i[5];

  always_comb
    case(alu_op)
      2'b00: alu_control_o = 3'b000;         // (add)
      2'b01: alu_control_o = 3'b001;         // (sub)
      default: 
        case(funct3_i)
          3'b000: if (r_type_sub) 
                    alu_control_o = 3'b001;  // (sub)
                  else
                    alu_control_o = 3'b000;  // (add), (addi)
          3'b010:   alu_control_o = 3'b101;  // (slt), (slti)    
          3'b110:   alu_control_o = 3'b011;  // (or), (ori)
          3'b111:   alu_control_o = 3'b010;  // (and), (andi)
          default:  alu_control_o = 3'bxxx;  // (invalid)
        endcase
    endcase

endmodule
