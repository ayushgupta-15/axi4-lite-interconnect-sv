// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_crossbar_tb.h for the primary calling header

#ifndef VERILATED_VAXI_CROSSBAR_TB___024ROOT_H_
#define VERILATED_VAXI_CROSSBAR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vaxi_crossbar_tb_axi4_lite_if;


class Vaxi_crossbar_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxi_crossbar_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vaxi_crossbar_tb_axi4_lite_if* __PVT__axi_crossbar_tb__DOT__axi;
    Vaxi_crossbar_tb_axi4_lite_if* __PVT__axi_crossbar_tb__DOT__dut__DOT__axi_s0;
    Vaxi_crossbar_tb_axi4_lite_if* __PVT__axi_crossbar_tb__DOT__dut__DOT__axi_s1;
    Vaxi_crossbar_tb_axi4_lite_if* __PVT__axi_crossbar_tb__DOT__dut__DOT__axi_s2;
    Vaxi_crossbar_tb_axi4_lite_if* __PVT__axi_crossbar_tb__DOT__dut__DOT__axi_s_err;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ axi_crossbar_tb__DOT__clk;
    CData/*0:0*/ axi_crossbar_tb__DOT__rst_n;
    CData/*0:0*/ axi_crossbar_tb__DOT__unnamedblk1__DOT__write;
    CData/*3:0*/ axi_crossbar_tb__DOT__dut__DOT__aw_target_hot;
    CData/*3:0*/ axi_crossbar_tb__DOT__dut__DOT__ar_target_hot;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__b_pending;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__r_pending;
    CData/*3:0*/ axi_crossbar_tb__DOT__dut__DOT__b_target_hot;
    CData/*3:0*/ axi_crossbar_tb__DOT__dut__DOT__r_target_hot;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__aw_allow;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__ar_allow;
    CData/*3:0*/ axi_crossbar_tb__DOT__dut__DOT__w_target_hot;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done;
    CData/*0:0*/ axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __Vsampled__TOP__axi_crossbar_tb__DOT__rst_n;
    CData/*3:0*/ __Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__ar_target_hot;
    CData/*3:0*/ __Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__aw_target_hot;
    CData/*3:0*/ __Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__r_target_hot;
    CData/*3:0*/ __Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__b_target_hot;
    IData/*31:0*/ axi_crossbar_tb__DOT__errors;
    IData/*31:0*/ axi_crossbar_tb__DOT__rand_addr;
    IData/*31:0*/ axi_crossbar_tb__DOT__rand_data;
    IData/*31:0*/ axi_crossbar_tb__DOT__unnamedblk1__DOT__target;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__awaddr_q;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__wdata_q;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__araddr_q;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__awaddr_q;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__wdata_q;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__araddr_q;
    IData/*31:0*/ axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__uart_reg;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> axi_crossbar_tb__DOT__mem_ref;
    VlUnpacked<IData/*31:0*/, 8> axi_crossbar_tb__DOT__reg_ref;
    VlUnpacked<IData/*31:0*/, 256> axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory;
    VlUnpacked<IData/*31:0*/, 8> axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_heeb7a2b0__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaxi_crossbar_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi_crossbar_tb___024root(Vaxi_crossbar_tb__Syms* symsp, const char* v__name);
    ~Vaxi_crossbar_tb___024root();
    VL_UNCOPYABLE(Vaxi_crossbar_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
