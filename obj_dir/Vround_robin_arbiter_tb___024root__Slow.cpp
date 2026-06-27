// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround_robin_arbiter_tb.h for the primary calling header

#include "Vround_robin_arbiter_tb__pch.h"
#include "Vround_robin_arbiter_tb__Syms.h"
#include "Vround_robin_arbiter_tb___024root.h"

void Vround_robin_arbiter_tb___024root___ctor_var_reset(Vround_robin_arbiter_tb___024root* vlSelf);

Vround_robin_arbiter_tb___024root::Vround_robin_arbiter_tb___024root(Vround_robin_arbiter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vround_robin_arbiter_tb___024root___ctor_var_reset(this);
}

void Vround_robin_arbiter_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vround_robin_arbiter_tb___024root::~Vround_robin_arbiter_tb___024root() {
}
