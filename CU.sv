module CU (
    input logic [6:0]   op,
    input logic [2:0]   funct3,
    input logic         funct7_5,
    input logic         zero,

    output logic        PCSrc,
    output logic        ResultSrc,
    output logic        MemWrite,
    output logic [2:0]  ALUControl,
    output logic        ALUSrc,
    output logic [1:0]  ImmSrc,
    output logic        RegWrite


)

Main_Deco Main_Deco (
    .op(op),

    .Branch(Branch),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUSrc(ALUSrc),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .ALUOp(ALUOp)
);

ALU_Deco ALU_Deco (
    .op(op),
    .funct3(funct3),
    .funct7_5(funct7_5),
    .ALUOp(ALUOp),

    .ALUControl(ALUControl)
);

always_comb begin
    PCSrc = Branch & zero;
end

endmodule
