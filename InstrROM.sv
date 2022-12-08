
module InstrROM #(
    parameter   ADDRESS_WIDTH = 28,
    parameter   DATA_WIDTH = 32
)(
    input logic [31:0] F_addr,
    output logic [DATA_WIDTH-1:0]   instr
);

logic [7:0] rom_array [2**ADDRESS_WIDTH-1:0];
logic [ADDRESS_WIDTH-1:0] addr;
logic [31:ADDRESS_WIDTH] unused;
    
initial begin
    $display("Loading Instruction ROM.");
    $readmemh("InstrROM.mem", rom_array);
    $display("Loading complete.");
end;

always_comb begin
    addr = F_addr[ADDRESS_WIDTH-1:0];
    unused = F_addr[31:ADDRESS_WIDTH];
    instr = {rom_array[addr] , rom_array[addr+1] , rom_array[addr+2] , rom_array[addr+3]};
end

endmodule
