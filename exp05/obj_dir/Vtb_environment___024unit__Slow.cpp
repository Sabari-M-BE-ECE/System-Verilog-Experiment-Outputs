// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment___024unit___ctor_var_reset(Vtb_environment___024unit* vlSelf);

Vtb_environment___024unit::Vtb_environment___024unit() = default;
Vtb_environment___024unit::~Vtb_environment___024unit() = default;

void Vtb_environment___024unit::ctor(Vtb_environment__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_environment___024unit___ctor_var_reset(this);
}

void Vtb_environment___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_environment___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
