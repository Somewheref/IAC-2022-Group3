// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISCV_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP___024ROOT_H_
#define VERILATED_VRISCV_TOP___024ROOT_H_  // guard

#include "verilated.h"

class VRISCV_top__Syms;

class VRISCV_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ RISCV_top__DOT__ALUSrc;
    CData/*0:0*/ RISCV_top__DOT__PCsrc;
    CData/*0:0*/ RISCV_top__DOT__RegWrite;
    CData/*1:0*/ RISCV_top__DOT__ImmSrc;
    CData/*2:0*/ RISCV_top__DOT__ALUCtrl;
    CData/*0:0*/ RISCV_top__DOT__CU__DOT__Branch;
    CData/*1:0*/ RISCV_top__DOT__CU__DOT__ALUOp;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ RISCV_top__DOT__ImmOp;
    IData/*31:0*/ RISCV_top__DOT__PC;
    IData/*31:0*/ RISCV_top__DOT__instr;
    IData/*31:0*/ RISCV_top__DOT__PC_top__DOT__nextPC;
    IData/*31:0*/ RISCV_top__DOT__reg_alu_top__DOT__ALUop1;
    IData/*31:0*/ RISCV_top__DOT__reg_alu_top__DOT__ALUop2;
    IData/*27:0*/ RISCV_top__DOT__InstrROM__DOT__addr;
    VlUnpacked<IData/*31:0*/, 32> RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers;
    VlUnpacked<CData/*7:0*/, 268435456> RISCV_top__DOT__InstrROM__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRISCV_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISCV_top___024root(VRISCV_top__Syms* symsp, const char* name);
    ~VRISCV_top___024root();
    VL_UNCOPYABLE(VRISCV_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
