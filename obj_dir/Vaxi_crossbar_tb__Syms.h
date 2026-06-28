// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAXI_CROSSBAR_TB__SYMS_H_
#define VERILATED_VAXI_CROSSBAR_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaxi_crossbar_tb.h"

// INCLUDE MODULE CLASSES
#include "Vaxi_crossbar_tb___024root.h"
#include "Vaxi_crossbar_tb___024unit.h"
#include "Vaxi_crossbar_tb_axi4_lite_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vaxi_crossbar_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaxi_crossbar_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaxi_crossbar_tb___024root     TOP;
    Vaxi_crossbar_tb_axi4_lite_if  TOP__axi_crossbar_tb__DOT__axi;
    Vaxi_crossbar_tb_axi4_lite_if  TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s0;
    Vaxi_crossbar_tb_axi4_lite_if  TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s1;
    Vaxi_crossbar_tb_axi4_lite_if  TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s2;
    Vaxi_crossbar_tb_axi4_lite_if  TOP__axi_crossbar_tb__DOT__dut__DOT__axi_s_err;

    // SCOPE NAMES
    VerilatedScope __Vscope_axi_crossbar_tb__axi;
    VerilatedScope __Vscope_axi_crossbar_tb__dut;
    VerilatedScope __Vscope_axi_crossbar_tb__dut__axi_s0;
    VerilatedScope __Vscope_axi_crossbar_tb__dut__axi_s1;
    VerilatedScope __Vscope_axi_crossbar_tb__dut__axi_s2;
    VerilatedScope __Vscope_axi_crossbar_tb__dut__axi_s_err;

    // CONSTRUCTORS
    Vaxi_crossbar_tb__Syms(VerilatedContext* contextp, const char* namep, Vaxi_crossbar_tb* modelp);
    ~Vaxi_crossbar_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
