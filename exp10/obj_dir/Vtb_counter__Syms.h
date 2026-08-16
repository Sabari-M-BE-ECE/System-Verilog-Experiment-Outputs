// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_COUNTER__SYMS_H_
#define VERILATED_VTB_COUNTER__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_counter.h"

// INCLUDE MODULE CLASSES
#include "Vtb_counter___024root.h"
#include "Vtb_counter_tb_counter.h"
#include "Vtb_counter___024unit.h"
#include "Vtb_counter_std.h"
#include "Vtb_counter_tb_counter__03a__03atransaction__Vclpkg.h"
#include "Vtb_counter_tb_counter__03a__03agenerator__Vclpkg.h"
#include "Vtb_counter_tb_counter__03a__03adriver__Vclpkg.h"
#include "Vtb_counter_tb_counter__03a__03amonitor__Vclpkg.h"
#include "Vtb_counter_tb_counter__03a__03ascoreboard__Vclpkg.h"
#include "Vtb_counter_tb_counter__03a__03aenvironment__Vclpkg.h"
#include "Vtb_counter_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_counter_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_counter_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_counter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_counter* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_counter___024root          TOP;
    Vtb_counter_std                TOP__std;
    Vtb_counter_tb_counter         TOP__tb_counter;
    Vtb_counter_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_counter_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_counter_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtb_counter_tb_counter__03a__03adriver__Vclpkg TOP__tb_counter__03a__03adriver__Vclpkg;
    Vtb_counter_tb_counter__03a__03aenvironment__Vclpkg TOP__tb_counter__03a__03aenvironment__Vclpkg;
    Vtb_counter_tb_counter__03a__03agenerator__Vclpkg TOP__tb_counter__03a__03agenerator__Vclpkg;
    Vtb_counter_tb_counter__03a__03amonitor__Vclpkg TOP__tb_counter__03a__03amonitor__Vclpkg;
    Vtb_counter_tb_counter__03a__03ascoreboard__Vclpkg TOP__tb_counter__03a__03ascoreboard__Vclpkg;
    Vtb_counter_tb_counter__03a__03atransaction__Vclpkg TOP__tb_counter__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb_counter__Syms(VerilatedContext* contextp, const char* namep, Vtb_counter* modelp);
    ~Vtb_counter__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
