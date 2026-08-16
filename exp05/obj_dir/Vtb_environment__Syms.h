// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ENVIRONMENT__SYMS_H_
#define VERILATED_VTB_ENVIRONMENT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_environment.h"

// INCLUDE MODULE CLASSES
#include "Vtb_environment___024root.h"
#include "Vtb_environment_tb_environment.h"
#include "Vtb_environment___024unit.h"
#include "Vtb_environment_std.h"
#include "Vtb_environment_tb_environment__03a__03atransaction__Vclpkg.h"
#include "Vtb_environment_tb_environment__03a__03agenerator__Vclpkg.h"
#include "Vtb_environment_tb_environment__03a__03adriver__Vclpkg.h"
#include "Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg.h"
#include "Vtb_environment_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_environment_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_environment__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_environment* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_environment___024root      TOP;
    Vtb_environment_std            TOP__std;
    Vtb_environment_tb_environment TOP__tb_environment;
    Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_environment_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_environment_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtb_environment_tb_environment__03a__03adriver__Vclpkg TOP__tb_environment__03a__03adriver__Vclpkg;
    Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg TOP__tb_environment__03a__03aenvironment__Vclpkg;
    Vtb_environment_tb_environment__03a__03agenerator__Vclpkg TOP__tb_environment__03a__03agenerator__Vclpkg;
    Vtb_environment_tb_environment__03a__03atransaction__Vclpkg TOP__tb_environment__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb_environment__Syms(VerilatedContext* contextp, const char* namep, Vtb_environment* modelp);
    ~Vtb_environment__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
