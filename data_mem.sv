module data_mem #(
    parameter ADDRESS = 8,
    parameter WIDTH = 8
)(
    input  logic [4*WIDTH-1:0] WriteData,
    input  logic [ADDRESS-1:0] Address,
    input  logic               WriteEnable,
    output logic               ReadData
);

    //This data memory module is designed only for lw and sw instructions.

    logic [WIDTH-1:0] mem [2**ADDRESS-1:0];

    assign ReadData = {mem[Address+3], mem[Address+2], mem[Address+1], mem[Address]} // Is there no other way to code this?
    // maybe?:
    // assign ReadData = mem[Address+3:Address]

    always_ff @(posedge clk)
        if (WriteEnable == 1'b1) begin
            mem[Address] <= WriteData[WIDTH-1:0];
            mem[Address+1] <= WriteData[WIDTH*2-1:WIDTH];
            mem[Address+2] <= WriteData[WIDTH*3-1:WIDTH*2];
            mem[Address+3] <= WriteData[WIDTH*4-1:WIDTH*3];
        end

endmodule
