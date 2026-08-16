// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_nbit_adder.h for the primary calling header

#include "Vtb_nbit_adder__pch.h"

void Vtb_nbit_adder_tb_nbit_adder___ctor_var_reset(Vtb_nbit_adder_tb_nbit_adder* vlSelf);

Vtb_nbit_adder_tb_nbit_adder::Vtb_nbit_adder_tb_nbit_adder() = default;
Vtb_nbit_adder_tb_nbit_adder::~Vtb_nbit_adder_tb_nbit_adder() = default;

void Vtb_nbit_adder_tb_nbit_adder::ctor(Vtb_nbit_adder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_nbit_adder_tb_nbit_adder___ctor_var_reset(this);
}

void Vtb_nbit_adder_tb_nbit_adder::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_nbit_adder_tb_nbit_adder::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
