
module InstrROM #(
    parameter   ADDRESS_WIDTH = 32,
    parameter   DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0]    instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];
    
initial begin
    $display("Loading Instruction ROM.");
    $readmemh("InstrROM.mem", rom_array);
end;

always_comb begin
    instr = rom_array[addr];
end

endmodule
