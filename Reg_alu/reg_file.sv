module reg_file #(
    parameter   ADDRESS_WIDTH = 5,
                DATA_WIDTH = 32
)(
    input   logic                       clk, WE3,
    input   logic [ADDRESS_WIDTH-1:0]   AD1, AD2, AD3,
    input   logic [DATA_WIDTH-1:0]      WD3, //Write Data
    output  logic [DATA_WIDTH-1:0]      RD1, RD2, a0
);

    reg [DATA_WIDTH-1:0] registers [2**ADDRESS_WIDTH-1:0];


    always_ff @(posedge clk)
        if (WE3 == 1'b1)
            registers[AD3] <= WD3;
    
    always_comb begin
        a0 = registers[10];
        RD1 = registers[AD1];
        RD2 = registers[AD2];
    end

endmodule
