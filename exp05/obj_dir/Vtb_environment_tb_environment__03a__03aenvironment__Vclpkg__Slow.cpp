// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_environment.h for the primary calling header

#include "Vtb_environment__pch.h"

void Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg___ctor_var_reset(Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg* vlSelf);

Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg::Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg() = default;
Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg::~Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg() = default;

void Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg::ctor(Vtb_environment__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg___ctor_var_reset(this);
}

void Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
