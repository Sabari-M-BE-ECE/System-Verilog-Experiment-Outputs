// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocess_communication.h for the primary calling header

#ifndef VERILATED_VPROCESS_COMMUNICATION___024UNIT_H_
#define VERILATED_VPROCESS_COMMUNICATION___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vprocess_communication__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocess_communication___024unit final {
  public:

    // INTERNAL VARIABLES
    Vprocess_communication__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vprocess_communication___024unit();
    ~Vprocess_communication___024unit();
    void ctor(Vprocess_communication__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vprocess_communication___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
