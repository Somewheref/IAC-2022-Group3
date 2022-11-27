module RISKV_top #(
    parameter   ADDRESS_WIDTH = 32,
    parameter   DATA_WIDTH = 32
)(
    input  logic        clk,// RegWrite, // ALUsrc, //How do I implement ALUctrl? on this top-level or in a separate sv module?
  //  input  logic [2:0]  ALUctrl,
    input  logic [4:0]  rs1, rs2, rd,
    output logic [31:0] a0, 
    output logic        EQ,
   
   
   // input logic PCsrc,
   
    input logic     [ADDRESS_WIDTH-1:0] ImmOp, //dont need seperate ImmOp for PC and ALU as they are both inputs
    output logic    [ADDRESS_WIDTH-1:0] PC,


    //CU I/O
    input logic [6:0]   op,
    input logic [2:0]   funct3,
    input logic         funct7_5,
    input logic         zero,

  //  output logic        PCSrc,
    output logic        ResultSrc,
    output logic        MemWrite,
  //  output logic [2:0]  ALUControl,
   // output logic        ALUSrc,
    output logic [1:0]  ImmSrc,
   // output logic        RegWrite,

    logic ALUsrc, ALUctrl, PCsrc, RegWrite

);

PC_top PC_top(
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc), //input to PC block
    .ImmOp(ImmOp),
    .PC(PC)
);

reg_alu_top reg_alu_top(
    .clk(clk),
    .ALUctrl(ALUctrl),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .ImmOp(ImmOp),
    .a0(a0),
    .EQ(EQ)
);

CU CU(
    .op(op),
    .funct3(funct3),
    .funct7_5(funct7_5),
    .zero(zero),
    .PCSrc(PCsrc), //output from CU block
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUControl(ALUctrl),
    .ALUSrc(ALUsrc), //output
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite)

);

endmodule






    