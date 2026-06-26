# AXI4-Lite Interconnect (SystemVerilog)

A 2-Master by 3-Slave AXI4-Lite Bus Matrix implemented in SystemVerilog, featuring a self-checking testbench and UVM verification environment.

## Project Structure
- `rtl/`: SystemVerilog hardware modules
  - `interface/`: AXI4-Lite interfaces
  - `slaves/`: Memory and register slaves
  - `decoder/`: Address decoder
  - `arbiter/`: Round-robin arbiter
  - `crossbar/`: Routing logic
  - `top/`: Top-level integration
- `tb/`: Unit and integration testbenches
- `uvm/`: UVM verification environment
- `sva/`: SystemVerilog Assertions
- `sim/`: Simulation output (waves, logs)
- `vivado/`: Synthesis and implementation reports
- `docs/`: Documentation and diagrams
