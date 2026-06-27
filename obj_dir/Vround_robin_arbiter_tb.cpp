// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vround_robin_arbiter_tb__pch.h"

//============================================================
// Constructors

Vround_robin_arbiter_tb::Vround_robin_arbiter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vround_robin_arbiter_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vround_robin_arbiter_tb::Vround_robin_arbiter_tb(const char* _vcname__)
    : Vround_robin_arbiter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vround_robin_arbiter_tb::~Vround_robin_arbiter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vround_robin_arbiter_tb___024root___eval_debug_assertions(Vround_robin_arbiter_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vround_robin_arbiter_tb___024root___eval_static(Vround_robin_arbiter_tb___024root* vlSelf);
void Vround_robin_arbiter_tb___024root___eval_initial(Vround_robin_arbiter_tb___024root* vlSelf);
void Vround_robin_arbiter_tb___024root___eval_settle(Vround_robin_arbiter_tb___024root* vlSelf);
void Vround_robin_arbiter_tb___024root___eval(Vround_robin_arbiter_tb___024root* vlSelf);

void Vround_robin_arbiter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vround_robin_arbiter_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vround_robin_arbiter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vround_robin_arbiter_tb___024root___eval_static(&(vlSymsp->TOP));
        Vround_robin_arbiter_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vround_robin_arbiter_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vround_robin_arbiter_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vround_robin_arbiter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vround_robin_arbiter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vround_robin_arbiter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vround_robin_arbiter_tb___024root___eval_final(Vround_robin_arbiter_tb___024root* vlSelf);

VL_ATTR_COLD void Vround_robin_arbiter_tb::final() {
    Vround_robin_arbiter_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vround_robin_arbiter_tb::hierName() const { return vlSymsp->name(); }
const char* Vround_robin_arbiter_tb::modelName() const { return "Vround_robin_arbiter_tb"; }
unsigned Vround_robin_arbiter_tb::threads() const { return 1; }
void Vround_robin_arbiter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vround_robin_arbiter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vround_robin_arbiter_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vround_robin_arbiter_tb::trace()' called on model that was Verilated without --trace option");
}
