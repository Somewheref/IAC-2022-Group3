module reg_alu (
    input logic clk, RegWrite, ALUctrl, ALUsrc, //What is ALU ctrl and src?
    input logic [4:0] rs1, rs2, rd,
    input logic [31:0] ImmOp,
    output logic [31:0] EQ, a0 //what is EQ?
);


    wire [31:0] regOp2, ALUop1, ALUout;

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
    )





endmodule
