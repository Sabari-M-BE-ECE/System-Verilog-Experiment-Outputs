// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_and_gate.h for the primary calling header

#ifndef VERILATED_VTB_AND_GATE___024ROOT_H_
#define VERILATED_VTB_AND_GATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_and_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_and_gate___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_and_gate__DOT__a;
    CData/*0:0*/ tb_and_gate__DOT__b;
    CData/*0:0*/ tb_and_gate__DOT__dut__DOT__y;
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
    Vtb_and_gate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_and_gate___024root(Vtb_and_gate__Syms* symsp, const char* namep);
    ~Vtb_and_gate___024root();
    VL_UNCOPYABLE(Vtb_and_gate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
