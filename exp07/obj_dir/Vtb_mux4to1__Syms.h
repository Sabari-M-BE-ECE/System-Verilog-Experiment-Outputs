// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MUX4TO1__SYMS_H_
#define VERILATED_VTB_MUX4TO1__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_mux4to1.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mux4to1___024root.h"
#include "Vtb_mux4to1_tb_mux4to1.h"
#include "Vtb_mux4to1___024unit.h"
#include "Vtb_mux4to1_std.h"
#include "Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg.h"
#include "Vtb_mux4to1_tb_mux4to1__03a__03agenerator__Vclpkg.h"
#include "Vtb_mux4to1_tb_mux4to1__03a__03adriver__Vclpkg.h"
#include "Vtb_mux4to1_tb_mux4to1__03a__03amonitor__Vclpkg.h"
#include "Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard__Vclpkg.h"
#include "Vtb_mux4to1_tb_mux4to1__03a__03aenvironment__Vclpkg.h"
#include "Vtb_mux4to1_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_mux4to1_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_mux4to1_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mux4to1* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mux4to1___024root          TOP;
    Vtb_mux4to1_std                TOP__std;
    Vtb_mux4to1_tb_mux4to1         TOP__tb_mux4to1;
    Vtb_mux4to1_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_mux4to1_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_mux4to1_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtb_mux4to1_tb_mux4to1__03a__03adriver__Vclpkg TOP__tb_mux4to1__03a__03adriver__Vclpkg;
    Vtb_mux4to1_tb_mux4to1__03a__03aenvironment__Vclpkg TOP__tb_mux4to1__03a__03aenvironment__Vclpkg;
    Vtb_mux4to1_tb_mux4to1__03a__03agenerator__Vclpkg TOP__tb_mux4to1__03a__03agenerator__Vclpkg;
    Vtb_mux4to1_tb_mux4to1__03a__03amonitor__Vclpkg TOP__tb_mux4to1__03a__03amonitor__Vclpkg;
    Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard__Vclpkg TOP__tb_mux4to1__03a__03ascoreboard__Vclpkg;
    Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg TOP__tb_mux4to1__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb_mux4to1__Syms(VerilatedContext* contextp, const char* namep, Vtb_mux4to1* modelp);
    ~Vtb_mux4to1__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
