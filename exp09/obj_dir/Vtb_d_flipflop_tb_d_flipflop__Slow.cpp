// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_tb_d_flipflop___ctor_var_reset(Vtb_d_flipflop_tb_d_flipflop* vlSelf);

Vtb_d_flipflop_tb_d_flipflop::Vtb_d_flipflop_tb_d_flipflop() = default;
Vtb_d_flipflop_tb_d_flipflop::~Vtb_d_flipflop_tb_d_flipflop() = default;

void Vtb_d_flipflop_tb_d_flipflop::ctor(Vtb_d_flipflop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_d_flipflop_tb_d_flipflop___ctor_var_reset(this);
}

void Vtb_d_flipflop_tb_d_flipflop::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_d_flipflop_tb_d_flipflop::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
