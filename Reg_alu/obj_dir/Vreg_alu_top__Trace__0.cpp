// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreg_alu_top__Syms.h"


void Vreg_alu_top___024root__trace_chg_sub_0(Vreg_alu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreg_alu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_chg_top_0\n"); );
    // Init
    Vreg_alu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_alu_top___024root*>(voidSelf);
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vreg_alu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vreg_alu_top___024root__trace_chg_sub_0(Vreg_alu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->RegWrite));
    bufp->chgBit(oldp+34,(vlSelf->ALUsrc));
    bufp->chgCData(oldp+35,(vlSelf->ALUctrl),3);
    bufp->chgCData(oldp+36,(vlSelf->rs1),5);
    bufp->chgCData(oldp+37,(vlSelf->rs2),5);
    bufp->chgCData(oldp+38,(vlSelf->rd),5);
    bufp->chgIData(oldp+39,(vlSelf->ImmOp),32);
    bufp->chgIData(oldp+40,(vlSelf->a0),32);
    bufp->chgBit(oldp+41,(vlSelf->EQ));
    bufp->chgIData(oldp+42,(vlSelf->reg_alu_top__DOT__reg1__DOT__registers
                            [vlSelf->rs2]),32);
    bufp->chgIData(oldp+43,(vlSelf->reg_alu_top__DOT__ALUop1),32);
    bufp->chgIData(oldp+44,(vlSelf->reg_alu_top__DOT__ALUop2),32);
    bufp->chgIData(oldp+45,(((4U & (IData)(vlSelf->ALUctrl))
                              ? 0U : ((2U & (IData)(vlSelf->ALUctrl))
                                       ? ((1U & (IData)(vlSelf->ALUctrl))
                                           ? (vlSelf->reg_alu_top__DOT__ALUop1 
                                              | vlSelf->reg_alu_top__DOT__ALUop2)
                                           : (vlSelf->reg_alu_top__DOT__ALUop1 
                                              & vlSelf->reg_alu_top__DOT__ALUop2))
                                       : ((1U & (IData)(vlSelf->ALUctrl))
                                           ? (vlSelf->reg_alu_top__DOT__ALUop1 
                                              - vlSelf->reg_alu_top__DOT__ALUop2)
                                           : (vlSelf->reg_alu_top__DOT__ALUop1 
                                              + vlSelf->reg_alu_top__DOT__ALUop2))))),32);
}

void Vreg_alu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_alu_top___024root__trace_cleanup\n"); );
    // Init
    Vreg_alu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_alu_top___024root*>(voidSelf);
    Vreg_alu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
