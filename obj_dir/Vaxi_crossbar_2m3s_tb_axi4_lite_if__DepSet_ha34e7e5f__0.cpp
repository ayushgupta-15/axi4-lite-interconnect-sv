// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb__Syms.h"
#include "Vaxi_crossbar_2m3s_tb_axi4_lite_if.h"

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWVALID) 
                                      & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARVALID) 
                                      & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BVALID) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_15_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_5_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m0: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    vlSelf->_Vpast_2_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWADDR;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWREADY;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__AWVALID;
    vlSelf->_Vpast_12_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARADDR;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARREADY;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__ARVALID;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BREADY;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__BVALID;
    vlSelf->_Vpast_9_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RREADY;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__RVALID;
    vlSelf->_Vpast_15_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA;
    vlSelf->_Vpast_16_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP;
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WVALID;
    vlSelf->_Vpast_5_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WDATA;
    vlSelf->_Vpast_6_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__WSTRB;
    vlSelf->_Vpast_4_0 = ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                          & (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WREADY));
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m0__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__outstanding_writes;
    __Vdly__outstanding_writes = 0;
    IData/*31:0*/ __Vdly__outstanding_reads;
    __Vdly__outstanding_reads = 0;
    // Body
    __Vdly__outstanding_reads = vlSelf->__PVT__outstanding_reads;
    __Vdly__outstanding_writes = vlSelf->__PVT__outstanding_writes;
    if (vlSymsp->TOP.axi_crossbar_2m3s_tb__DOT__rst_n) {
        if ((((IData)(vlSelf->ARVALID) & (IData)(vlSelf->ARREADY)) 
             & (~ ((IData)(vlSelf->RVALID) & (IData)(vlSelf->RREADY))))) {
            __Vdly__outstanding_reads = ((IData)(1U) 
                                         + vlSelf->__PVT__outstanding_reads);
        } else if (((~ ((IData)(vlSelf->ARVALID) & (IData)(vlSelf->ARREADY))) 
                    & ((IData)(vlSelf->RVALID) & (IData)(vlSelf->RREADY)))) {
            __Vdly__outstanding_reads = (vlSelf->__PVT__outstanding_reads 
                                         - (IData)(1U));
        }
        if ((((IData)(vlSelf->AWVALID) & (IData)(vlSelf->AWREADY)) 
             & (~ ((IData)(vlSelf->BVALID) & (IData)(vlSelf->BREADY))))) {
            __Vdly__outstanding_writes = ((IData)(1U) 
                                          + vlSelf->__PVT__outstanding_writes);
        } else if (((~ ((IData)(vlSelf->AWVALID) & (IData)(vlSelf->AWREADY))) 
                    & ((IData)(vlSelf->BVALID) & (IData)(vlSelf->BREADY)))) {
            __Vdly__outstanding_writes = (vlSelf->__PVT__outstanding_writes 
                                          - (IData)(1U));
        }
    } else {
        __Vdly__outstanding_reads = 0U;
        __Vdly__outstanding_writes = 0U;
    }
    vlSelf->__PVT__outstanding_reads = __Vdly__outstanding_reads;
    vlSelf->__PVT__outstanding_writes = __Vdly__outstanding_writes;
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWVALID) 
                                      & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARVALID) 
                                      & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BVALID) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RVALID) 
                                       & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_15_0)) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_5_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.axi_m1: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    vlSelf->_Vpast_2_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWADDR;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWREADY;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__AWVALID;
    vlSelf->_Vpast_12_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARADDR;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARREADY;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__ARVALID;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BREADY;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__BVALID;
    vlSelf->_Vpast_9_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RREADY;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__RVALID;
    vlSelf->_Vpast_15_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA;
    vlSelf->_Vpast_16_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP;
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WVALID;
    vlSelf->_Vpast_5_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WDATA;
    vlSelf->_Vpast_6_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__axi_m1__WSTRB;
    vlSelf->_Vpast_4_0 = (((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__w_eff_grant) 
                           >> 1U) & (IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WREADY));
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BVALID) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RVALID) 
                                       & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_15_0)) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_5_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARVALID) 
                                      & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWVALID) 
                                      & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.axi_mux: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    vlSelf->_Vpast_9_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BRESP;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BVALID;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__BREADY;
    vlSelf->_Vpast_15_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RDATA;
    vlSelf->_Vpast_16_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RRESP;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RVALID;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__RREADY;
    vlSelf->_Vpast_4_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WREADY;
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WVALID;
    vlSelf->_Vpast_6_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB;
    vlSelf->_Vpast_5_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARREADY;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARVALID;
    vlSelf->_Vpast_12_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWREADY;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWVALID;
    vlSelf->_Vpast_2_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR;
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WVALID) 
                                       & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_5_0)) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BVALID) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_15_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s0: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WVALID;
    vlSelf->_Vpast_4_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__WREADY;
    vlSelf->_Vpast_6_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB;
    vlSelf->_Vpast_5_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARVALID;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__ARREADY;
    vlSelf->_Vpast_12_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWVALID;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__AWREADY;
    vlSelf->_Vpast_2_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BREADY;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BVALID;
    vlSelf->_Vpast_9_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__BRESP;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RREADY;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RVALID;
    vlSelf->_Vpast_15_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RDATA;
    vlSelf->_Vpast_16_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0__RRESP;
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WVALID) 
                                       & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_5_0)) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BVALID) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_15_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s1: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WVALID;
    vlSelf->_Vpast_4_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__WREADY;
    vlSelf->_Vpast_6_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB;
    vlSelf->_Vpast_5_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARVALID;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__ARREADY;
    vlSelf->_Vpast_12_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWVALID;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__AWREADY;
    vlSelf->_Vpast_2_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BREADY;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BVALID;
    vlSelf->_Vpast_9_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__BRESP;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RREADY;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RVALID;
    vlSelf->_Vpast_15_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RDATA;
    vlSelf->_Vpast_16_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1__RRESP;
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WVALID) 
                                       & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_5_0)) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BVALID) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_15_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s2: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WVALID;
    vlSelf->_Vpast_4_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__WREADY;
    vlSelf->_Vpast_6_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB;
    vlSelf->_Vpast_5_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARVALID;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__ARREADY;
    vlSelf->_Vpast_12_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWVALID;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__AWREADY;
    vlSelf->_Vpast_2_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BREADY;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BVALID;
    vlSelf->_Vpast_9_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__BRESP;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RREADY;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RVALID;
    vlSelf->_Vpast_15_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RDATA;
    vlSelf->_Vpast_16_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2__RRESP;
}

VL_INLINE_OPT void Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__0(Vaxi_crossbar_2m3s_tb_axi4_lite_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaxi_crossbar_2m3s_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaxi_crossbar_2m3s_tb_axi4_lite_if___nba_sequent__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__0\n"); );
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:109: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: Exceeded max outstanding writes limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 109, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_GTES_III(32, 1U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:115: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: Exceeded max outstanding reads limit\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 115, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_writes)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:121: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: Write outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 121, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | VL_LTES_III(32, 0U, vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err____PVT__outstanding_reads)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:127: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: Read outstanding counter underflow\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 127, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_3_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_4_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WVALID) 
                                       & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_5_0)) 
                                      & ((IData)(vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_6_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:64: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: WVALID/WDATA/WSTRB unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 64, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_10_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_11_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_12_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:76: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: ARVALID/ARADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 76, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_0_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_1_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWVALID) 
                                      & (vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR 
                                         == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_2_0)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:58: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: AWVALID/AWADDR unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 58, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_7_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_8_0)))) 
                                   | ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BVALID) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_9_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:70: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: BVALID/BRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 70, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ (IData)(vlSymsp->TOP.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__rst_n)) 
                                | ((~ ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_13_0) 
                                       & (~ (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_14_0)))) 
                                   | (((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RVALID) 
                                       & (vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RDATA 
                                          == vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_15_0)) 
                                      & ((IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RRESP) 
                                         == (IData)(vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err___Vpast_16_0))))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: axi4_lite_if.sv:82: Assertion failed in %Naxi_crossbar_2m3s_tb.dut.xbar.axi_s_err: RVALID/RDATA/RRESP unstable\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("rtl/interface/axi4_lite_if.sv", 82, "");
            }
        }
    }
    vlSelf->_Vpast_3_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WVALID;
    vlSelf->_Vpast_4_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__WREADY;
    vlSelf->_Vpast_6_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WSTRB;
    vlSelf->_Vpast_5_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__WDATA;
    vlSelf->_Vpast_10_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARVALID;
    vlSelf->_Vpast_11_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__ARREADY;
    vlSelf->_Vpast_12_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__ARADDR;
    vlSelf->_Vpast_0_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWVALID;
    vlSelf->_Vpast_1_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__AWREADY;
    vlSelf->_Vpast_2_0 = vlSymsp->TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux__AWADDR;
    vlSelf->_Vpast_8_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BREADY;
    vlSelf->_Vpast_7_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BVALID;
    vlSelf->_Vpast_9_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__BRESP;
    vlSelf->_Vpast_14_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RREADY;
    vlSelf->_Vpast_13_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RVALID;
    vlSelf->_Vpast_15_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RDATA;
    vlSelf->_Vpast_16_0 = vlSelf->__Vsampled__TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err__RRESP;
}
