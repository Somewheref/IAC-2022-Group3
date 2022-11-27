// Created by Martin
// a test bench for whole block diagram

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VRISCV_top.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 10000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VRISCV_top* top = new VRISCV_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("RISCVTestbench.vcd");

  // initialize simulation inputs 
  top->clk = 1;
  top->rst = 1;
 
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    //send a0 value to vbuddy

    vbdHex(5, (int(top->a0) >> 32) & 0xF);
    vbdHex(4, (int(top->a0) >> 16) & 0xF);
    vbdHex(3, (int(top->a0) >> 8) & 0xF);
    vbdHex(2, (int(top->a0) >> 4) & 0xF);
    vbdHex(1, (int(top->a0) & 0xF));
    vbdCycle(simcyc + 1);

    top->rst = 0;

    if (simcyc == 12) {
      top->rst = 1;
    }
    if ((Verilated::gotFinish())   || (vbdGetkey() == 'q')) 
            exit(0);
  }

  vbdClose();
  tfp->close(); 
  exit(0);
}




