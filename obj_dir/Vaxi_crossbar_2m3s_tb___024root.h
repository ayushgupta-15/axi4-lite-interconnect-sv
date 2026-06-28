// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#ifndef VERILATED_VAXI_CROSSBAR_2M3S_TB___024ROOT_H_
#define VERILATED_VAXI_CROSSBAR_2M3S_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vaxi_crossbar_2m3s_tb_axi4_lite_if;


class Vaxi_crossbar_2m3s_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxi_crossbar_2m3s_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__axi_m0;
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__axi_m1;
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux;
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0;
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1;
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2;
    Vaxi_crossbar_2m3s_tb_axi4_lite_if* __PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__clk;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__rst_n;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__resp0;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__resp1;
        CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel;
        CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_update_en;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_update_en;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy;
        CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot;
        CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_pending;
        CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot;
        CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb;
        CData/*0:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx;
        CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb;
        CData/*1:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot;
        CData/*3:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy;
        CData/*0:0*/ __Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__grant_idx;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__errors;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__rdata0;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__rdata1;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_m0_writes;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_m1_writes;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_m0_reads;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_m1_reads;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_write_contention;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_read_contention;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_mem_hits;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_reg_hits;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_uart_hits;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__cov_err_hits;
    };
    struct {
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__data0;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__data1;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT____Vlvbound_hab0dbbbd__0;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT____Vlvbound_hc2133c3a__0;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__awaddr_q;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__wdata_q;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__araddr_q;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__awaddr_q;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__wdata_q;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__araddr_q;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__uart_reg;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri;
        IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*1:0*/, 4> axi_crossbar_2m3s_tb__DOT__grant_trace;
        VlUnpacked<IData/*31:0*/, 128> axi_crossbar_2m3s_tb__DOT__m0_mem_ref;
        VlUnpacked<IData/*31:0*/, 128> axi_crossbar_2m3s_tb__DOT__m1_mem_ref;
        VlUnpacked<IData/*31:0*/, 256> axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory;
        VlUnpacked<IData/*31:0*/, 8> axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h54874cc1__0;
    VlForkSync __Vfork_1__sync;
    VlForkSync __Vfork_2__sync;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaxi_crossbar_2m3s_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi_crossbar_2m3s_tb___024root(Vaxi_crossbar_2m3s_tb__Syms* symsp, const char* v__name);
    ~Vaxi_crossbar_2m3s_tb___024root();
    VL_UNCOPYABLE(Vaxi_crossbar_2m3s_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
