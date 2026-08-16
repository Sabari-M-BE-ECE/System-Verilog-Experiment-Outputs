# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_environment.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtb_environment \
  Vtb_environment___024root__0 \
  Vtb_environment_tb_environment__0 \
  Vtb_environment_tb_environment__03a__03atransaction__Vclpkg__0 \
  Vtb_environment_tb_environment__03a__03agenerator__Vclpkg__0 \
  Vtb_environment_tb_environment__03a__03adriver__Vclpkg__0 \
  Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg__0 \
  Vtb_environment_std__03a__03asemaphore__Vclpkg__0 \
  Vtb_environment_std__03a__03aprocess__Vclpkg__0 \
  Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg__0 \
  Vtb_environment__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtb_environment___024root__Slow \
  Vtb_environment___024root__0__Slow \
  Vtb_environment_tb_environment__Slow \
  Vtb_environment_tb_environment__0__Slow \
  Vtb_environment___024unit__Slow \
  Vtb_environment___024unit__0__Slow \
  Vtb_environment_std__Slow \
  Vtb_environment_std__0__Slow \
  Vtb_environment_tb_environment__03a__03atransaction__Vclpkg__Slow \
  Vtb_environment_tb_environment__03a__03atransaction__Vclpkg__0__Slow \
  Vtb_environment_tb_environment__03a__03agenerator__Vclpkg__Slow \
  Vtb_environment_tb_environment__03a__03agenerator__Vclpkg__0__Slow \
  Vtb_environment_tb_environment__03a__03adriver__Vclpkg__Slow \
  Vtb_environment_tb_environment__03a__03adriver__Vclpkg__0__Slow \
  Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg__Slow \
  Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg__0__Slow \
  Vtb_environment_std__03a__03asemaphore__Vclpkg__Slow \
  Vtb_environment_std__03a__03asemaphore__Vclpkg__0__Slow \
  Vtb_environment_std__03a__03aprocess__Vclpkg__Slow \
  Vtb_environment_std__03a__03aprocess__Vclpkg__0__Slow \
  Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg__Slow \
  Vtb_environment_std__03a__03amailbox__Tz1__Vclpkg__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtb_environment__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_timing \
  verilated_random \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
