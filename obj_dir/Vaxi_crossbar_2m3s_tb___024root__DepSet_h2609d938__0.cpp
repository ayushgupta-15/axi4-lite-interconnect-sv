// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb__Syms.h"
#include "Vaxi_crossbar_2m3s_tb___024root.h"

VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__1__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__1__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__r_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__3__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__3__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__5__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__5__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__7__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__7__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__r_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__9__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__9__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__11__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__11__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__r_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__13__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__13__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__15__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__15__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__r_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__17__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__17__addr = 0;
    // Body
    VL_WRITEF("Starting Multi-Master Crossbar Tests...\n\n");
    vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 0U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       172);
    vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       174);
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__data = 0xaaaabbbbU;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__addr = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       40);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       40);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__1__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__1__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__1__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__1__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           49);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID) 
               & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                  & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           52);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
                goto __Vlabel1;
            }
        }
        __Vlabel1: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__0__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__addr = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       73);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       73);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__3__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__3__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__3__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__3__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_done)))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           80);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           82);
        if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_match) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               86);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__r_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__data 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               89);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__r_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 0U;
                goto __Vlabel2;
            }
        }
        __Vlabel2: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__data;
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__2__resp;
    if (VL_UNLIKELY(((0xaaaabbbbU != vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0) 
                     | (0U != (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp0))))) {
        VL_WRITEF("FAIL: Test 1 M0 Mem\n");
        vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 
            ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__data = 0x12345678U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__addr = 0x2000U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       40);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       40);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__5__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__5__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__5__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__5__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           49);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID) 
               & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                  & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           52);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
                goto __Vlabel3;
            }
        }
        __Vlabel3: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__4__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__data = 0x9abcdef0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__addr = 0x2004U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       40);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       40);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__7__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__7__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__7__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__7__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           49);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID) 
               & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                  & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           52);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
                goto __Vlabel4;
            }
        }
        __Vlabel4: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__6__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__addr = 0x2000U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       73);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       73);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__9__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__9__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__9__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__9__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_done)))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           80);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           82);
        if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_match) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               86);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__r_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__data 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               89);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__r_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 0U;
                goto __Vlabel5;
            }
        }
        __Vlabel5: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__data;
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__8__resp;
    if (VL_UNLIKELY(((0x9abcdef0U != vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0) 
                     | (0U != (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp0))))) {
        VL_WRITEF("FAIL: Test 1 M0 UART\n");
        vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 
            ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0U == vlSelf->axi_crossbar_2m3s_tb__DOT__errors))) {
        VL_WRITEF("PASS: Master0\n");
    }
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__data = 0xccccddddU;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__addr = 0x1004U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       102);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       102);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__11__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__11__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__11__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__11__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           111);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID) 
               & (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                   >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           114);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               119);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               122);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 0U;
                goto __Vlabel6;
            }
        }
        __Vlabel6: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__10__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__addr = 0x1004U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       135);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       135);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__13__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__13__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__13__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__13__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_done)))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           142);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           144);
        if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_match) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               148);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__r_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__data 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               151);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__r_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 0U;
                goto __Vlabel7;
            }
        }
        __Vlabel7: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__data;
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__12__resp;
    if (VL_UNLIKELY(((0xccccddddU != vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1) 
                     | (0U != (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp1))))) {
        VL_WRITEF("FAIL: Test 2 M1 Reg\n");
        vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 
            ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__data = 0xdeadbeefU;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__addr = 0x3000U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       102);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       102);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__15__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__15__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__15__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__15__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           111);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID) 
               & (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                   >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           114);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               119);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               122);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 0U;
                goto __Vlabel8;
            }
        }
        __Vlabel8: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__14__resp;
    if (VL_UNLIKELY((2U != (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp1)))) {
        VL_WRITEF("FAIL: M1 Error Write\n");
        vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 
            ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__addr = 0x4000U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       135);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       135);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__17__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__17__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__17__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__17__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_done)))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           142);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           144);
        if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_match) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               148);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__r_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__data 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               151);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__r_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 0U;
                goto __Vlabel9;
            }
        }
        __Vlabel9: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__data;
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__16__resp;
    if (VL_UNLIKELY((2U != (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp1)))) {
        VL_WRITEF("FAIL: M1 Error Read\n");
        vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 
            ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0U == vlSelf->axi_crossbar_2m3s_tb__DOT__errors))) {
        VL_WRITEF("PASS: Master1\n");
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx = 0U;
    vlSelf->__Vfork_1__sync.init(2U, nullptr);
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf);
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf);
    co_await vlSelf->__Vfork_1__sync.join(nullptr, 
                                          "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                          203);
    if ((((((1U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
             [0U]) & (2U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
                      [1U])) & (1U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
                                [2U])) & (2U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
                                          [3U])) | 
         ((((2U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
             [0U]) & (1U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
                      [1U])) & (2U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
                                [2U])) & (1U == vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace
                                          [3U])))) {
        VL_WRITEF("PASS: Arbitration\nPASS: Fairness\n");
    } else {
        VL_WRITEF("FAIL: Fairness/Arbitration sequence incorrect\n");
        vlSelf->axi_crossbar_2m3s_tb__DOT__errors = 
            ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[(0x7fU 
                                                       & axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT____Vlvbound_hab0dbbbd__0 = 0U;
        if (VL_LIKELY((0x7fU >= (0xffU & axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__m1_mem_ref[(0xffU 
                                                           & axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i)] 
                = vlSelf->axi_crossbar_2m3s_tb__DOT____Vlvbound_hab0dbbbd__0;
        }
        axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[0U] = 0xaaaabbbbU;
    vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[1U] = 0x11111111U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[2U] = 0x22222222U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[3U] = 0x33333333U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[4U] = 0x44444444U;
    vlSelf->__Vfork_2__sync.init(2U, nullptr);
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(vlSelf);
    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(vlSelf);
    co_await vlSelf->__Vfork_2__sync.join(nullptr, 
                                          "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                          233);
    if (VL_UNLIKELY((0U == vlSelf->axi_crossbar_2m3s_tb__DOT__errors))) {
        VL_WRITEF("PASS: Random Regression\n");
    }
    VL_WRITEF("\n-----------------------------\n");
    if ((0U == vlSelf->axi_crossbar_2m3s_tb__DOT__errors)) {
        VL_WRITEF("ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("SOME TESTS FAILED: %11d errors\n",
                  32,vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
    }
    VL_WRITEF("-----------------------------\n");
    VL_WRITEF("\n=============================================\n       AXI CROSSBAR FUNCTIONAL COVERAGE      \n=============================================\n Master Coverage:\n   M0 Writes : %11d\n   M1 Writes : %11d\n   M0 Reads  : %11d\n   M1 Reads  : %11d\n---------------------------------------------\n Slave Address Coverage:\n   Memory   (0x0000 - 0x0FFF) : %11d\n   Register (0x1000 - 0x1FFF) : %11d\n   UART     (0x2000 - 0x2FFF) : %11d\n   Error    (0x3000 - 0xFFFF) : %11d\n",
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    VL_WRITEF("---------------------------------------------\n Cross Coverage (Contention):\n   Simultaneous Write Reqs : %11d\n   Simultaneous Read Reqs  : %11d\n---------------------------------------------\n Coverage Goals Achieved:\n   Memory     [%s]\n   Register   [%s]\n   UART       [%s]\n   Error      [%s]\n   Read       [%s]\n   Write      [%s]\n   M0         [%s]\n   M1         [%s]\n   Contention [%s]\n   SLVERR     [%s]\n=============================================\n\n",
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_write_contention,
              32,vlSelf->axi_crossbar_2m3s_tb__DOT__cov_read_contention,
              8,(VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits)
                  ? 0x78U : 0x20U),8,(VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits)
                                       ? 0x78U : 0x20U),
              8,(VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits)
                  ? 0x78U : 0x20U),8,(VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits)
                                       ? 0x78U : 0x20U),
              8,((VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads) 
                  & VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads))
                  ? 0x78U : 0x20U),8,((VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes) 
                                       & VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes))
                                       ? 0x78U : 0x20U),
              8,((VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads) 
                  & VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes))
                  ? 0x78U : 0x20U),8,((VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads) 
                                       & VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes))
                                       ? 0x78U : 0x20U),
              8,((VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_write_contention) 
                  | VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_read_contention))
                  ? 0x78U : 0x20U),8,(VL_LTS_III(32, 0U, vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits)
                                       ? 0x78U : 0x20U));
    VL_FINISH_MT("tb/integration/axi_crossbar_2m3s_tb.sv", 295, "");
}

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__1\n"); );
    // Init
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__i;
    axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__31__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__31__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__r_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__33__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__33__addr = 0;
    // Body
    axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1f4U, axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__i)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel 
            = (7U & VL_URANDOM_RANGE_I(0U, 3U));
        if ((0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                = VL_SHIFTL_III(32,32,32, (IData)(VL_URANDOM_RANGE_I(0x80U, 0xffU)), 2U);
        } else if ((1U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                = ((IData)(0x1000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                              VL_URANDOM_RANGE_I(4U, 7U)), 2U)));
        } else if ((2U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                = ((IData)(0x2000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                              VL_URANDOM_RANGE_I(4U, 7U)), 2U)));
        } else {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                = ((IData)(0x3000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                              VL_URANDOM_RANGE_I(4U, 7U)), 2U)));
        }
        vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__data1 
            = VL_RANDOM_I();
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__data 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__data1;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__addr 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_done = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_done = 0U;
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               102);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               102);
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__addr;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__data;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB = 0xfU;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 1U;
            vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes);
            __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__31__addr 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__addr;
            if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__31__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
            } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__31__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
            } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__31__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
            } else {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
            }
            while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_done)) 
                          | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_done))))) {
                co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                   111);
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_match 
                    = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
                       & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY));
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_match 
                    = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID) 
                       & (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                           >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                   114);
                if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_done)) 
                     & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_match))) {
                    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 0U;
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__aw_done = 1U;
                }
                if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_done)) 
                     & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_match))) {
                    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 0U;
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__w_done = 1U;
                }
            }
            {
                while (1U) {
                    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                       119);
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__b_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID) 
                           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY));
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__b_match) {
                        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__resp 
                            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
                    }
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       122);
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__b_match) {
                        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 0U;
                        goto __Vlabel10;
                    }
                }
                __Vlabel10: ;
            }
            vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__30__resp;
            if (((0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel)) 
                 & (0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp1)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT____Vlvbound_hc2133c3a__0 
                    = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__data1;
                if (VL_LIKELY((0x7fU >= (0xffU & ((vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                                                   >> 2U) 
                                                  - (IData)(0x80U)))))) {
                    vlSelf->axi_crossbar_2m3s_tb__DOT__m1_mem_ref[(0xffU 
                                                                   & ((vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                                                                       >> 2U) 
                                                                      - (IData)(0x80U)))] 
                        = vlSelf->axi_crossbar_2m3s_tb__DOT____Vlvbound_hc2133c3a__0;
                }
            }
        } else {
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__addr 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_done = 0U;
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               135);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               135);
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__addr;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 1U;
            vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_reads);
            __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__33__addr 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__addr;
            if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__33__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
            } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__33__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
            } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__33__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
            } else {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
            }
            while ((1U & (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_done)))) {
                co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                   142);
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_match 
                    = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID) 
                       & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY));
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                   144);
                if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_match) {
                    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID = 0U;
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__ar_done = 1U;
                }
            }
            {
                while (1U) {
                    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                       148);
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__r_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID) 
                           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY));
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__r_match) {
                        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__data 
                            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
                        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__resp 
                            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
                    }
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       151);
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__r_match) {
                        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY = 0U;
                        goto __Vlabel11;
                    }
                }
                __Vlabel11: ;
            }
            vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__data;
            vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_read__32__resp;
            if (VL_UNLIKELY((((0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__m1_slave_sel)) 
                              & (0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp1))) 
                             & (vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1 
                                != ((0x7fU >= (0xffU 
                                               & ((vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                                                   >> 2U) 
                                                  - (IData)(0x80U))))
                                     ? vlSelf->axi_crossbar_2m3s_tb__DOT__m1_mem_ref
                                    [(0xffU & ((vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                                                >> 2U) 
                                               - (IData)(0x80U)))]
                                     : 0U))))) {
                VL_WRITEF("FAIL: M1 Random Mismatch Addr=%x Expected=%x Got=%x\n",
                          32,vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1,
                          32,((0x7fU >= (0xffU & ((vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                                                   >> 2U) 
                                                  - (IData)(0x80U))))
                               ? vlSelf->axi_crossbar_2m3s_tb__DOT__m1_mem_ref
                              [(0xffU & ((vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__addr1 
                                          >> 2U) - (IData)(0x80U)))]
                               : 0U),32,vlSelf->axi_crossbar_2m3s_tb__DOT__rdata1);
                vlSelf->axi_crossbar_2m3s_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
            }
        }
        axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__unnamedblk4__DOT__i);
    }
    vlSelf->__Vfork_2__sync.done("tb/integration/axi_crossbar_2m3s_tb.sv", 
                                 259);
}

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_2__0\n"); );
    // Init
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__i;
    axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__27__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__27__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__r_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__29__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__29__addr = 0;
    // Body
    axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1f4U, axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__i)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel 
            = (7U & VL_URANDOM_RANGE_I(0U, 3U));
        if ((0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                = VL_SHIFTL_III(32,32,32, (IData)(VL_URANDOM_RANGE_I(0U, 0x7fU)), 2U);
        } else if ((1U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                = ((IData)(0x1000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                              VL_URANDOM_RANGE_I(0U, 3U)), 2U)));
        } else if ((2U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                = ((IData)(0x2000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                              VL_URANDOM_RANGE_I(0U, 3U)), 2U)));
        } else {
            vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                = ((IData)(0x3000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                              VL_URANDOM_RANGE_I(0U, 3U)), 2U)));
        }
        vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__data0 
            = VL_RANDOM_I();
        if ((0U != VL_URANDOM_RANGE_I(0U, 1U))) {
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__data 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__data0;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__addr 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_done = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_done = 0U;
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               40);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               40);
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__addr;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__data;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB = 0xfU;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 1U;
            vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes);
            __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__27__addr 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__addr;
            if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__27__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
            } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__27__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
            } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__27__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
            } else {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
            }
            while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_done)) 
                          | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_done))))) {
                co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                   49);
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_match 
                    = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
                       & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY));
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_match 
                    = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID) 
                       & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                          & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                   52);
                if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_done)) 
                     & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_match))) {
                    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__aw_done = 1U;
                }
                if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_done)) 
                     & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_match))) {
                    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__w_done = 1U;
                }
            }
            {
                while (1U) {
                    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                       57);
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__b_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID) 
                           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY));
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__b_match) {
                        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__resp 
                            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
                    }
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       60);
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__b_match) {
                        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
                        goto __Vlabel12;
                    }
                }
                __Vlabel12: ;
            }
            vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__26__resp;
            if (((0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel)) 
                 & (0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp0)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref[(0x7fU 
                                                               & (vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                                                                  >> 2U))] 
                    = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__data0;
            }
        } else {
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__addr 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_done = 0U;
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               73);
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               73);
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__addr;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 1U;
            vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_reads);
            __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__29__addr 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__addr;
            if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__29__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
            } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__29__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
            } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__29__addr)) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
            } else {
                vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
            }
            while ((1U & (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_done)))) {
                co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                   80);
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_match 
                    = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID) 
                       & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY));
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                   82);
                if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_match) {
                    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID = 0U;
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__ar_done = 1U;
                }
            }
            {
                while (1U) {
                    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                                       86);
                    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__r_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID) 
                           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY));
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__r_match) {
                        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__data 
                            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
                        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__resp 
                            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
                    }
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       89);
                    if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__r_match) {
                        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY = 0U;
                        goto __Vlabel13;
                    }
                }
                __Vlabel13: ;
            }
            vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__data;
            vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 
                = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_read__28__resp;
            if (VL_UNLIKELY((((0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m0_slave_sel)) 
                              & (0U == (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__resp0))) 
                             & (vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0 
                                != vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref
                                [(0x7fU & (vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                                           >> 2U))])))) {
                VL_WRITEF("FAIL: M0 Random Mismatch Addr=%x Expected=%x Got=%x\n",
                          32,vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0,
                          32,vlSelf->axi_crossbar_2m3s_tb__DOT__m0_mem_ref
                          [(0x7fU & (vlSelf->axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__addr0 
                                     >> 2U))],32,vlSelf->axi_crossbar_2m3s_tb__DOT__rdata0);
                vlSelf->axi_crossbar_2m3s_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__errors);
            }
        }
        axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__unnamedblk2__DOT__i);
    }
    vlSelf->__Vfork_2__sync.done("tb/integration/axi_crossbar_2m3s_tb.sv", 
                                 234);
}

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__23__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__23__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__25__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__25__addr = 0;
    // Body
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__data = 0x33333333U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__addr = 0xcU;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       102);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       102);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__23__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__23__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__23__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__23__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           111);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID) 
               & (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                   >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           114);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               119);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               122);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 0U;
                goto __Vlabel14;
            }
        }
        __Vlabel14: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__22__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__data = 0x44444444U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__addr = 0x10U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       102);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       102);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m1_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__25__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__25__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__25__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__25__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           111);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID) 
               & (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                   >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           114);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               119);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               122);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY = 0U;
                goto __Vlabel15;
            }
        }
        __Vlabel15: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp1 = __Vtask_axi_crossbar_2m3s_tb__DOT__m1_write__24__resp;
    vlSelf->__Vfork_1__sync.done("tb/integration/axi_crossbar_2m3s_tb.sv", 
                                 208);
}

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__19__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__19__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__data;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_done;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__b_match;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__21__addr;
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__21__addr = 0;
    // Body
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__data = 0x11111111U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__addr = 4U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       40);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       40);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__19__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__19__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__19__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__19__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           49);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID) 
               & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                  & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           52);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
                goto __Vlabel16;
            }
        }
        __Vlabel16: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__18__resp;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__data = 0x22222222U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__addr = 8U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_done = 0U;
    __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_done = 0U;
    co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                       40);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                       40);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__addr;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__data;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 1U;
    vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes 
        = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_m0_writes);
    __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__21__addr 
        = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__addr;
    if ((0x1000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__21__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_mem_hits);
    } else if ((0x2000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__21__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_reg_hits);
    } else if ((0x3000U > __Vtask_axi_crossbar_2m3s_tb__DOT__track_address_cov__21__addr)) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_uart_hits);
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits 
            = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_err_hits);
    }
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_done))))) {
        co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                           49);
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY));
        __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID) 
               & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                  & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY)));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                           52);
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__aw_done = 1U;
        }
        if (((~ (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_done)) 
             & (IData)(__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_match))) {
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID = 0U;
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_h54874cc1__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_2m3s_tb.clk)", 
                                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY));
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__b_match) {
                __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__resp 
                    = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_2m3s_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__b_match) {
                vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY = 0U;
                goto __Vlabel17;
            }
        }
        __Vlabel17: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__resp0 = __Vtask_axi_crossbar_2m3s_tb__DOT__m0_write__20__resp;
    vlSelf->__Vfork_1__sync.done("tb/integration/axi_crossbar_2m3s_tb.sv", 
                                 204);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__act(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxi_crossbar_2m3s_tb___024root___eval_triggers__act(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__clk__0 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_2m3s_tb__DOT__rst_n__0 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxi_crossbar_2m3s_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb___024root___act_comb__TOP__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant = 0;
    CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 0;
    CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 0;
    CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot = 0;
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb = 0U;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = (1U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                         + axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i));
            if ((1U & ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID) 
                         << 1U) | (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID)) 
                       >> (1U & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb 
                    = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel18;
            }
            axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel18: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb = 0U;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = (1U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                         + axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i));
            if ((1U & ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
                         << 1U) | (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID)) 
                       >> (1U & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb 
                    = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel19;
            }
            axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel19: ;
    }
    axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID 
        = ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY)) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID)) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR 
        = ((2U & (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant))
            ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR
            : vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID));
    if ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant))) {
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR;
    } else {
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR)) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 4U;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR)) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 4U;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot 
        = ((1U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
                              ? 8U : 1U)));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot 
        = ((1U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
                              ? 8U : 1U)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY)));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_update_en 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY 
        = ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_update_en 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY 
        = (((((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY)) 
             | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY))) 
            | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY))) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY)));
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb___024root___nba_sequent__TOP__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:184: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar: Crossbar: Multiple read slaves targeted simultaneously\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 184, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:181: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar: Crossbar: Multiple write slaves targeted simultaneously\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 181, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_2m3s.sv:142: Assertion failed in %Naxi_crossbar_2m3s_tb.dut: Read arbiter granted multiple masters simultaneously\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_2m3s.sv", 142, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_2m3s.sv:139: Assertion failed in %Naxi_crossbar_2m3s_tb.dut: Write arbiter granted multiple masters simultaneously\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_2m3s.sv", 139, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:190: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar: Crossbar: Multiple read response slaves tracked\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 190, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:187: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar: Crossbar: Multiple write response slaves tracked\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 187, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | (~ ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID) 
                                        & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID)) 
                                       & (0U == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb))) 
                                      & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_2m3s.sv:150: Assertion failed in %Naxi_crossbar_2m3s_tb.dut: Read arbiter failed to grant when requests were pending\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_2m3s.sv", 150, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | (~ ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
                                        & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID)) 
                                       & (0U == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb))) 
                                      & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_2m3s.sv:146: Assertion failed in %Naxi_crossbar_2m3s_tb.dut: Write arbiter failed to grant when requests were pending\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_2m3s.sv", 146, "");
            }
        }
    }
    if ((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) 
          & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
         & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY))) {
        if (VL_GTS_III(32, 4U, vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__grant_trace[(3U 
                                                            & vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx)] 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb;
            vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__grant_idx);
        }
    }
    if (vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) {
        if ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID)) 
             & (~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy)))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__cov_read_contention 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_read_contention);
        }
        if ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID)) 
             & (~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy)))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__cov_write_contention 
                = ((IData)(1U) + vlSelf->axi_crossbar_2m3s_tb__DOT__cov_write_contention);
        }
    }
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb___024root___nba_sequent__TOP__1(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0;
    __Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0;
    __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0;
    __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0;
    __Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0;
    __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0;
    __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v1;
    __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v1 = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID = 0;
    // Body
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID;
    __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 = 0U;
    __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 = 0U;
    __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v1 = 0U;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID;
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID;
    if (vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) {
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_pending = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_pending = 1U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending = 1U;
        }
        if (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_update_en) {
            if ((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx = 1U;
            }
            if ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID) 
                      & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY))))) {
            if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
                 & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant 
                    = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb;
            }
        }
        if (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_update_en) {
            if ((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx = 1U;
            }
            if ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID) 
                      & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY))))) {
            if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
                 & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant 
                    = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb;
            }
        }
        if ((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BRESP = 0U;
            __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__wdata_q;
            __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 = 1U;
            __Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0 
                = (0xffU & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__awaddr_q 
                            >> 2U));
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RDATA 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory
                [(0xffU & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__araddr_q 
                           >> 2U))];
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RRESP = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID = 0U;
        }
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_pending = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant = 0U;
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BRESP = 0U;
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RRESP = 0U;
    }
    if (__Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory[__Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0] 
            = __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__memory__v0;
    }
    if (vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) {
        if ((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BRESP = 0U;
            __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__wdata_q;
            __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 = 1U;
            __Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0 
                = (7U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__awaddr_q 
                         >> 2U));
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RDATA 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs
                [(7U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__araddr_q 
                        >> 2U))];
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RRESP = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID = 0U;
        }
    } else {
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BRESP = 0U;
        __Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v1 = 1U;
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RRESP = 0U;
    }
    if (__Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[__Vdlyvdim0__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0] 
            = __Vdlyvval__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v0;
    }
    if (__Vdlyvset__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs__v1) {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[0U] = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[1U] = 1U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[2U] = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[3U] = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[4U] = 0x10U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[5U] = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[6U] = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__regs[7U] = 0U;
    }
    if (vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) {
        if (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RDATA 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__uart_reg;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RRESP = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID = 0U;
        }
        if ((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BRESP = 2U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RDATA = 0U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RRESP = 2U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID = 0U;
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID) 
                      & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY))))) {
            if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
                 & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot 
                    = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot;
            }
        }
    } else {
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RRESP = 0U;
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BRESP = 0U;
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RRESP = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot = 0U;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP 
        = (((((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RRESP)
               : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                         ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RRESP)
                         : 0U)) | ((4U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                    ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RRESP)
                                    : 0U)) | ((8U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RRESP)
                                               : 0U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA 
        = (((((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
               ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RDATA
               : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                         ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RDATA
                         : 0U)) | ((4U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                    ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RDATA
                                    : 0U)) | ((8U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot))
                                               ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RDATA
                                               : 0U));
    if (vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID) 
                      & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY))))) {
            if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
                 & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot 
                    = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot;
            }
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy = 1U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy = 1U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__wdata_q 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__awaddr_q 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__araddr_q 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__wdata_q 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__awaddr_q 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__araddr_q 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done = 0U;
        }
        if ((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID)))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BRESP = 0U;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__uart_reg 
                = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY))) {
            TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done = 0U;
        }
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID 
            = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID;
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done = 0U;
        }
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__wdata_q = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__awaddr_q = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__araddr_q = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__wdata_q = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__awaddr_q = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__araddr_q = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done = 0U;
        TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BRESP = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__uart_reg = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done = 0U;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID 
            = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__BVALID;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done = 0U;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__mem_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID))));
    if (vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n) {
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY))) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done = 0U;
        }
    } else {
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done = 0U;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__reg_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP 
        = (((((1U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BRESP)
               : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
                         ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BRESP)
                         : 0U)) | ((4U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
                                    ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BRESP)
                                    : 0U)) | ((8U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot))
                                               ? (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BRESP)
                                               : 0U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__err_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID 
        = TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__DOT____Vdly__BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID))));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__uart_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID))));
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb___024root___nba_comb__TOP__0(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*1:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant = 0;
    CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 0;
    CData/*2:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 0;
    CData/*3:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot = 0;
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb = 0U;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__priority_idx;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = (1U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                         + axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i));
            if ((1U & ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID) 
                         << 1U) | (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID)) 
                       >> (1U & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb 
                    = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel20;
            }
            axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel20: ;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb = 0U;
    axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 2U, axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i)) {
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__priority_idx;
            vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
                = (1U & (vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__current_pri 
                         + axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i));
            if ((1U & ((((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID) 
                         << 1U) | (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID)) 
                       >> (1U & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
                vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb 
                    = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb) 
                       | (3U & ((IData)(1U) << (1U 
                                                & vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
                goto __Vlabel21;
            }
            axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel21: ;
    }
    axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_r_grant)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__active_w_grant)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY)) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID)) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR 
        = ((2U & (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant))
            ? vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR
            : vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR);
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID 
        = ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID));
    if ((2U & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant))) {
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR;
    } else {
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA;
        vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR 
            = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID)) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
               >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR)) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel = 4U;
    }
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR)) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR))) {
        axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel = 4U;
    }
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot 
        = ((1U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_slave_sel))
                              ? 8U : 1U)));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot 
        = ((1U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_slave_sel))
                              ? 8U : 1U)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY)));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              >> 3U));
    axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_pending)
            ? (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot)
            : (IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY 
        = (((((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY)) 
             | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY))) 
            | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY))) 
           | (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY)));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_update_en 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY 
        = ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY 
        = (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__r_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & (IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID) 
           & ((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY 
        = (((((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY)) 
             | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY))) 
            | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY))) 
           | (((IData)(axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__w_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY)));
    vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_update_en 
        = ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY 
        = ((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
           & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY 
        = (((IData)(vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
            >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY));
}

void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf);

void Vaxi_crossbar_2m3s_tb___024root___eval_nba(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__0((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err));
        Vaxi_crossbar_2m3s_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1));
        Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1((&vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux));
        Vaxi_crossbar_2m3s_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_2m3s_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_2m3s_tb___024root___dump_triggers__nba(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
#endif  // VL_DEBUG
bool Vaxi_crossbar_2m3s_tb___024root___eval_phase__act(Vaxi_crossbar_2m3s_tb___024root* vlSelf);
bool Vaxi_crossbar_2m3s_tb___024root___eval_phase__nba(Vaxi_crossbar_2m3s_tb___024root* vlSelf);

void Vaxi_crossbar_2m3s_tb___024root___eval(Vaxi_crossbar_2m3s_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_2m3s_tb___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__rst_n;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__ar_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__aw_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__ar_arbiter__DOT__grant_comb;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__aw_arbiter__DOT__grant_comb;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__r_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__b_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__r_busy;
    vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_busy;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWADDR 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWADDR;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARADDR 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARADDR;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WSTRB 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.WSTRB;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.RREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant 
        = vlSelf->axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWADDR 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWADDR;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARADDR 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARADDR;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WSTRB 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.WSTRB;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.RREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.WSTRB;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARADDR;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWADDR;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.RREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.WREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.RREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.WREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.RREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.WREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.RREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RVALID 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RVALID;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RDATA 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RDATA;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RRESP 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RRESP;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.WREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.ARREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.AWREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.BREADY;
    vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RREADY 
        = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.RREADY;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vaxi_crossbar_2m3s_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/integration/axi_crossbar_2m3s_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vaxi_crossbar_2m3s_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/integration/axi_crossbar_2m3s_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vaxi_crossbar_2m3s_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vaxi_crossbar_2m3s_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}
