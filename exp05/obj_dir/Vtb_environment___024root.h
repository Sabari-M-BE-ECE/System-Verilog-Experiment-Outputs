// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_environment.h for the primary calling header

#ifndef VERILATED_VTB_ENVIRONMENT___024ROOT_H_
#define VERILATED_VTB_ENVIRONMENT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_environment_std;
class Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg;
class Vtb_environment_std__03a__03aprocess__Vclpkg;
class Vtb_environment_std__03a__03asemaphore__Vclpkg;
class Vtb_environment_tb_environment;
class Vtb_environment_tb_environment__03a__03adriver__Vclpkg;
class Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg;
class Vtb_environment_tb_environment__03a__03agenerator__Vclpkg;
class Vtb_environment_tb_environment__03a__03atransaction__Vclpkg;


class Vtb_environment__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_environment___024root final {
  public:
    // CELLS
    Vtb_environment_tb_environment* __PVT__tb_environment;
    Vtb_environment_std* __PVT__std;
    Vtb_environment_tb_environment__03a__03atransaction__Vclpkg* tb_environment__03a__03atransaction__Vclpkg;
    Vtb_environment_tb_environment__03a__03agenerator__Vclpkg* tb_environment__03a__03agenerator__Vclpkg;
    Vtb_environment_tb_environment__03a__03adriver__Vclpkg* tb_environment__03a__03adriver__Vclpkg;
    Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg* tb_environment__03a__03aenvironment__Vclpkg;
    Vtb_environment_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtb_environment_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
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
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    Vtb_environment__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_environment___024root(Vtb_environment__Syms* symsp, const char* namep);
    ~Vtb_environment___024root();
    VL_UNCOPYABLE(Vtb_environment___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
