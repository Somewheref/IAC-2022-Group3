module RISKV_top #(
    parameter   ADDRESS_WIDTH = 32,
    parameter   DATA_WIDTH = 32
)(
    input  logic        clk,
    input  logic [4:0]  rs1, rs2, rd,
    output logic [31:0] a0, 
    output logic        EQ,
   
   
   
    output logic    [ADDRESS_WIDTH-1:0] PC,


    //CU I/O
    input logic [6:0]   op,
    input logic [2:0]   funct3,
    input logic         funct7_5,
    input logic         zero,

    output logic        ResultSrc,
    output logic        MemWrite,
  
 

    //ROM I/O
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0] instr,

    //SignEx I/O
    input logic [ADDRESS_WIDTH-1:0] instr_imm,


    logic ALUsrc, ALUctrl, PCsrc, RegWrite, [ADDRESS_WIDTH-1:0] ImmOp, [1:0] Immsrc

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

InstrROM InstrROM(
    .addr(addr),
    .instr(instr)
);

SignEx SignEx(
    .instr_imm(instr_imm),
    .ImmSrc(ImmSrc),
    .ImmOp(ImmOp)
);

endmodule






    