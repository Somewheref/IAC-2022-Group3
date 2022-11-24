module alu #(
    parameter WIDTH = 32
)(
    input  logic [WIDTH-1:0] ALUop1, ALUop2,
    input  logic [2:0]       ALUctrl,
    output logic             EQ,
    output logic [WIDTH-1:0] ALUout
);

    always_comb begin
        case (ALUctrl)
            3'b000  :  ALUout = ALUop1 + ALUop2;
            3'b001  :  ALUout = ALUop1 - ALUop2; //Is this the right way round?
            3'b010  :  ALUout = ALUop1 & ALUop2;
            3'b011  :  ALUout = ALUop1 | ALUop2;
            //default :  ALUout = (WIDTH)'b0;
            default :  ALUout = 32'b0; //or do I do this?
            // Haven't done SLT operation
        endcase
        if (ALUop1 == ALUop2)
            EQ = 1'b1;
        else
            EQ = 1'b0;
    end

endmodule
