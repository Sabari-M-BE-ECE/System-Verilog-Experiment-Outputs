// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_full_adder.h for the primary calling header

#include "Vtb_full_adder__pch.h"

void Vtb_full_adder_tb_full_adder___ctor_var_reset(Vtb_full_adder_tb_full_adder* vlSelf);

Vtb_full_adder_tb_full_adder::Vtb_full_adder_tb_full_adder() = default;
Vtb_full_adder_tb_full_adder::~Vtb_full_adder_tb_full_adder() = default;

void Vtb_full_adder_tb_full_adder::ctor(Vtb_full_adder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_full_adder_tb_full_adder___ctor_var_reset(this);
}

void Vtb_full_adder_tb_full_adder::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_full_adder_tb_full_adder::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
