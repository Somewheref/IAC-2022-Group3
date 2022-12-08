// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV_top__Syms.h"


void VRISCV_top___024root__trace_chg_sub_0(VRISCV_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISCV_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_chg_top_0\n"); );
    // Init
    VRISCV_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_top___024root*>(voidSelf);
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISCV_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRISCV_top___024root__trace_chg_sub_0(VRISCV_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->RISCV_top__DOT__PC),32);
        bufp->chgCData(oldp+1,((vlSelf->RISCV_top__DOT__PC 
                                >> 0x1cU)),4);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelf->RISCV_top__DOT__PC)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+3,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[16]),32);
        bufp->chgIData(oldp+20,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[17]),32);
        bufp->chgIData(oldp+21,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[18]),32);
        bufp->chgIData(oldp+22,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[19]),32);
        bufp->chgIData(oldp+23,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[20]),32);
        bufp->chgIData(oldp+24,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[21]),32);
        bufp->chgIData(oldp+25,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[22]),32);
        bufp->chgIData(oldp+26,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[23]),32);
        bufp->chgIData(oldp+27,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[24]),32);
        bufp->chgIData(oldp+28,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[25]),32);
        bufp->chgIData(oldp+29,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[26]),32);
        bufp->chgIData(oldp+30,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[27]),32);
        bufp->chgIData(oldp+31,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[28]),32);
        bufp->chgIData(oldp+32,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[29]),32);
        bufp->chgIData(oldp+33,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[30]),32);
        bufp->chgIData(oldp+34,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+35,(vlSelf->RISCV_top__DOT__ALUSrc));
        bufp->chgBit(oldp+36,(vlSelf->RISCV_top__DOT__PCsrc));
        bufp->chgBit(oldp+37,(vlSelf->RISCV_top__DOT__RegWrite));
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+41,(vlSelf->RISCV_top__DOT__ImmOp),32);
        bufp->chgIData(oldp+42,((vlSelf->RISCV_top__DOT__instr 
                                 >> 7U)),25);
        bufp->chgCData(oldp+43,(vlSelf->RISCV_top__DOT__ImmSrc),2);
        bufp->chgBit(oldp+44,((vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                               == vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2)));
        bufp->chgCData(oldp+45,((0x7fU & vlSelf->RISCV_top__DOT__instr)),7);
        bufp->chgCData(oldp+46,((7U & (vlSelf->RISCV_top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+47,(vlSelf->RISCV_top__DOT__ALUCtrl),3);
        bufp->chgBit(oldp+48,((1U & (vlSelf->RISCV_top__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+49,(vlSelf->RISCV_top__DOT__instr),32);
        bufp->chgBit(oldp+50,(vlSelf->RISCV_top__DOT__CU__DOT__Branch));
        bufp->chgCData(oldp+51,(vlSelf->RISCV_top__DOT__CU__DOT__ALUOp),2);
        bufp->chgBit(oldp+52,((1U & (vlSelf->RISCV_top__DOT__instr 
                                     >> 5U))));
        bufp->chgIData(oldp+53,(vlSelf->RISCV_top__DOT__InstrROM__DOT__addr),28);
        bufp->chgIData(oldp+54,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1),32);
        bufp->chgIData(oldp+55,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2),32);
        bufp->chgIData(oldp+56,(((4U & (IData)(vlSelf->RISCV_top__DOT__ALUCtrl))
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
                                                  + vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2))))),32);
    }
    bufp->chgBit(oldp+57,(vlSelf->clk));
    bufp->chgBit(oldp+58,(vlSelf->rst));
    bufp->chgIData(oldp+59,(vlSelf->a0),32);
    bufp->chgIData(oldp+60,((vlSelf->RISCV_top__DOT__PC 
                             + vlSelf->RISCV_top__DOT__ImmOp)),32);
    bufp->chgIData(oldp+61,(((IData)(vlSelf->RISCV_top__DOT__PCsrc)
                              ? (vlSelf->RISCV_top__DOT__PC 
                                 + vlSelf->RISCV_top__DOT__ImmOp)
                              : ((IData)(4U) + vlSelf->RISCV_top__DOT__PC))),32);
    bufp->chgIData(oldp+62,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers
                            [(0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                       >> 0x14U))]),32);
}

void VRISCV_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_cleanup\n"); );
    // Init
    VRISCV_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_top___024root*>(voidSelf);
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
