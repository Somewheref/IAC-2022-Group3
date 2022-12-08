// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_top.h for the primary calling header

#include "verilated.h"

#include "VRISCV_top___024root.h"

VL_ATTR_COLD void VRISCV_top___024root___initial__TOP__0(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h14a3d3f0__0;
    // Body
    VL_WRITEF("Loading Instruction ROM.\n");
    __Vtemp_h14a3d3f0__0[0U] = 0x2e6d656dU;
    __Vtemp_h14a3d3f0__0[1U] = 0x72524f4dU;
    __Vtemp_h14a3d3f0__0[2U] = 0x496e7374U;
    VL_READMEM_N(true, 8, 268435456, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h14a3d3f0__0)
                 ,  &(vlSelf->RISCV_top__DOT__InstrROM__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loading complete.\n");
}

extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_top__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_top__ConstPool__TABLE_h6c278d11_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISCV_top__ConstPool__TABLE_h69bdcfd6_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISCV_top__ConstPool__TABLE_ha106310a_0;
extern const VlUnpacked<CData/*2:0*/, 128> VRISCV_top__ConstPool__TABLE_hfa1d3a6c_0;

VL_ATTR_COLD void VRISCV_top___024root___settle__TOP__0(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
    vlSelf->a0 = vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers
        [0xaU];
    vlSelf->RISCV_top__DOT__InstrROM__DOT__addr = (0xfffffffU 
                                                   & vlSelf->RISCV_top__DOT__PC);
    vlSelf->RISCV_top__DOT__instr = ((vlSelf->RISCV_top__DOT__InstrROM__DOT__rom_array
                                      [vlSelf->RISCV_top__DOT__InstrROM__DOT__addr] 
                                      << 0x18U) | (
                                                   (vlSelf->RISCV_top__DOT__InstrROM__DOT__rom_array
                                                    [
                                                    (0xfffffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->RISCV_top__DOT__InstrROM__DOT__addr))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->RISCV_top__DOT__InstrROM__DOT__rom_array
                                                       [
                                                       (0xfffffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->RISCV_top__DOT__InstrROM__DOT__addr))] 
                                                       << 8U) 
                                                      | vlSelf->RISCV_top__DOT__InstrROM__DOT__rom_array
                                                      [
                                                      (0xfffffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->RISCV_top__DOT__InstrROM__DOT__addr))])));
    vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
        = vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers
        [(0x1fU & (vlSelf->RISCV_top__DOT__instr >> 0xfU))];
    __Vtableidx1 = (0x7fU & vlSelf->RISCV_top__DOT__instr);
    vlSelf->RISCV_top__DOT__CU__DOT__Branch = VRISCV_top__ConstPool__TABLE_h974edfa5_0
        [__Vtableidx1];
    vlSelf->RISCV_top__DOT__ALUSrc = VRISCV_top__ConstPool__TABLE_h6c278d11_0
        [__Vtableidx1];
    vlSelf->RISCV_top__DOT__ImmSrc = VRISCV_top__ConstPool__TABLE_h69bdcfd6_0
        [__Vtableidx1];
    vlSelf->RISCV_top__DOT__RegWrite = VRISCV_top__ConstPool__TABLE_h6c278d11_0
        [__Vtableidx1];
    vlSelf->RISCV_top__DOT__CU__DOT__ALUOp = VRISCV_top__ConstPool__TABLE_ha106310a_0
        [__Vtableidx1];
    __Vtableidx2 = ((0x40U & (vlSelf->RISCV_top__DOT__instr 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->RISCV_top__DOT__instr) 
                                            | ((0x1cU 
                                                & (vlSelf->RISCV_top__DOT__instr 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->RISCV_top__DOT__CU__DOT__ALUOp))));
    vlSelf->RISCV_top__DOT__ALUCtrl = VRISCV_top__ConstPool__TABLE_hfa1d3a6c_0
        [__Vtableidx2];
    vlSelf->RISCV_top__DOT__ImmOp = ((2U & (IData)(vlSelf->RISCV_top__DOT__ImmSrc))
                                      ? ((1U & (IData)(vlSelf->RISCV_top__DOT__ImmSrc))
                                          ? (((- (IData)(
                                                         (vlSelf->RISCV_top__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | (vlSelf->RISCV_top__DOT__instr 
                                                >> 0xcU))
                                          : (((- (IData)(
                                                         (vlSelf->RISCV_top__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & (vlSelf->RISCV_top__DOT__instr 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->RISCV_top__DOT__instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->RISCV_top__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->RISCV_top__DOT__instr 
                                                            >> 7U)))))))
                                      : ((1U & (IData)(vlSelf->RISCV_top__DOT__ImmSrc))
                                          ? (((- (IData)(
                                                         (vlSelf->RISCV_top__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->RISCV_top__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->RISCV_top__DOT__instr 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->RISCV_top__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->RISCV_top__DOT__instr 
                                                >> 0x14U))));
    vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2 
        = ((IData)(vlSelf->RISCV_top__DOT__ALUSrc) ? vlSelf->RISCV_top__DOT__ImmOp
            : vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers
           [(0x1fU & (vlSelf->RISCV_top__DOT__instr 
                      >> 0x14U))]);
    vlSelf->RISCV_top__DOT__PC_top__DOT__nextPC = (
                                                   ((IData)(vlSelf->RISCV_top__DOT__CU__DOT__Branch) 
                                                    & (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                                       == vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2))
                                                    ? 
                                                   (vlSelf->RISCV_top__DOT__PC 
                                                    + vlSelf->RISCV_top__DOT__ImmOp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->RISCV_top__DOT__PC));
}

VL_ATTR_COLD void VRISCV_top___024root___eval_initial(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___eval_initial\n"); );
    // Body
    VRISCV_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VRISCV_top___024root___eval_settle(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___eval_settle\n"); );
    // Body
    VRISCV_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRISCV_top___024root___final(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___final\n"); );
}

VL_ATTR_COLD void VRISCV_top___024root___ctor_var_reset(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_top__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->RISCV_top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->RISCV_top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->RISCV_top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->RISCV_top__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->RISCV_top__DOT__ALUCtrl = VL_RAND_RESET_I(3);
    vlSelf->RISCV_top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->RISCV_top__DOT__PC_top__DOT__nextPC = VL_RAND_RESET_I(32);
    vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCV_top__DOT__CU__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->RISCV_top__DOT__CU__DOT__ALUOp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<268435456; ++__Vi0) {
        vlSelf->RISCV_top__DOT__InstrROM__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->RISCV_top__DOT__InstrROM__DOT__addr = VL_RAND_RESET_I(28);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
