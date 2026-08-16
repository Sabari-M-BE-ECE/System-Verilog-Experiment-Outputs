// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_counter.h for the primary calling header

#ifndef VERILATED_VTB_COUNTER_STD_H_
#define VERILATED_VTB_COUNTER_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_counter_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_counter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_counter_std();
    ~Vtb_counter_std();
    void ctor(Vtb_counter__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_counter_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
