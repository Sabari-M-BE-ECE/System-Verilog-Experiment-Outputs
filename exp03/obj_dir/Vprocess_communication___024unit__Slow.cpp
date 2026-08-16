// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocess_communication.h for the primary calling header

#include "Vprocess_communication__pch.h"

void Vprocess_communication___024unit___ctor_var_reset(Vprocess_communication___024unit* vlSelf);

Vprocess_communication___024unit::Vprocess_communication___024unit() = default;
Vprocess_communication___024unit::~Vprocess_communication___024unit() = default;

void Vprocess_communication___024unit::ctor(Vprocess_communication__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vprocess_communication___024unit___ctor_var_reset(this);
}

void Vprocess_communication___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vprocess_communication___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
