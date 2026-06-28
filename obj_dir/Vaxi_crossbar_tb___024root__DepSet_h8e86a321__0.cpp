// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_tb.h for the primary calling header

#include "Vaxi_crossbar_tb__pch.h"
#include "Vaxi_crossbar_tb__Syms.h"
#include "Vaxi_crossbar_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vaxi_crossbar_tb___024root___eval_initial__TOP__Vtiming__0(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ axi_crossbar_tb__DOT__rdata;
    axi_crossbar_tb__DOT__rdata = 0;
    CData/*1:0*/ axi_crossbar_tb__DOT__resp;
    axi_crossbar_tb__DOT__resp = 0;
    IData/*31:0*/ axi_crossbar_tb__DOT__i;
    axi_crossbar_tb__DOT__i = 0;
    IData/*31:0*/ axi_crossbar_tb__DOT__uart_ref;
    axi_crossbar_tb__DOT__uart_ref = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__data;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__0__b_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__1__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__1__data;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__1__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_done;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__1__r_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__data;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__2__b_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__3__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__3__data;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__3__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_done;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__3__r_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__4__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__4__data;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__4__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_done;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__4__r_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__data;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__5__b_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__6__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__6__data;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__6__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_done;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__6__r_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__data;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__7__b_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__8__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__8__data;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__8__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_done;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__8__r_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__r_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__data;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_done;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_write__9__b_match;
    __Vtask_axi_crossbar_tb__DOT__axi_write__9__b_match = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__10__addr;
    __Vtask_axi_crossbar_tb__DOT__axi_read__10__addr = 0;
    IData/*31:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__10__data;
    __Vtask_axi_crossbar_tb__DOT__axi_read__10__data = 0;
    CData/*1:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__10__resp;
    __Vtask_axi_crossbar_tb__DOT__axi_read__10__resp = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_done;
    __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_done = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_match = 0;
    CData/*0:0*/ __Vtask_axi_crossbar_tb__DOT__axi_read__10__r_match;
    __Vtask_axi_crossbar_tb__DOT__axi_read__10__r_match = 0;
    // Body
    VL_WRITEF("Starting Crossbar Tests...\n\n");
    vlSelf->axi_crossbar_tb__DOT__rst_n = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       129);
    vlSelf->axi_crossbar_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       131);
    axi_crossbar_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, axi_crossbar_tb__DOT__i)) {
        vlSelf->axi_crossbar_tb__DOT__mem_ref[(0xffU 
                                               & axi_crossbar_tb__DOT__i)] = 0U;
        axi_crossbar_tb__DOT__i = ((IData)(1U) + axi_crossbar_tb__DOT__i);
    }
    vlSelf->axi_crossbar_tb__DOT__reg_ref[0U] = 0U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[1U] = 1U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[2U] = 0U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[3U] = 0U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[4U] = 0x10U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[5U] = 0U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[6U] = 0U;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[7U] = 0U;
    axi_crossbar_tb__DOT__uart_ref = 0U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__data = 0x11223344U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__addr = 0x100U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_done = 0U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       30);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       31);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_write__0__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA = __Vtask_axi_crossbar_tb__DOT__axi_write__0__data;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 1U;
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__0__w_done))))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           42);
        __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY));
        __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
               & (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                     & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY)) 
                    | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                        >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY))) 
                   | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                       >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY))) 
                  | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                      >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY))));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           45);
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__0__aw_done = 1U;
        }
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__0__w_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__0__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_tb__DOT__axi_write__0__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__0__b_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_write__0__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__0__b_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 0U;
                goto __Vlabel1;
            }
        }
        __Vlabel1: ;
    }
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_write__0__resp;
    vlSelf->axi_crossbar_tb__DOT__mem_ref[0x40U] = 0x11223344U;
    if (VL_UNLIKELY((0U != (IData)(axi_crossbar_tb__DOT__resp)))) {
        VL_WRITEF("FAIL: Mem Write Resp %b\n",2,axi_crossbar_tb__DOT__resp);
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    }
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__addr = 0x100U;
    __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       77);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       78);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_read__1__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 1U;
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_done)))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           84);
        __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           86);
        if (__Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_read__1__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               94);
            __Vtask_axi_crossbar_tb__DOT__axi_read__1__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__1__r_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_read__1__data 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA
                           : 0U));
                __Vtask_axi_crossbar_tb__DOT__axi_read__1__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               100);
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__1__r_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
                goto __Vlabel2;
            }
        }
        __Vlabel2: ;
    }
    axi_crossbar_tb__DOT__rdata = __Vtask_axi_crossbar_tb__DOT__axi_read__1__data;
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_read__1__resp;
    if (((0x11223344U != axi_crossbar_tb__DOT__rdata) 
         | (0U != (IData)(axi_crossbar_tb__DOT__resp)))) {
        VL_WRITEF("FAIL: Mem Read (Expected 11223344 OK, Got %x %b)\n",
                  32,axi_crossbar_tb__DOT__rdata,2,
                  (IData)(axi_crossbar_tb__DOT__resp));
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: Memory Routing\n");
    }
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__data = 0xaabbccddU;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__addr = 0x101cU;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_done = 0U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       30);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       31);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_write__2__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA = __Vtask_axi_crossbar_tb__DOT__axi_write__2__data;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 1U;
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__2__w_done))))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           42);
        __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY));
        __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
               & (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                     & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY)) 
                    | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                        >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY))) 
                   | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                       >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY))) 
                  | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                      >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY))));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           45);
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__2__aw_done = 1U;
        }
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__2__w_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__2__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_tb__DOT__axi_write__2__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__2__b_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_write__2__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__2__b_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 0U;
                goto __Vlabel3;
            }
        }
        __Vlabel3: ;
    }
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_write__2__resp;
    vlSelf->axi_crossbar_tb__DOT__reg_ref[7U] = 0xaabbccddU;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__addr = 0x101cU;
    __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       77);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       78);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_read__3__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 1U;
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_done)))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           84);
        __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           86);
        if (__Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_read__3__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               94);
            __Vtask_axi_crossbar_tb__DOT__axi_read__3__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__3__r_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_read__3__data 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA
                           : 0U));
                __Vtask_axi_crossbar_tb__DOT__axi_read__3__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               100);
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__3__r_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
                goto __Vlabel4;
            }
        }
        __Vlabel4: ;
    }
    axi_crossbar_tb__DOT__rdata = __Vtask_axi_crossbar_tb__DOT__axi_read__3__data;
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_read__3__resp;
    if (((0xaabbccddU != axi_crossbar_tb__DOT__rdata) 
         | (0U != (IData)(axi_crossbar_tb__DOT__resp)))) {
        VL_WRITEF("FAIL: Reg Read (Expected AABBCCDD OK, Got %x %b)\n",
                  32,axi_crossbar_tb__DOT__rdata,2,
                  (IData)(axi_crossbar_tb__DOT__resp));
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: Register Routing\n");
    }
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__addr = 0x1cU;
    __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       77);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       78);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_read__4__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 1U;
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_done)))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           84);
        __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           86);
        if (__Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_read__4__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               94);
            __Vtask_axi_crossbar_tb__DOT__axi_read__4__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__4__r_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_read__4__data 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA
                           : 0U));
                __Vtask_axi_crossbar_tb__DOT__axi_read__4__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               100);
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__4__r_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
                goto __Vlabel5;
            }
        }
        __Vlabel5: ;
    }
    axi_crossbar_tb__DOT__rdata = __Vtask_axi_crossbar_tb__DOT__axi_read__4__data;
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_read__4__resp;
    if (VL_UNLIKELY((0U != axi_crossbar_tb__DOT__rdata))) {
        VL_WRITEF("FAIL: Reg write leaked to Mem\n");
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    }
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__data = 0xdeadc0deU;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__addr = 0x2004U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_done = 0U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       30);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       31);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_write__5__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA = __Vtask_axi_crossbar_tb__DOT__axi_write__5__data;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 1U;
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__5__w_done))))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           42);
        __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY));
        __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
               & (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                     & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY)) 
                    | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                        >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY))) 
                   | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                       >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY))) 
                  | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                      >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY))));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           45);
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__5__aw_done = 1U;
        }
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__5__w_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__5__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_tb__DOT__axi_write__5__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__5__b_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_write__5__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__5__b_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 0U;
                goto __Vlabel6;
            }
        }
        __Vlabel6: ;
    }
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_write__5__resp;
    axi_crossbar_tb__DOT__uart_ref = 0xdeadc0deU;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__addr = 0x2004U;
    __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       77);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       78);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_read__6__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 1U;
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_done)))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           84);
        __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           86);
        if (__Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_read__6__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               94);
            __Vtask_axi_crossbar_tb__DOT__axi_read__6__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__6__r_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_read__6__data 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA
                           : 0U));
                __Vtask_axi_crossbar_tb__DOT__axi_read__6__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               100);
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__6__r_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
                goto __Vlabel7;
            }
        }
        __Vlabel7: ;
    }
    axi_crossbar_tb__DOT__rdata = __Vtask_axi_crossbar_tb__DOT__axi_read__6__data;
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_read__6__resp;
    if (((0xdeadc0deU != axi_crossbar_tb__DOT__rdata) 
         | (0U != (IData)(axi_crossbar_tb__DOT__resp)))) {
        VL_WRITEF("FAIL: UART Read (Expected DEADC0DE OK, Got %x %b)\n",
                  32,axi_crossbar_tb__DOT__rdata,2,
                  (IData)(axi_crossbar_tb__DOT__resp));
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: UART Routing\n");
    }
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__data = 0xffffffffU;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__addr = 0x3000U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_done = 0U;
    __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       30);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       31);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_write__7__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA = __Vtask_axi_crossbar_tb__DOT__axi_write__7__data;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB = 0xfU;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 1U;
    while ((1U & ((~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_done)) 
                  | (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__7__w_done))))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           42);
        __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY));
        __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
               & (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                     & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY)) 
                    | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                        >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY))) 
                   | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                       >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY))) 
                  | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                      >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY))));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           45);
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__7__aw_done = 1U;
        }
        if (__Vtask_axi_crossbar_tb__DOT__axi_write__7__w_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_write__7__w_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               57);
            __Vtask_axi_crossbar_tb__DOT__axi_write__7__b_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__7__b_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_write__7__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               60);
            if (__Vtask_axi_crossbar_tb__DOT__axi_write__7__b_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 0U;
                goto __Vlabel8;
            }
        }
        __Vlabel8: ;
    }
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_write__7__resp;
    if (VL_UNLIKELY((2U != (IData)(axi_crossbar_tb__DOT__resp)))) {
        VL_WRITEF("FAIL: Illegal Write (Expected SLVERR, Got %b)\n",
                  2,axi_crossbar_tb__DOT__resp);
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    }
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__addr = 0xf000U;
    __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_done = 0U;
    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       77);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/integration/axi_crossbar_tb.sv", 
                                       78);
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR 
        = __Vtask_axi_crossbar_tb__DOT__axi_read__8__addr;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 1U;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 1U;
    while ((1U & (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_done)))) {
        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           84);
        __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_match 
            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY));
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb/integration/axi_crossbar_tb.sv", 
                                           86);
        if (__Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_match) {
            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
            __Vtask_axi_crossbar_tb__DOT__axi_read__8__ar_done = 1U;
        }
    }
    {
        while (1U) {
            co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge axi_crossbar_tb.clk)", 
                                                               "tb/integration/axi_crossbar_tb.sv", 
                                                               94);
            __Vtask_axi_crossbar_tb__DOT__axi_read__8__r_match 
                = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                   & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY));
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__8__r_match) {
                __Vtask_axi_crossbar_tb__DOT__axi_read__8__data 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA
                           : 0U));
                __Vtask_axi_crossbar_tb__DOT__axi_read__8__resp 
                    = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP)
                           : 0U) | ((2U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                     ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP)
                                                : 0U)) 
                       | ((8U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                           ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP)
                           : 0U));
            }
            co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                               nullptr, 
                                               "tb/integration/axi_crossbar_tb.sv", 
                                               100);
            if (__Vtask_axi_crossbar_tb__DOT__axi_read__8__r_match) {
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
                goto __Vlabel9;
            }
        }
        __Vlabel9: ;
    }
    axi_crossbar_tb__DOT__rdata = __Vtask_axi_crossbar_tb__DOT__axi_read__8__data;
    axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_read__8__resp;
    if ((2U != (IData)(axi_crossbar_tb__DOT__resp))) {
        VL_WRITEF("FAIL: Illegal Read (Expected SLVERR, Got %b)\n",
                  2,axi_crossbar_tb__DOT__resp);
        vlSelf->axi_crossbar_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelf->axi_crossbar_tb__DOT__errors);
    } else {
        VL_WRITEF("PASS: Invalid Address\n");
    }
    axi_crossbar_tb__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x3e8U, axi_crossbar_tb__DOT__i)) {
            vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target 
                = VL_URANDOM_RANGE_I(0U, 3U);
            vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__write 
                = (0U != VL_URANDOM_RANGE_I(0U, 1U));
            vlSelf->axi_crossbar_tb__DOT__rand_data 
                = VL_RANDOM_I();
            if ((0U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                vlSelf->axi_crossbar_tb__DOT__rand_addr 
                    = VL_SHIFTL_III(32,32,32, (IData)(
                                                      VL_URANDOM_RANGE_I(0U, 0xffU)), 2U);
            } else if ((1U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                vlSelf->axi_crossbar_tb__DOT__rand_addr 
                    = ((IData)(0x1000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                                VL_URANDOM_RANGE_I(0U, 7U)), 2U)));
            } else if ((2U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                vlSelf->axi_crossbar_tb__DOT__rand_addr 
                    = ((IData)(0x2000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                                VL_URANDOM_RANGE_I(0U, 0xfU)), 2U)));
            } else if ((3U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                vlSelf->axi_crossbar_tb__DOT__rand_addr 
                    = ((IData)(0x5000U) + (IData)(VL_SHIFTL_III(32,32,32, (IData)(
                                                                                VL_URANDOM_RANGE_I(0U, 0x64U)), 2U)));
            } else {
                vlSelf->axi_crossbar_tb__DOT__rand_addr = 0U;
            }
            if (vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__write) {
                __Vtask_axi_crossbar_tb__DOT__axi_write__9__data 
                    = vlSelf->axi_crossbar_tb__DOT__rand_data;
                __Vtask_axi_crossbar_tb__DOT__axi_write__9__addr 
                    = vlSelf->axi_crossbar_tb__DOT__rand_addr;
                __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_done = 0U;
                __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_done = 0U;
                co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge axi_crossbar_tb.clk)", 
                                                                   "tb/integration/axi_crossbar_tb.sv", 
                                                                   30);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "tb/integration/axi_crossbar_tb.sv", 
                                                   31);
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR 
                    = __Vtask_axi_crossbar_tb__DOT__axi_write__9__addr;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 1U;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA 
                    = __Vtask_axi_crossbar_tb__DOT__axi_write__9__data;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB = 0xfU;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 1U;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 1U;
                while ((1U & ((~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_done)) 
                              | (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_write__9__w_done))))) {
                    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                                       42);
                    __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
                           & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY));
                    __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
                           & (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                                 & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY)) 
                                | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                                    >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY))) 
                               | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                                   >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY))) 
                              | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
                                  >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY))));
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       45);
                    if (__Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_match) {
                        vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID = 0U;
                        __Vtask_axi_crossbar_tb__DOT__axi_write__9__aw_done = 1U;
                    }
                    if (__Vtask_axi_crossbar_tb__DOT__axi_write__9__w_match) {
                        vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID = 0U;
                        __Vtask_axi_crossbar_tb__DOT__axi_write__9__w_done = 1U;
                    }
                }
                {
                    while (1U) {
                        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                                           57);
                        __Vtask_axi_crossbar_tb__DOT__axi_write__9__b_match 
                            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY));
                        if (__Vtask_axi_crossbar_tb__DOT__axi_write__9__b_match) {
                            __Vtask_axi_crossbar_tb__DOT__axi_write__9__resp 
                                = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                       ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP)
                                       : 0U) | ((2U 
                                                 & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                                 ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP)
                                                 : 0U)) 
                                    | ((4U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                        ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot))
                                                   ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP)
                                                   : 0U));
                        }
                        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                           nullptr, 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           60);
                        if (__Vtask_axi_crossbar_tb__DOT__axi_write__9__b_match) {
                            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY = 0U;
                            goto __Vlabel11;
                        }
                    }
                    __Vlabel11: ;
                }
                axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_write__9__resp;
                if (VL_UNLIKELY(((3U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                 & (2U != (IData)(axi_crossbar_tb__DOT__resp))))) {
                    VL_WRITEF("FAIL WRITE T3: Expected SLVERR, Got %b\n",
                              2,axi_crossbar_tb__DOT__resp);
                    vlSelf->axi_crossbar_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                } else if (VL_UNLIKELY(((3U != vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                        & (0U != (IData)(axi_crossbar_tb__DOT__resp))))) {
                    VL_WRITEF("FAIL WRITE T%0#: Expected OKAY, Got %b\n",
                              32,vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target,
                              2,(IData)(axi_crossbar_tb__DOT__resp));
                    vlSelf->axi_crossbar_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                }
                if ((0U == (IData)(axi_crossbar_tb__DOT__resp))) {
                    if ((0U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                        vlSelf->axi_crossbar_tb__DOT__mem_ref[(0xffU 
                                                               & (vlSelf->axi_crossbar_tb__DOT__rand_addr 
                                                                  >> 2U))] 
                            = vlSelf->axi_crossbar_tb__DOT__rand_data;
                    }
                    if ((1U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                        vlSelf->axi_crossbar_tb__DOT__reg_ref[(7U 
                                                               & ((vlSelf->axi_crossbar_tb__DOT__rand_addr 
                                                                   - (IData)(0x1000U)) 
                                                                  >> 2U))] 
                            = vlSelf->axi_crossbar_tb__DOT__rand_data;
                    }
                    if ((2U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target)) {
                        axi_crossbar_tb__DOT__uart_ref 
                            = vlSelf->axi_crossbar_tb__DOT__rand_data;
                    }
                }
            } else {
                __Vtask_axi_crossbar_tb__DOT__axi_read__10__addr 
                    = vlSelf->axi_crossbar_tb__DOT__rand_addr;
                __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_done = 0U;
                co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge axi_crossbar_tb.clk)", 
                                                                   "tb/integration/axi_crossbar_tb.sv", 
                                                                   77);
                co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                   nullptr, 
                                                   "tb/integration/axi_crossbar_tb.sv", 
                                                   78);
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR 
                    = __Vtask_axi_crossbar_tb__DOT__axi_read__10__addr;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 1U;
                vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 1U;
                while ((1U & (~ (IData)(__Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_done)))) {
                    co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge axi_crossbar_tb.clk)", 
                                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                                       84);
                    __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_match 
                        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
                           & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY));
                    co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                       nullptr, 
                                                       "tb/integration/axi_crossbar_tb.sv", 
                                                       86);
                    if (__Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_match) {
                        vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID = 0U;
                        __Vtask_axi_crossbar_tb__DOT__axi_read__10__ar_done = 1U;
                    }
                }
                {
                    while (1U) {
                        co_await vlSelf->__VtrigSched_heeb7a2b0__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge axi_crossbar_tb.clk)", 
                                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                                           94);
                        __Vtask_axi_crossbar_tb__DOT__axi_read__10__r_match 
                            = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                               & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY));
                        if (__Vtask_axi_crossbar_tb__DOT__axi_read__10__r_match) {
                            __Vtask_axi_crossbar_tb__DOT__axi_read__10__data 
                                = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                       ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA
                                       : 0U) | ((2U 
                                                 & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                 ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA
                                                 : 0U)) 
                                    | ((4U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                        ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                   ? vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA
                                                   : 0U));
                            __Vtask_axi_crossbar_tb__DOT__axi_read__10__resp 
                                = (((((1U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                       ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP)
                                       : 0U) | ((2U 
                                                 & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                 ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP)
                                                 : 0U)) 
                                    | ((4U & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                        ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP)
                                        : 0U)) | ((8U 
                                                   & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot))
                                                   ? (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP)
                                                   : 0U));
                        }
                        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                                           nullptr, 
                                                           "tb/integration/axi_crossbar_tb.sv", 
                                                           100);
                        if (__Vtask_axi_crossbar_tb__DOT__axi_read__10__r_match) {
                            vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY = 0U;
                            goto __Vlabel12;
                        }
                    }
                    __Vlabel12: ;
                }
                axi_crossbar_tb__DOT__rdata = __Vtask_axi_crossbar_tb__DOT__axi_read__10__data;
                axi_crossbar_tb__DOT__resp = __Vtask_axi_crossbar_tb__DOT__axi_read__10__resp;
                if (VL_UNLIKELY(((3U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                 & (2U != (IData)(axi_crossbar_tb__DOT__resp))))) {
                    VL_WRITEF("FAIL READ T3: Expected SLVERR, Got %b\n",
                              2,axi_crossbar_tb__DOT__resp);
                    vlSelf->axi_crossbar_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                } else if (VL_UNLIKELY(((3U != vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                        & (0U != (IData)(axi_crossbar_tb__DOT__resp))))) {
                    VL_WRITEF("FAIL READ T%0#: Expected OKAY, Got %b\n",
                              32,vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target,
                              2,(IData)(axi_crossbar_tb__DOT__resp));
                    vlSelf->axi_crossbar_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                }
                if ((0U == (IData)(axi_crossbar_tb__DOT__resp))) {
                    if (VL_UNLIKELY(((0U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                     & (axi_crossbar_tb__DOT__rdata 
                                        != vlSelf->axi_crossbar_tb__DOT__mem_ref
                                        [(0xffU & (vlSelf->axi_crossbar_tb__DOT__rand_addr 
                                                   >> 2U))])))) {
                        VL_WRITEF("FAIL Mem Mismatch at %x: Exp %x, Got %x\n",
                                  32,vlSelf->axi_crossbar_tb__DOT__rand_addr,
                                  32,vlSelf->axi_crossbar_tb__DOT__mem_ref
                                  [(0xffU & (vlSelf->axi_crossbar_tb__DOT__rand_addr 
                                             >> 2U))],
                                  32,axi_crossbar_tb__DOT__rdata);
                        vlSelf->axi_crossbar_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                    }
                    if (VL_UNLIKELY(((1U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                     & (axi_crossbar_tb__DOT__rdata 
                                        != vlSelf->axi_crossbar_tb__DOT__reg_ref
                                        [(7U & ((vlSelf->axi_crossbar_tb__DOT__rand_addr 
                                                 - (IData)(0x1000U)) 
                                                >> 2U))])))) {
                        VL_WRITEF("FAIL Reg Mismatch at %x: Exp %x, Got %x\n",
                                  32,vlSelf->axi_crossbar_tb__DOT__rand_addr,
                                  32,vlSelf->axi_crossbar_tb__DOT__reg_ref
                                  [(7U & ((vlSelf->axi_crossbar_tb__DOT__rand_addr 
                                           - (IData)(0x1000U)) 
                                          >> 2U))],
                                  32,axi_crossbar_tb__DOT__rdata);
                        vlSelf->axi_crossbar_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                    }
                    if (VL_UNLIKELY(((2U == vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target) 
                                     & (axi_crossbar_tb__DOT__rdata 
                                        != axi_crossbar_tb__DOT__uart_ref)))) {
                        VL_WRITEF("FAIL UART Mismatch at %x: Exp %x, Got %x\n",
                                  32,vlSelf->axi_crossbar_tb__DOT__rand_addr,
                                  32,axi_crossbar_tb__DOT__uart_ref,
                                  32,axi_crossbar_tb__DOT__rdata);
                        vlSelf->axi_crossbar_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->axi_crossbar_tb__DOT__errors);
                    }
                }
            }
            if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelf->axi_crossbar_tb__DOT__errors) 
                             & VL_GTS_III(32, 0xaU, axi_crossbar_tb__DOT__i)))) {
                VL_WRITEF("Random failure at cycle %11d, addr %x, target %10#\n",
                          32,axi_crossbar_tb__DOT__i,
                          32,vlSelf->axi_crossbar_tb__DOT__rand_addr,
                          32,vlSelf->axi_crossbar_tb__DOT__unnamedblk1__DOT__target);
                goto __Vlabel10;
            }
            axi_crossbar_tb__DOT__i = ((IData)(1U) 
                                       + axi_crossbar_tb__DOT__i);
        }
        __Vlabel10: ;
    }
    if (VL_UNLIKELY((0U == vlSelf->axi_crossbar_tb__DOT__errors))) {
        VL_WRITEF("PASS: Random Regression (1000)\n");
    }
    VL_WRITEF("\n-----------------------------\n");
    if ((0U == vlSelf->axi_crossbar_tb__DOT__errors)) {
        VL_WRITEF("ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("SOME TESTS FAILED: %11d errors\n",
                  32,vlSelf->axi_crossbar_tb__DOT__errors);
    }
    VL_WRITEF("-----------------------------\n");
    VL_FINISH_MT("tb/integration/axi_crossbar_tb.sv", 236, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_tb___024root___dump_triggers__act(Vaxi_crossbar_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxi_crossbar_tb___024root___eval_triggers__act(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->axi_crossbar_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->axi_crossbar_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__clk__0 
        = vlSelf->axi_crossbar_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__axi_crossbar_tb__DOT__rst_n__0 
        = vlSelf->axi_crossbar_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxi_crossbar_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vaxi_crossbar_tb___024root___act_comb__TOP__0(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel;
    axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 0;
    CData/*2:0*/ axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel;
    axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 0;
    // Body
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 3U));
    axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR)) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 4U;
    }
    axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR)) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 4U;
    }
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot 
        = ((1U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
                              ? 8U : 1U)));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot 
        = ((1U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
                              ? 8U : 1U)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY)));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot 
        = ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending)
            ? (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot)
            : (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 3U));
}

VL_INLINE_OPT void Vaxi_crossbar_tb___024root___nba_sequent__TOP__0(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__ar_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:184: Assertion failed in %Naxi_crossbar_tb.dut: Crossbar: Multiple read slaves targeted simultaneously\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 184, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__aw_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:181: Assertion failed in %Naxi_crossbar_tb.dut: Crossbar: Multiple write slaves targeted simultaneously\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 181, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__r_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:190: Assertion failed in %Naxi_crossbar_tb.dut: Crossbar: Multiple read response slaves tracked\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 190, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__rst_n)) 
                                | VL_ONEHOT0_I((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__b_target_hot))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi_crossbar_1m3s.sv:187: Assertion failed in %Naxi_crossbar_tb.dut: Crossbar: Multiple write response slaves tracked\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interconnect/axi_crossbar_1m3s.sv", 187, "");
            }
        }
    }
}

VL_INLINE_OPT void Vaxi_crossbar_tb___024root___nba_sequent__TOP__1(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0;
    __Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0;
    __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0;
    __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0;
    __Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0;
    __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0;
    __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v1;
    __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v1 = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID = 0;
    CData/*0:0*/ TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID = 0;
    // Body
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID;
    __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 = 0U;
    __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 = 0U;
    __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v1 = 0U;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID;
    TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID;
    if (vlSelf->axi_crossbar_tb__DOT__rst_n) {
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_pending = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_pending = 1U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending = 1U;
        }
        if ((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP = 0U;
            __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 
                = vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__wdata_q;
            __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 = 1U;
            __Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0 
                = (0xffU & (vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__awaddr_q 
                            >> 2U));
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA 
                = vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory
                [(0xffU & (vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__araddr_q 
                           >> 2U))];
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID = 0U;
        }
    } else {
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_pending = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending = 0U;
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP = 0U;
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP = 0U;
    }
    if (__Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0) {
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory[__Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0] 
            = __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__memory__v0;
    }
    if (vlSelf->axi_crossbar_tb__DOT__rst_n) {
        if ((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP = 0U;
            __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 
                = vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__wdata_q;
            __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 = 1U;
            __Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0 
                = (7U & (vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__awaddr_q 
                         >> 2U));
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA 
                = vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs
                [(7U & (vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__araddr_q 
                        >> 2U))];
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID = 0U;
        }
    } else {
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP = 0U;
        __Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v1 = 1U;
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP = 0U;
    }
    if (__Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0) {
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[__Vdlyvdim0__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0] 
            = __Vdlyvval__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v0;
    }
    if (__Vdlyvset__axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs__v1) {
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[0U] = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[1U] = 1U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[2U] = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[3U] = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[4U] = 0x10U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[5U] = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[6U] = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__regs[7U] = 0U;
    }
    if (vlSelf->axi_crossbar_tb__DOT__rst_n) {
        if (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA 
                = vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__uart_reg;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP = 0U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID = 0U;
        }
        if ((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP = 2U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA = 0U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP = 2U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID = 0U;
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID) 
                      & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY))))) {
            if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID) 
                 & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY))) {
                vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot 
                    = vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot;
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID) 
                      & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY))))) {
            if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID) 
                 & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY))) {
                vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot 
                    = vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot;
            }
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__wdata_q 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__awaddr_q 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__araddr_q 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__wdata_q 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__awaddr_q 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__araddr_q 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done = 0U;
        }
        if ((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done) 
              & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done)) 
             & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID)))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID = 1U;
            vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP = 0U;
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__uart_reg 
                = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY))) {
            TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done = 0U;
        }
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID 
            = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID;
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done = 0U;
        }
    } else {
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP = 0U;
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP = 0U;
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__wdata_q = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__awaddr_q = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__araddr_q = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__wdata_q = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__awaddr_q = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__araddr_q = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done = 0U;
        TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__uart_reg = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done = 0U;
        vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID 
            = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__BVALID;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done = 0U;
    }
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__DOT____Vdly__RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__mem_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID))));
    if (vlSelf->axi_crossbar_tb__DOT__rst_n) {
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done = 0U;
        }
        if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWVALID) 
             & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done = 1U;
        } else if (((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID) 
                    & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY))) {
            vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done = 0U;
        }
    } else {
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done = 0U;
        vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done = 0U;
    }
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__reg_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__err_slave__DOT__ar_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID 
        = TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__DOT____Vdly__BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__w_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID))));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY 
        = (1U & ((~ (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__uart_slave__DOT__aw_done)) 
                 & (~ (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID))));
}

VL_INLINE_OPT void Vaxi_crossbar_tb___024root___nba_comb__TOP__0(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel;
    axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 0;
    CData/*2:0*/ axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel;
    axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 0;
    // Body
    axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR)) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel = 4U;
    }
    axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 0U;
    if ((0x1000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR)) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 1U;
    } else if (((0x1000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR) 
                & (0x2000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 2U;
    } else if (((0x2000U <= vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR) 
                & (0x3000U > vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR))) {
        axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel = 4U;
    }
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot 
        = ((1U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_tb__DOT__dut__DOT__ar_slave_sel))
                              ? 8U : 1U)));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot 
        = ((1U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
            ? 2U : ((2U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
                     ? 4U : ((4U == (IData)(axi_crossbar_tb__DOT__dut__DOT__aw_slave_sel))
                              ? 8U : 1U)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWVALID 
        = (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_allow) 
            & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID)) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              >> 3U));
}

VL_INLINE_OPT void Vaxi_crossbar_tb___024root___nba_comb__TOP__1(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot) 
              >> 3U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY)));
    vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot 
        = ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_pending)
            ? (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot)
            : (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY 
        = (((((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
              & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY)) 
             | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
                 >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY))) 
            | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
                >> 2U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY))) 
           | (((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot) 
               >> 3U) & (IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY)));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & (IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 1U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 2U));
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WVALID 
        = ((IData)(vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID) 
           & ((IData)(vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot) 
              >> 3U));
}

void Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__0(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__0(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__0(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__0(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__0(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);
void Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__1(Vaxi_crossbar_tb_axi4_lite_if* vlSelf);

void Vaxi_crossbar_tb___024root___eval_nba(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__0((&vlSymsp->TOP__axi_crossbar_tb__DOT__axi));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__0((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__0((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__0((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__0((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err));
        Vaxi_crossbar_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__1((&vlSymsp->TOP__axi_crossbar_tb__DOT__axi));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__1((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__1((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__1((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0));
        Vaxi_crossbar_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_tb__DOT__axi__1((&vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1));
        Vaxi_crossbar_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vaxi_crossbar_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi_crossbar_tb___024root___dump_triggers__nba(Vaxi_crossbar_tb___024root* vlSelf);
#endif  // VL_DEBUG
bool Vaxi_crossbar_tb___024root___eval_phase__act(Vaxi_crossbar_tb___024root* vlSelf);
bool Vaxi_crossbar_tb___024root___eval_phase__nba(Vaxi_crossbar_tb___024root* vlSelf);

void Vaxi_crossbar_tb___024root___eval(Vaxi_crossbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi_crossbar_tb___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__rst_n 
        = vlSelf->axi_crossbar_tb__DOT__rst_n;
    vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__ar_target_hot 
        = vlSelf->axi_crossbar_tb__DOT__dut__DOT__ar_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__aw_target_hot 
        = vlSelf->axi_crossbar_tb__DOT__dut__DOT__aw_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__r_target_hot 
        = vlSelf->axi_crossbar_tb__DOT__dut__DOT__r_target_hot;
    vlSelf->__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__b_target_hot 
        = vlSelf->axi_crossbar_tb__DOT__dut__DOT__b_target_hot;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__AWVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__AWADDR 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWADDR;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__ARVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__ARADDR 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARADDR;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__WVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__WDATA 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WDATA;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__WSTRB 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.WSTRB;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__BRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__BRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__BRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__BRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__RDATA 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RDATA;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__RDATA 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RDATA;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__RDATA 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RDATA;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__RDATA 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RDATA;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__RRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__RRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__RRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__RRESP 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RRESP;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__AWREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.AWREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__ARREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.ARREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__w_target_hot 
        = vlSelf->axi_crossbar_tb__DOT__dut__DOT__w_target_hot;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__WREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__WREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__WREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__WREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__BREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.BREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__axi.__Vsampled__TOP__axi_crossbar_tb__DOT__axi__RREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__axi.RREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__AWVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__ARVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__WVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.WVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__AWREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.AWREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__ARREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.ARREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__BREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.BREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0__RREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0.RREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__AWVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__ARVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__WVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.WVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__AWREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.AWREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__ARREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.ARREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__BREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.BREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1__RREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1.RREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__AWVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__ARVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__WVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.WVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__AWREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.AWREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__ARREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.ARREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__BREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.BREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2__RREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2.RREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err____PVT__outstanding_writes 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__PVT__outstanding_writes;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err____PVT__outstanding_reads 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__PVT__outstanding_reads;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_0_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_0_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_1_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_1_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__AWVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_2_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_2_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_10_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_10_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_11_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_11_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__ARVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_12_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_12_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_3_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_3_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_4_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_4_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__WVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.WVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_5_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_5_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_6_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_6_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_7_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_7_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_8_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_8_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__BVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_9_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_9_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_13_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_13_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_14_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_14_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__RVALID 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RVALID;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_15_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_15_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err___Vpast_16_0 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err._Vpast_16_0;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__AWREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.AWREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__ARREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.ARREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__BREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.BREADY;
    vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.__Vsampled__TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err__RREADY 
        = vlSymsp->TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err.RREADY;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vaxi_crossbar_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/integration/axi_crossbar_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vaxi_crossbar_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/integration/axi_crossbar_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vaxi_crossbar_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vaxi_crossbar_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}
