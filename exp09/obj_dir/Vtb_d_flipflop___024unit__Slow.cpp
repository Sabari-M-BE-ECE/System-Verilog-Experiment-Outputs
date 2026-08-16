// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop___024unit___ctor_var_reset(Vtb_d_flipflop___024unit* vlSelf);

Vtb_d_flipflop___024unit::Vtb_d_flipflop___024unit() = default;
Vtb_d_flipflop___024unit::~Vtb_d_flipflop___024unit() = default;

void Vtb_d_flipflop___024unit::ctor(Vtb_d_flipflop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_d_flipflop___024unit___ctor_var_reset(this);
}

void Vtb_d_flipflop___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_d_flipflop___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
