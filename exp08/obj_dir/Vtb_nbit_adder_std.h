// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_nbit_adder.h for the primary calling header

#ifndef VERILATED_VTB_NBIT_ADDER_STD_H_
#define VERILATED_VTB_NBIT_ADDER_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_nbit_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_nbit_adder_std final {
  public:

    // INTERNAL VARIABLES
    Vtb_nbit_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_nbit_adder_std();
    ~Vtb_nbit_adder_std();
    void ctor(Vtb_nbit_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_nbit_adder_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
