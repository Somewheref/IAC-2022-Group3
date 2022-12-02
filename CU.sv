module CU (
    input logic [6:0]   op,
    input logic [2:0]   funct3,
    input logic         funct7_5,
    input logic         zero,

    output logic        PCSrc,
    output logic [2:0]  ALUControl,
    output logic        ALUSrc,
    output logic [1:0]  ImmSrc,
    output logic        RegWrite

);

logic Branch;
logic [1:0] ALUOp;
logic op5;


Main_Deco Main_Deco (
    // Inputs
    .op(op),

    // Outputs
    .Branch(Branch),
    .ALUSrc(ALUSrc),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .ALUOp(ALUOp)
);

ALU_Deco ALU_Deco (
    // Inputs
    .op5(op5),
    .funct3(funct3),
    .funct7_5(funct7_5),
    .ALUOp(ALUOp),

    // Outputs
    .ALUControl(ALUControl)
);

always_comb begin
    PCSrc = Branch & zero;
    op5 = op[5];
end

endmodule
