module mux #(
	parameter WIDTH = 32
)(
  // interface signals
  input logic [WIDTH-1:0] inputA,
  input logic [WIDTH-1:0] inputB,
  input logic sel,
  output logic [WIDTH-1:0] data_out
);

always_comb begin
    if (sel) begin
        data_out = inputA;
    end else begin
        data_out = inputB;
    end
end

endmodule
