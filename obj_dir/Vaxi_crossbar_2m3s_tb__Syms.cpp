// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaxi_crossbar_2m3s_tb__pch.h"
#include "Vaxi_crossbar_2m3s_tb.h"
#include "Vaxi_crossbar_2m3s_tb___024root.h"
#include "Vaxi_crossbar_2m3s_tb___024unit.h"
#include "Vaxi_crossbar_2m3s_tb_axi4_lite_if.h"

// FUNCTIONS
Vaxi_crossbar_2m3s_tb__Syms::~Vaxi_crossbar_2m3s_tb__Syms()
{
}

Vaxi_crossbar_2m3s_tb__Syms::Vaxi_crossbar_2m3s_tb__Syms(VerilatedContext* contextp, const char* namep, Vaxi_crossbar_2m3s_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__axi_crossbar_2m3s_tb__DOT__axi_m0{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.axi_m0")}
    , TOP__axi_crossbar_2m3s_tb__DOT__axi_m1{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.axi_m1")}
    , TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.dut.axi_mux")}
    , TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.dut.xbar.axi_s0")}
    , TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.dut.xbar.axi_s1")}
    , TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.dut.xbar.axi_s2")}
    , TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err{this, Verilated::catName(namep, "axi_crossbar_2m3s_tb.dut.xbar.axi_s_err")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__axi_m0 = &TOP__axi_crossbar_2m3s_tb__DOT__axi_m0;
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__axi_m1 = &TOP__axi_crossbar_2m3s_tb__DOT__axi_m1;
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux = &TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux;
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0 = &TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0;
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1 = &TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1;
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2 = &TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2;
    TOP.__PVT__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err = &TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__axi_crossbar_2m3s_tb__DOT__axi_m0.__Vconfigure(true);
    TOP__axi_crossbar_2m3s_tb__DOT__axi_m1.__Vconfigure(false);
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__axi_mux.__Vconfigure(false);
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s0.__Vconfigure(false);
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s1.__Vconfigure(false);
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s2.__Vconfigure(false);
    TOP__axi_crossbar_2m3s_tb__DOT__dut__DOT__xbar__DOT__axi_s_err.__Vconfigure(false);
    // Setup scopes
    __Vscope_axi_crossbar_2m3s_tb__axi_m0.configure(this, name(), "axi_crossbar_2m3s_tb.axi_m0", "axi_m0", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__axi_m1.configure(this, name(), "axi_crossbar_2m3s_tb.axi_m1", "axi_m1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut.configure(this, name(), "axi_crossbar_2m3s_tb.dut", "dut", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut__axi_mux.configure(this, name(), "axi_crossbar_2m3s_tb.dut.axi_mux", "axi_mux", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut__xbar.configure(this, name(), "axi_crossbar_2m3s_tb.dut.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut__xbar__axi_s0.configure(this, name(), "axi_crossbar_2m3s_tb.dut.xbar.axi_s0", "axi_s0", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut__xbar__axi_s1.configure(this, name(), "axi_crossbar_2m3s_tb.dut.xbar.axi_s1", "axi_s1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut__xbar__axi_s2.configure(this, name(), "axi_crossbar_2m3s_tb.dut.xbar.axi_s2", "axi_s2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_axi_crossbar_2m3s_tb__dut__xbar__axi_s_err.configure(this, name(), "axi_crossbar_2m3s_tb.dut.xbar.axi_s_err", "axi_s_err", -9, VerilatedScope::SCOPE_OTHER);
}
