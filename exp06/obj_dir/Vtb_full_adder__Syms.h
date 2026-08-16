// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_FULL_ADDER__SYMS_H_
#define VERILATED_VTB_FULL_ADDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_full_adder.h"

// INCLUDE MODULE CLASSES
#include "Vtb_full_adder___024root.h"
#include "Vtb_full_adder_tb_full_adder.h"
#include "Vtb_full_adder___024unit.h"
#include "Vtb_full_adder_std.h"
#include "Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg.h"
#include "Vtb_full_adder_tb_full_adder__03a__03agenerator__Vclpkg.h"
#include "Vtb_full_adder_tb_full_adder__03a__03adriver__Vclpkg.h"
#include "Vtb_full_adder_tb_full_adder__03a__03amonitor__Vclpkg.h"
#include "Vtb_full_adder_tb_full_adder__03a__03ascoreboard__Vclpkg.h"
#include "Vtb_full_adder_tb_full_adder__03a__03aenvironment__Vclpkg.h"
#include "Vtb_full_adder_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_full_adder_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_full_adder_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_full_adder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_full_adder* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_full_adder___024root       TOP;
    Vtb_full_adder_std             TOP__std;
    Vtb_full_adder_tb_full_adder   TOP__tb_full_adder;
    Vtb_full_adder_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_full_adder_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_full_adder_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtb_full_adder_tb_full_adder__03a__03adriver__Vclpkg TOP__tb_full_adder__03a__03adriver__Vclpkg;
    Vtb_full_adder_tb_full_adder__03a__03aenvironment__Vclpkg TOP__tb_full_adder__03a__03aenvironment__Vclpkg;
    Vtb_full_adder_tb_full_adder__03a__03agenerator__Vclpkg TOP__tb_full_adder__03a__03agenerator__Vclpkg;
    Vtb_full_adder_tb_full_adder__03a__03amonitor__Vclpkg TOP__tb_full_adder__03a__03amonitor__Vclpkg;
    Vtb_full_adder_tb_full_adder__03a__03ascoreboard__Vclpkg TOP__tb_full_adder__03a__03ascoreboard__Vclpkg;
    Vtb_full_adder_tb_full_adder__03a__03atransaction__Vclpkg TOP__tb_full_adder__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb_full_adder__Syms(VerilatedContext* contextp, const char* namep, Vtb_full_adder* modelp);
    ~Vtb_full_adder__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
