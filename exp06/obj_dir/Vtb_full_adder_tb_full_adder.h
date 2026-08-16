// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_full_adder.h for the primary calling header

#ifndef VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER_H_
#define VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_full_adder_tb_full_adder__03a__03aenvironment;
class Vtb_full_adder_tb_full_adder__03a__03ascoreboard;


class Vtb_full_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_full_adder_tb_full_adder final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a;
    CData/*0:0*/ __PVT__b;
    CData/*0:0*/ __PVT__cin;
    VlUnpacked<CData/*0:0*/, 8> __PVT__coverage;

    // INTERNAL VARIABLES
    Vtb_full_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_full_adder_tb_full_adder();
    ~Vtb_full_adder_tb_full_adder();
    void ctor(Vtb_full_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_full_adder_tb_full_adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
