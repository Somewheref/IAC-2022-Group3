module PC_Reg #(
	parameter WIDTH_IN = 32
    parameter WIDTH_OUT = 32
)(
    input wire clk,
    input wire rst,
    input wire [WIDTH_IN-1:0] data_in,
    output reg [WIDTH_OUT-1:0] data_out
);

always_ff @(posedge clk, posedge rst) begin
    if(rst) begin
        data_out <= 0;
    end else begin
        data_out <= data_out;
    end
end
  


endmodule
