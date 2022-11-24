module PC_top #(
	parameter WIDTH = 32
)(
  // interface signals
  input logic clk,
  input logic rst,
  input logic PCsrc,
  input logic[WIDTH-1:0] ImmOp,
  output logic[WIDTH-1:0] PC
);

logic [WIDTH-1:0] branchPC;
logic [WIDTH-1:0] nextPC;

adder PC_adder(
    .a(PC),
    .b(ImmOp),
    .sum(branchPC)
);

mux PC_mux(
    .inputA(branchPC),
    .inputB(PC + WIDTH'(4)),
    .sel(PCsrc),
    .data_out(nextPC)
);

PC_Register PC_reg(
    .clk(clk),
    .rst(rst),
    .data_in(nextPC),
    .data_out(PC)
);
    
endmodule
