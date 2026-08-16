// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_environment.h for the primary calling header

#ifndef VERILATED_VTB_ENVIRONMENT_STD_H_
#define VERILATED_VTB_ENVIRONMENT_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_environment__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_environment_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_environment__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_environment_std();
    ~Vtb_environment_std();
    void ctor(Vtb_environment__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_environment_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
