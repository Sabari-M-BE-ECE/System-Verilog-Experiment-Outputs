// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

void Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg___ctor_var_reset(Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg* vlSelf);

Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg::Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg() = default;
Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg::~Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg() = default;

void Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg::ctor(Vtb_d_flipflop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg___ctor_var_reset(this);
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
