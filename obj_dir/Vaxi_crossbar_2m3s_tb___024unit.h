// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_crossbar_2m3s_tb.h for the primary calling header

#ifndef VERILATED_VAXI_CROSSBAR_2M3S_TB___024UNIT_H_
#define VERILATED_VAXI_CROSSBAR_2M3S_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vaxi_crossbar_2m3s_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxi_crossbar_2m3s_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vaxi_crossbar_2m3s_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi_crossbar_2m3s_tb___024unit(Vaxi_crossbar_2m3s_tb__Syms* symsp, const char* v__name);
    ~Vaxi_crossbar_2m3s_tb___024unit();
    VL_UNCOPYABLE(Vaxi_crossbar_2m3s_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
