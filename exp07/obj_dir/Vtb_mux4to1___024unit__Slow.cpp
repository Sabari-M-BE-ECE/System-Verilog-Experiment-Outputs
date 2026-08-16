// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

void Vtb_mux4to1___024unit___ctor_var_reset(Vtb_mux4to1___024unit* vlSelf);

Vtb_mux4to1___024unit::Vtb_mux4to1___024unit() = default;
Vtb_mux4to1___024unit::~Vtb_mux4to1___024unit() = default;

void Vtb_mux4to1___024unit::ctor(Vtb_mux4to1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_mux4to1___024unit___ctor_var_reset(this);
}

void Vtb_mux4to1___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_mux4to1___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
