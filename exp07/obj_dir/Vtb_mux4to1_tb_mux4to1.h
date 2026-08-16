// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mux4to1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4TO1_TB_MUX4TO1_H_
#define VERILATED_VTB_MUX4TO1_TB_MUX4TO1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_mux4to1_tb_mux4to1__03a__03aenvironment;
class Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard;


class Vtb_mux4to1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1_tb_mux4to1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__i0;
    CData/*0:0*/ __PVT__i1;
    CData/*0:0*/ __PVT__i2;
    CData/*0:0*/ __PVT__i3;
    CData/*0:0*/ __PVT__s1;
    CData/*0:0*/ __PVT__s0;

    // INTERNAL VARIABLES
    Vtb_mux4to1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mux4to1_tb_mux4to1();
    ~Vtb_mux4to1_tb_mux4to1();
    void ctor(Vtb_mux4to1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mux4to1_tb_mux4to1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
