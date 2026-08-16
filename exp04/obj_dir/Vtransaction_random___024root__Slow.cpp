// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_random.h for the primary calling header

#include "Vtransaction_random__pch.h"

void Vtransaction_random___024root___ctor_var_reset(Vtransaction_random___024root* vlSelf);

Vtransaction_random___024root::Vtransaction_random___024root(Vtransaction_random__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtransaction_random___024root___ctor_var_reset(this);
}

void Vtransaction_random___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransaction_random___024root::~Vtransaction_random___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
