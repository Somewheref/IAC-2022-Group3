module SignEX (
    input   logic [31:7]    instr_imm,
    input   logic [1:0]     ImmSrc,
    output  logic [31:0]    ImmOp
);

always_comb
    case (ImmSrc)
        2'b00: //Immediate instructions 
            ImmOp = {{20{instr_imm[31]}}, instr_imm[31:20]};

        2'b01: //Store instructions
            ImmOp = {{20{instr_imm[31]}}, instr_imm[31:25], instr_imm[11:7]};

        2'b10: //Branch instructions
            ImmOp = {{19{instr_imm[31]}}, instr_imm[31], instr_imm[7], instr_imm[30:25], instr_imm[11:8], 1'b0};

        2'b11: //Upper Immediate instructions
            ImmOp = {{12{instr_imm[31]}}, instr_imm[31:12]};

        default: ImmOp = 32'b0;
    endcase

endmodule
