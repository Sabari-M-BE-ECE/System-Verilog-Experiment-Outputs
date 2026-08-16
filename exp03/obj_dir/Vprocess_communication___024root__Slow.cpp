// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocess_communication.h for the primary calling header

#include "Vprocess_communication__pch.h"

void Vprocess_communication___024root___ctor_var_reset(Vprocess_communication___024root* vlSelf);

Vprocess_communication___024root::Vprocess_communication___024root(Vprocess_communication__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vprocess_communication___024root___ctor_var_reset(this);
}

void Vprocess_communication___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vprocess_communication___024root::~Vprocess_communication___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
