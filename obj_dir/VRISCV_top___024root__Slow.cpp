// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_top.h for the primary calling header

#include "verilated.h"

#include "VRISCV_top__Syms.h"
#include "VRISCV_top___024root.h"

void VRISCV_top___024root___ctor_var_reset(VRISCV_top___024root* vlSelf);

VRISCV_top___024root::VRISCV_top___024root(VRISCV_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISCV_top___024root___ctor_var_reset(this);
}

void VRISCV_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRISCV_top___024root::~VRISCV_top___024root() {
}
