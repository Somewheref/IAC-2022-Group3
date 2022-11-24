module PC_Register #(
	parameter WIDTH_IN = 32,
    parameter WIDTH_OUT = 32
)(
    input logic clk,
    input logic rst,
    input logic [WIDTH_IN-1:0] data_in,
    output logic [WIDTH_OUT-1:0] data_out
);

always_ff @(posedge clk, posedge rst) begin
    if(rst) begin
        data_out <= 0;
    end else begin
        data_out <= data_in;
    end
end
  


endmodule
