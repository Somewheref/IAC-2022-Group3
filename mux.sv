module mux #(
	parameter WIDTH = 32
)(
  // interface signals
  input logic inputA [WIDTH-1:0],
  input logic inputB [WIDTH-1:0],
  input logic sel,
  output logic data_out [WIDTH-1:0],
);

always_comb begin
    if (sel) begin
        data_out = inputA;
    end else begin
        data_out = inputB;
    end
end

endmodule
