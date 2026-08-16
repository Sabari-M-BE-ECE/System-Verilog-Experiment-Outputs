// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_half_adder.h for the primary calling header

#ifndef VERILATED_VTB_HALF_ADDER___024ROOT_H_
#define VERILATED_VTB_HALF_ADDER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_half_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_half_adder___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_half_adder__DOT__a;
    CData/*0:0*/ tb_half_adder__DOT__b;
    CData/*0:0*/ tb_half_adder__DOT__gate_dut__DOT__sum;
    CData/*0:0*/ tb_half_adder__DOT__gate_dut__DOT__carry;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_half_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_half_adder___024root(Vtb_half_adder__Syms* symsp, const char* namep);
    ~Vtb_half_adder___024root();
    VL_UNCOPYABLE(Vtb_half_adder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
