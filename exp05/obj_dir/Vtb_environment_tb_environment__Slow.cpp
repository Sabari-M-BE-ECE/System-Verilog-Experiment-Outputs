// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_tb_environment___ctor_var_reset(Vtb_environment_tb_environment* vlSelf);

Vtb_environment_tb_environment::Vtb_environment_tb_environment() = default;
Vtb_environment_tb_environment::~Vtb_environment_tb_environment() = default;

void Vtb_environment_tb_environment::ctor(Vtb_environment__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_environment_tb_environment___ctor_var_reset(this);
}

void Vtb_environment_tb_environment::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_environment_tb_environment::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
