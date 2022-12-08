`include "PC/testbenches/PC_top.sv"
`include "PC/testbenches/adder.sv"
`include "PC/testbenches/PC_Register.sv"
`include "PC/testbenches/mux.sv"
`include "Reg_alu/alu.sv"
`include "Reg_alu/reg_alu_top.sv"
`include "Reg_alu/reg_file.sv"


module RISCV_top #(
    parameter   ADDRESS_WIDTH = 32,
    parameter   DATA_WIDTH = 32
)(
    input  logic        clk,
    input logic         rst,   
    output logic [31:0] a0

   
);
    
     logic ALUSrc, PCsrc, RegWrite;
     logic [4:0]  rs1, rs2, rd;
     logic [ADDRESS_WIDTH-1:0] ImmOp, PC, addr;
     logic [31:7]   instr_imm;
     logic [1:0] ImmSrc; 
     logic        EQ;
    //CU I/O
     logic [6:0]   op;
     logic [2:0]   funct3, ALUCtrl;
     logic         funct7_5;
     logic         zero;

    //ROM I/O
     
    logic [DATA_WIDTH-1:0] instr;
    always_comb begin           //define wire and block input values
         addr = PC;
         rs1 =  instr[19:15];
         rs2 =  instr[24:20];
         rd =  instr[11:7];
          instr_imm =  instr[31:7];
         op = instr[6:0];
         funct3 = instr[14:12];
         zero = EQ;
         funct7_5 = instr[30];

    end

PC_top PC_top(
    //inputs
    .clk(clk),
    .rst(rst),
    .PCsrc(PCsrc), 
    .ImmOp(ImmOp),
     //output
    .PC(PC)
);

reg_alu_top reg_alu_top(
    //inputs
    .clk(clk),
    .ALUctrl(ALUCtrl),
    .ALUsrc(ALUSrc),
    .RegWrite(RegWrite),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .ImmOp(ImmOp),
    //outputs
    .a0(a0),
    .EQ(EQ)
);

CU CU(
    //inputs
    .op(op),
    .funct3(funct3),
    .funct7_5(funct7_5),
    .zero(zero),
    //outputs
    .PCSrc(PCsrc), 
    .ALUControl(ALUCtrl),
    .ALUSrc(ALUSrc), 
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite)

);

InstrROM InstrROM(
    //input
    .F_addr(addr),
    //output
    .instr(instr)
);

SignEX SignEX(
    //inputs
    .instr_imm(instr_imm),
    .ImmSrc(ImmSrc),
    //output
    .ImmOp(ImmOp)
);

endmodule
