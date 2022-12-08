// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV_top__Syms.h"


VL_ATTR_COLD void VRISCV_top___024root__trace_init_sub__TOP__0(VRISCV_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+60,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("RISCV_top ");
    tracep->declBus(c+64,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+60,"a0", false,-1, 31,0);
    tracep->declBit(c+36,"ALUSrc", false,-1);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBus(c+39,"rs1", false,-1, 4,0);
    tracep->declBus(c+40,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+43,"instr_imm", false,-1, 31,7);
    tracep->declBus(c+44,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->declBus(c+46,"op", false,-1, 6,0);
    tracep->declBus(c+47,"funct3", false,-1, 2,0);
    tracep->declBus(c+48,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+49,"funct7_5", false,-1);
    tracep->declBit(c+45,"zero", false,-1);
    tracep->declBus(c+50,"instr", false,-1, 31,0);
    tracep->pushNamePrefix("CU ");
    tracep->declBus(c+46,"op", false,-1, 6,0);
    tracep->declBus(c+47,"funct3", false,-1, 2,0);
    tracep->declBit(c+49,"funct7_5", false,-1);
    tracep->declBit(c+45,"zero", false,-1);
    tracep->declBit(c+37,"PCSrc", false,-1);
    tracep->declBus(c+48,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+36,"ALUSrc", false,-1);
    tracep->declBus(c+44,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBit(c+51,"Branch", false,-1);
    tracep->declBus(c+52,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+53,"op5", false,-1);
    tracep->pushNamePrefix("ALU_Deco ");
    tracep->declBit(c+53,"op5", false,-1);
    tracep->declBus(c+47,"funct3", false,-1, 2,0);
    tracep->declBit(c+49,"funct7_5", false,-1);
    tracep->declBus(c+52,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+48,"ALUControl", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Main_Deco ");
    tracep->declBus(c+46,"op", false,-1, 6,0);
    tracep->declBit(c+51,"Branch", false,-1);
    tracep->declBit(c+36,"ALUSrc", false,-1);
    tracep->declBus(c+44,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBus(c+52,"ALUOp", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("InstrROM ");
    tracep->declBus(c+65,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"F_addr", false,-1, 31,0);
    tracep->declBus(c+50,"instr", false,-1, 31,0);
    tracep->declBus(c+54,"addr", false,-1, 27,0);
    tracep->declBus(c+2,"unused", false,-1, 31,28);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_top ");
    tracep->declBus(c+64,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+61,"branchPC", false,-1, 31,0);
    tracep->declBus(c+62,"nextPC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_adder ");
    tracep->declBus(c+64,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+42,"b", false,-1, 31,0);
    tracep->declBus(c+61,"sum", false,-1, 31,0);
    tracep->declBus(c+61,"sum_internal", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_mux ");
    tracep->declBus(c+64,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"inputA", false,-1, 31,0);
    tracep->declBus(c+3,"inputB", false,-1, 31,0);
    tracep->declBit(c+37,"sel", false,-1);
    tracep->declBus(c+62,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_reg ");
    tracep->declBus(c+64,"WIDTH_IN", false,-1, 31,0);
    tracep->declBus(c+64,"WIDTH_OUT", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+62,"data_in", false,-1, 31,0);
    tracep->declBus(c+1,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SignEX ");
    tracep->declBus(c+43,"instr_imm", false,-1, 31,7);
    tracep->declBus(c+44,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_alu_top ");
    tracep->declBus(c+64,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+66,"ADDRESS", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBit(c+36,"ALUsrc", false,-1);
    tracep->declBus(c+48,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+39,"rs1", false,-1, 4,0);
    tracep->declBus(c+40,"rs2", false,-1, 4,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+42,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+60,"a0", false,-1, 31,0);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->declBus(c+63,"regOp2", false,-1, 31,0);
    tracep->declBus(c+55,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+56,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+57,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+64,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+56,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+48,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+45,"EQ", false,-1);
    tracep->declBus(c+57,"ALUout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg1 ");
    tracep->declBus(c+66,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+38,"WE3", false,-1);
    tracep->declBus(c+39,"AD1", false,-1, 4,0);
    tracep->declBus(c+40,"AD2", false,-1, 4,0);
    tracep->declBus(c+41,"AD3", false,-1, 4,0);
    tracep->declBus(c+57,"WD3", false,-1, 31,0);
    tracep->declBus(c+55,"RD1", false,-1, 31,0);
    tracep->declBus(c+63,"RD2", false,-1, 31,0);
    tracep->declBus(c+60,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VRISCV_top___024root__trace_init_top(VRISCV_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_init_top\n"); );
    // Body
    VRISCV_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRISCV_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCV_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCV_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISCV_top___024root__trace_register(VRISCV_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRISCV_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRISCV_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRISCV_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISCV_top___024root__trace_full_sub_0(VRISCV_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISCV_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_full_top_0\n"); );
    // Init
    VRISCV_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_top___024root*>(voidSelf);
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISCV_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISCV_top___024root__trace_full_sub_0(VRISCV_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->RISCV_top__DOT__PC),32);
    bufp->fullCData(oldp+2,((vlSelf->RISCV_top__DOT__PC 
                             >> 0x1cU)),4);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->RISCV_top__DOT__PC)),32);
    bufp->fullIData(oldp+4,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers[31]),32);
    bufp->fullBit(oldp+36,(vlSelf->RISCV_top__DOT__ALUSrc));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->RISCV_top__DOT__CU__DOT__Branch) 
                            & (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                               == vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2))));
    bufp->fullBit(oldp+38,(vlSelf->RISCV_top__DOT__RegWrite));
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+42,(vlSelf->RISCV_top__DOT__ImmOp),32);
    bufp->fullIData(oldp+43,((vlSelf->RISCV_top__DOT__instr 
                              >> 7U)),25);
    bufp->fullCData(oldp+44,(vlSelf->RISCV_top__DOT__ImmSrc),2);
    bufp->fullBit(oldp+45,((vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                            == vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2)));
    bufp->fullCData(oldp+46,((0x7fU & vlSelf->RISCV_top__DOT__instr)),7);
    bufp->fullCData(oldp+47,((7U & (vlSelf->RISCV_top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+48,(vlSelf->RISCV_top__DOT__ALUCtrl),3);
    bufp->fullBit(oldp+49,((1U & (vlSelf->RISCV_top__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+50,(vlSelf->RISCV_top__DOT__instr),32);
    bufp->fullBit(oldp+51,(vlSelf->RISCV_top__DOT__CU__DOT__Branch));
    bufp->fullCData(oldp+52,(vlSelf->RISCV_top__DOT__CU__DOT__ALUOp),2);
    bufp->fullBit(oldp+53,((1U & (vlSelf->RISCV_top__DOT__instr 
                                  >> 5U))));
    bufp->fullIData(oldp+54,(vlSelf->RISCV_top__DOT__InstrROM__DOT__addr),28);
    bufp->fullIData(oldp+55,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1),32);
    bufp->fullIData(oldp+56,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2),32);
    bufp->fullIData(oldp+57,(((4U & (IData)(vlSelf->RISCV_top__DOT__ALUCtrl))
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
    bufp->fullBit(oldp+58,(vlSelf->clk));
    bufp->fullBit(oldp+59,(vlSelf->rst));
    bufp->fullIData(oldp+60,(vlSelf->a0),32);
    bufp->fullIData(oldp+61,((vlSelf->RISCV_top__DOT__PC 
                              + vlSelf->RISCV_top__DOT__ImmOp)),32);
    bufp->fullIData(oldp+62,((((IData)(vlSelf->RISCV_top__DOT__CU__DOT__Branch) 
                               & (vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop1 
                                  == vlSelf->RISCV_top__DOT__reg_alu_top__DOT__ALUop2))
                               ? (vlSelf->RISCV_top__DOT__PC 
                                  + vlSelf->RISCV_top__DOT__ImmOp)
                               : ((IData)(4U) + vlSelf->RISCV_top__DOT__PC))),32);
    bufp->fullIData(oldp+63,(vlSelf->RISCV_top__DOT__reg_alu_top__DOT__reg1__DOT__registers
                             [(0x1fU & (vlSelf->RISCV_top__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+64,(0x20U),32);
    bufp->fullIData(oldp+65,(0x1cU),32);
    bufp->fullIData(oldp+66,(5U),32);
}
