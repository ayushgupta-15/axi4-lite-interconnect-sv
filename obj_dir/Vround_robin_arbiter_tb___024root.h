// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vround_robin_arbiter_tb.h for the primary calling header

#ifndef VERILATED_VROUND_ROBIN_ARBITER_TB___024ROOT_H_
#define VERILATED_VROUND_ROBIN_ARBITER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vround_robin_arbiter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vround_robin_arbiter_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ round_robin_arbiter_tb__DOT__clk;
    CData/*0:0*/ round_robin_arbiter_tb__DOT__rst_n;
    CData/*1:0*/ round_robin_arbiter_tb__DOT__req;
    CData/*0:0*/ round_robin_arbiter_tb__DOT__dut__DOT__priority_idx;
    CData/*1:0*/ round_robin_arbiter_tb__DOT__dut__DOT__grant_comb;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__round_robin_arbiter_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ round_robin_arbiter_tb__DOT__errors;
    IData/*31:0*/ round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    IData/*31:0*/ round_robin_arbiter_tb__DOT__dut__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he4e0202c__0;
    VlTriggerScheduler __VtrigSched_he4e01e6d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vround_robin_arbiter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vround_robin_arbiter_tb___024root(Vround_robin_arbiter_tb__Syms* symsp, const char* v__name);
    ~Vround_robin_arbiter_tb___024root();
    VL_UNCOPYABLE(Vround_robin_arbiter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
