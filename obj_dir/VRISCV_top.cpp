// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISCV_top.h"
#include "VRISCV_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRISCV_top::VRISCV_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISCV_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISCV_top::VRISCV_top(const char* _vcname__)
    : VRISCV_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISCV_top::~VRISCV_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRISCV_top___024root___eval_initial(VRISCV_top___024root* vlSelf);
void VRISCV_top___024root___eval_settle(VRISCV_top___024root* vlSelf);
void VRISCV_top___024root___eval(VRISCV_top___024root* vlSelf);
#ifdef VL_DEBUG
void VRISCV_top___024root___eval_debug_assertions(VRISCV_top___024root* vlSelf);
#endif  // VL_DEBUG
void VRISCV_top___024root___final(VRISCV_top___024root* vlSelf);

static void _eval_initial_loop(VRISCV_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRISCV_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRISCV_top___024root___eval_settle(&(vlSymsp->TOP));
        VRISCV_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRISCV_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISCV_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISCV_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRISCV_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRISCV_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRISCV_top::final() {
    VRISCV_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISCV_top::hierName() const { return vlSymsp->name(); }
const char* VRISCV_top::modelName() const { return "VRISCV_top"; }
unsigned VRISCV_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRISCV_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRISCV_top___024root__trace_init_top(VRISCV_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRISCV_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_top___024root*>(voidSelf);
    VRISCV_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRISCV_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRISCV_top___024root__trace_register(VRISCV_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRISCV_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRISCV_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
