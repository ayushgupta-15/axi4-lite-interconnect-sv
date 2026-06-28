# Verification Methodology

The verification environment for the AXI4-Lite interconnect is built on **Verilator** and relies heavily on SystemVerilog testing paradigms, combining formal-like protocol assertions with pseudo-random functional coverage.

## 1. SystemVerilog Assertions (SVA)

Protocol invariants are continuously monitored by concurrent SVAs embedded natively within the RTL interface (`axi4_lite_if.sv`) and crossbar components.

Examples of monitored invariants:
- **VALID Stability:** `($past(AWVALID) && !$past(AWREADY)) |-> AWVALID && (AWADDR == $past(AWADDR))` ensures a master cannot drop or alter a request once initiated.
- **Outstanding Limits:** Tracks inflight transactions preventing `outstanding_writes > 1`.
- **Target Isolation:** Uses `$onehot0()` on target selection buses to guarantee a request never propagates to two slaves simultaneously.

## 2. The Integration Testbench

The primary testbench (`axi_crossbar_2m3s_tb.sv`) implements concurrent driver tasks utilizing `fork...join` logic.

The test suite runs:
1. **Directed Master 0 Isolation Tests**
2. **Directed Master 1 Isolation Tests**
3. **Simultaneous Arbitration Tests** (verifying fairness sequences)
4. **Random Regression Tests** (500 cycles of randomized multi-master traffic)

## 3. Functional Coverage

Since open-source simulators lack complete IEEE 1800 `covergroup` support, a custom coverage-tracking block is implemented inside the testbench to provide deep observability into the simulation stimulus.

Our coverage goals track:
- Master Utilization (Load balancing between M0 and M1).
- Address Target Utilization (Hitting Memory, Registers, UART, and Out-of-Bounds).
- Interconnect Contention (Simultaneous bus demands).

The terminal logs produce a formatted report at the end of the run confirming balanced stress across the crossbar.

## 4. Reference Models

During Random Regression, parallel shadow-memory arrays (`m0_mem_ref`, `m1_mem_ref`) operate as golden models. Read requests retrieve data from the interconnect which is immediately compared against the reference model to catch routing or data corruption errors dynamically.
