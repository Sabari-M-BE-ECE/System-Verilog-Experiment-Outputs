// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_d_flipflop.h for the primary calling header

#ifndef VERILATED_VTB_D_FLIPFLOP___024ROOT_H_
#define VERILATED_VTB_D_FLIPFLOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_d_flipflop_std;
class Vtb_d_flipflop_std__03a__03amailbox__Tz1__Vclpkg;
class Vtb_d_flipflop_std__03a__03aprocess__Vclpkg;
class Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg;
class Vtb_d_flipflop_tb_d_flipflop;
class Vtb_d_flipflop_tb_d_flipflop__03a__03adriver__Vclpkg;
class Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment__Vclpkg;
class Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg;
class Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor__Vclpkg;
class Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg;
class Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction__Vclpkg;


class Vtb_d_flipflop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_d_flipflop___024root final {
  public:
    // CELLS
    Vtb_d_flipflop_tb_d_flipflop* __PVT__tb_d_flipflop;
    Vtb_d_flipflop_std* __PVT__std;
    Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction__Vclpkg* tb_d_flipflop__03a__03atransaction__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg* tb_d_flipflop__03a__03agenerator__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03adriver__Vclpkg* tb_d_flipflop__03a__03adriver__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor__Vclpkg* tb_d_flipflop__03a__03amonitor__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg* tb_d_flipflop__03a__03ascoreboard__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment__Vclpkg* tb_d_flipflop__03a__03aenvironment__Vclpkg;
    Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtb_d_flipflop_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtb_d_flipflop_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    Vtb_d_flipflop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_d_flipflop___024root(Vtb_d_flipflop__Syms* symsp, const char* namep);
    ~Vtb_d_flipflop___024root();
    VL_UNCOPYABLE(Vtb_d_flipflop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
