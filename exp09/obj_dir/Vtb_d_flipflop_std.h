// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_d_flipflop.h for the primary calling header

#ifndef VERILATED_VTB_D_FLIPFLOP_STD_H_
#define VERILATED_VTB_D_FLIPFLOP_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_d_flipflop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_d_flipflop_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_d_flipflop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_d_flipflop_std();
    ~Vtb_d_flipflop_std();
    void ctor(Vtb_d_flipflop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_d_flipflop_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
