// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_environment.h for the primary calling header

#ifndef VERILATED_VTB_ENVIRONMENT_TB_ENVIRONMENT_H_
#define VERILATED_VTB_ENVIRONMENT_TB_ENVIRONMENT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_environment_tb_environment__03a__03aenvironment;


class Vtb_environment__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_environment_tb_environment final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a;
    CData/*0:0*/ __PVT__b;
    CData/*0:0*/ __PVT__sum;
    CData/*0:0*/ __PVT__carry;

    // INTERNAL VARIABLES
    Vtb_environment__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_environment_tb_environment();
    ~Vtb_environment_tb_environment();
    void ctor(Vtb_environment__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_environment_tb_environment);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
