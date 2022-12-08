module Main_Deco (
    input logic [6:0]   op,
    
    output logic        Branch,
    output logic        ALUSrc,
    output logic [1:0]  ImmSrc,
    output logic        RegWrite,
    output logic [1:0]  ALUOp


);

always_comb
    case (op)
        7'b0010011: //immediate ALU arithmetic
            begin
                Branch = 1'b0;
                ALUSrc = 1'b1;
                ImmSrc = 2'b00;
                RegWrite = 1'b1;
                ALUOp = 2'b10;
            end
            
        7'b1100011: //branch
            begin
                Branch = 1'b1;
                ALUSrc = 1'b0;
                ImmSrc = 2'b10;
                RegWrite = 1'b0;
                ALUOp = 2'b01;
            end

        default:
            begin
                Branch = 1'b0;
                ALUSrc = 1'b0;
                ImmSrc = 2'b00;
                RegWrite = 1'b0;
                ALUOp = 2'b00;
            end
    endcase

endmodule
