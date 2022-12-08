// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_top.h for the primary calling header

#include "verilated.h"

#include "VRISCV_top___024root.h"

VL_INLINE_OPT void VRISCV_top___024root___sequent__TOP__0(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->RISCV_top__DOT__PC = ((IData)(vlSelf->rst)
                                   ? 0U : vlSelf->RISCV_top__DOT__PC_top__DOT__nextPC);
}

VL_INLINE_OPT void VRISCV_top___024root___sequent__TOP__1(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0;
    // Body
    __Vdlyvset__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0 = 0U;
    if (vlSelf->RISCV_top__DOT__RegWrite) {
        __Vdlyvval__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0 
            = ((4U & (IData)(vlSelf->RISCV_top__DOT__ALUCtrl))
                ? 0U : ((2U & (IData)(vlSelf->RISCV_top__DOT__ALUCtrl))
                         ? ((1U & (IData)(vlSelf->RISCV_top__DOT__ALUCtrl))
                             ? (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                | vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2)
                             : (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                & vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2))
                         : ((1U & (IData)(vlSelf->RISCV_top__DOT__ALUCtrl))
                             ? (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                - vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2)
                             : (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                + vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2))));
        __Vdlyvset__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0 = 1U;
        __Vdlyvdim0__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0 
            = (0x1fU & (vlSelf->RISCV_top__DOT__instr 
                        >> 7U));
    }
    if (__Vdlyvset__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0) {
        vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[__Vdlyvdim0__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0] 
            = __Vdlyvval__RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers__v0;
    }
    vlSelf->a0 = vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers
        [0xaU];
}

extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_top__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*0:0*/, 128> VRISCV_top__ConstPool__TABLE_h6c278d11_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISCV_top__ConstPool__TABLE_h69bdcfd6_0;
extern const VlUnpacked<CData/*1:0*/, 128> VRISCV_top__ConstPool__TABLE_ha106310a_0;
extern const VlUnpacked<CData/*2:0*/, 128> VRISCV_top__ConstPool__TABLE_hfa1d3a6c_0;

VL_INLINE_OPT void VRISCV_top___024root___sequent__TOP__2(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
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
    if ((0U == (7U & (vlSelf->RISCV_top__DOT__instr 
                      >> 0xcU)))) {
        vlSelf->RISCV_top__DOT__PCsrc = ((IData)(vlSelf->RISCV_top__DOT__CU__DOT__Branch) 
                                         & (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                            == vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2));
    } else if ((1U == (7U & (vlSelf->RISCV_top__DOT__instr 
                             >> 0xcU)))) {
        vlSelf->RISCV_top__DOT__PCsrc = ((IData)(vlSelf->RISCV_top__DOT__CU__DOT__Branch) 
                                         & (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                            != vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2));
    }
    vlSelf->RISCV_top__DOT__PC_top__DOT__nextPC = ((IData)(vlSelf->RISCV_top__DOT__PCsrc)
                                                    ? 
                                                   (vlSelf->RISCV_top__DOT__PC 
                                                    + vlSelf->RISCV_top__DOT__ImmOp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->RISCV_top__DOT__PC));
}

void VRISCV_top___024root___eval(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VRISCV_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VRISCV_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VRISCV_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void VRISCV_top___024root___eval_debug_assertions(VRISCV_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
