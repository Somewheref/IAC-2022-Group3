module mux #(
	parameter WIDTH = 16
)(
  // interface signals
  input logic branch_PC [WIDTH-1:0],
  input logic inc_PC [WIDTH-1:0],
  input logic PCsrc,
  output logic data_out [WIDTH-1:0],
);

always_comb begin
    if (PCsrc) begin
        data_out = branch_PC;
    end else begin
        data_out = inc_PC;
    end
end

endmodule
