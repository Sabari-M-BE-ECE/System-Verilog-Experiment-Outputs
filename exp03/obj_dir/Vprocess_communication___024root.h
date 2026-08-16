// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocess_communication.h for the primary calling header

#ifndef VERILATED_VPROCESS_COMMUNICATION___024ROOT_H_
#define VERILATED_VPROCESS_COMMUNICATION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vprocess_communication_std;
class Vprocess_communication_std__03a__03amailbox__Tz1;
class Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg;
class Vprocess_communication_std__03a__03aprocess__Vclpkg;
class Vprocess_communication_std__03a__03asemaphore__Vclpkg;


class Vprocess_communication__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocess_communication___024root final {
  public:
    // CELLS
    Vprocess_communication_std* __PVT__std;
    Vprocess_communication_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vprocess_communication_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ process_communication__DOT__consumer__Vstatic__data;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlClassRef<Vprocess_communication_std__03a__03amailbox__Tz1> process_communication__DOT__mbx;

    // INTERNAL VARIABLES
    Vprocess_communication__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vprocess_communication___024root(Vprocess_communication__Syms* symsp, const char* namep);
    ~Vprocess_communication___024root();
    VL_UNCOPYABLE(Vprocess_communication___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
