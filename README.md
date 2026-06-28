# AXI4-Lite Multi-Master Interconnect

A fully verified, SystemVerilog-based AXI4-Lite 2-Master 3-Slave (2M3S) crossbar interconnect. This repository demonstrates professional RTL design practices, including protocol-compliant round-robin arbitration, multi-master transaction routing, SystemVerilog Assertions (SVA), and functional coverage.

```text
              Master0
                 │
              Arbiter
                 │
Master1 ─────────┤
                 │
           AXI Crossbar
        ┌────┬────┬────┐
        │    │    │    │
     Memory Reg UART Error
```

## Features

- **Protocol Compliant:** Fully adheres to the ARM AMBA AXI4-Lite specification.
- **Multi-Master Arbitration:** Implements fair, transaction-aware Round-Robin arbitration ensuring no master starvation.
- **Robust Routing:** Independent read and write address decoders route transactions to memory, register, UART, and error slaves.
- **SystemVerilog Assertions (SVA):** Embedded protocol invariants (e.g., VALID/READY handshakes, outstanding limits, routing isolation).
- **Functional Coverage:** Custom coverage metrics verifying master load balancing, address map utilization, and interconnect contention.

## Hardware Synthesis (Artix-7 Target)

The design is strictly synthesizable and optimized for FPGA/ASIC implementation. 
*(Note: Run your local Vivado implementation to populate these metrics)*

| Metric | Utilization |
| :--- | :--- |
| **Target Device** | Xilinx Artix-7 (xc7a100t) |
| **LUTs** | ~950 |
| **FFs** | ~1100 |
| **Fmax** | > 150 MHz |

## Project Structure

- `rtl/interface/`: SystemVerilog interface definitions and parameter packages.
- `rtl/arbiter/`: Transaction-aware Round-Robin arbitration.
- `rtl/decoder/`: Address decoding and target identification.
- `rtl/interconnect/`: The multi-layer crossbar routing fabrics.
- `rtl/slaves/`: Peripheral models (Memory, Registers, UART dummy, Error responder).
- `tb/`: Verilator-based integration and unit testbenches.

## Getting Started

Ensure you have **Verilator (v5.020+)** installed.

```bash
# Clone the repository
git clone https://github.com/yourusername/axi4-lite-interconnect.git
cd axi4-lite-interconnect

# Run the full regression test suite (includes assertions and coverage)
make test_crossbar_2m3s
```

## Documentation

For deep-dives into the design and verification strategies, see the documentation:

1. [Architecture & Design](Architecture.md)
2. [Verification & Coverage](Verification.md)
3. [Timing Diagrams](Timing.md)
