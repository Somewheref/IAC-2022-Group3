module reg_alu_top ( //Should this include parameters?
    input  logic        clk, RegWrite, ALUsrc, //How do I implement ALUctrl? on this top-level or in a separate sv module?
    input  logic [2:0]  ALUctrl,
    input  logic [4:0]  rs1, rs2, rd,
    input  logic [31:0] ImmOp,
    output logic [31:0] a0, //what is EQ? Equal, 1 if inputs are equal to each other.
    output logic        EQ
);

    logic [31:0] regOp2, ALUop1, ALUop2, ALUout;
    assign ALUop2 = ALUsrc ? ImmOp : regOp2;

    reg_file reg1 (
        .clk (clk),
        .AD1 (rs1),
        .AD2 (rs2),
        .AD3 (rd),
        .WE3 (RegWrite),
        .WD3 (ALUout),
        .RD1 (ALUop1),
        .RD2 (regOp2),
        .a0 (a0)
    );

    alu alu1 (
        .ALUop1 (ALUop1),
        .ALUop2 (ALUop2),
        .ALUctrl (ALUctrl),
        .EQ (EQ),
        .ALUout (ALUout)
    );

endmodule
