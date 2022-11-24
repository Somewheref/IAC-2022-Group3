module adder #(
	parameter INPUT_WIDTH = 32
)(
    // interface signals
    input logic [INPUT_WIDTH-1:0] a,
    input logic [INPUT_WIDTH-1:0] b,
    output logic [INPUT_WIDTH-1:0] sum
);

    // internal signals
    logic [INPUT_WIDTH-1:0] sum_internal;

    // internal logic
    assign sum_internal = a + b;

    // output logic
    assign sum = sum_internal;

endmodule
