// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_random.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_RANDOM_STD_H_
#define VERILATED_VTRANSACTION_RANDOM_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtransaction_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random_std final {
  public:

    // INTERNAL VARIABLES
    Vtransaction_random__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_random_std();
    ~Vtransaction_random_std();
    void ctor(Vtransaction_random__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransaction_random_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
