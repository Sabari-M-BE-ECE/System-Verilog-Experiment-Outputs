// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mux4to1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4TO1_STD_H_
#define VERILATED_VTB_MUX4TO1_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_mux4to1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_mux4to1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mux4to1_std();
    ~Vtb_mux4to1_std();
    void ctor(Vtb_mux4to1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mux4to1_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
