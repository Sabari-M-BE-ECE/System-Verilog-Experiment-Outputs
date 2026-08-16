// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment___024root___ctor_var_reset(Vtb_environment___024root* vlSelf);

Vtb_environment___024root::Vtb_environment___024root(Vtb_environment__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_environment___024root___ctor_var_reset(this);
}

void Vtb_environment___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_environment___024root::~Vtb_environment___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
