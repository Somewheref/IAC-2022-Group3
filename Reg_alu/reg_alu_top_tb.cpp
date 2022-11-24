// Testbench made by Daniel
// This testbench is just to test the top-level component for the register file, ALU, and corresponding MUX

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vreg_alu_top.h"

int main (int argc, char **argv, char **env) {
  int tick;
  int simcyc;

  Verilated::commandArgs(argc, argv);
  Vreg_alu_top* top = new Vreg_alu_top;
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("reg_alu_top.vcd");
  
  top->clk = 1;
  top->RegWrite = 0;
  top->ALUsrc = 0;
  top->ALUctrl = 0;
  top->rs1 = 0;
  top->rs2 = 0;
  top->rd = 0;
  top->ImmOp = 0;


  for(simcyc = 0; simcyc < 500; simcyc++){
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    if (simcyc == 4){
        top->RegWrite = 1;
        top->ALUsrc = 1;
        top->ALUctrl = 0;
        top->rd = 10;
        top->ImmOp = 156;
    }

    if (simcyc == 5){
        top->RegWrite = 0;
    }

    if (Verilated::gotFinish())  exit(0);
  }
  tfp->close(); 
  exit(0);
}
