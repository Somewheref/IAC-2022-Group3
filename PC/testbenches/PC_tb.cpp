// Created by Stanly
// a test bench for PC module, not a real test bench for our CPU

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VPC_top.h"

#define MAX_SIM_CYC 100

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VPC_top* top = new VPC_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("PC_tb.vcd");

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  top->PCsrc = 0;
  top->ImmOp = 0;
  top->PC = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    top->rst = 0;

    if (simcyc == 12) {
      top->rst = 1;
    }
    if (Verilated::gotFinish())  exit(0);
  }

  tfp->close(); 
  exit(0);
}
