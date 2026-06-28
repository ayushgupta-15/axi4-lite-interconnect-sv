# Interconnect Architecture

This document details the architectural choices and structural design of the AXI4-Lite Multi-Master Interconnect.

## Topology

The interconnect implements a **2-Master, 3-Slave** shared-bus architecture.

### Channel Routing

The AXI4-Lite protocol consists of 5 decoupled channels:
1. **AW** (Write Address)
2. **W** (Write Data)
3. **B** (Write Response)
4. **AR** (Read Address)
5. **R** (Read Data)

To minimize latency and logic complexity, the interconnect physically separates the **Write Fabric** (AW, W, B) from the **Read Fabric** (AR, R). This separation allows a Read transaction and a Write transaction to occur simultaneously without blocking each other.

### Arbitration (Multi-Master)

The crossbar features a **Round-Robin Arbiter** (`round_robin_arbiter.sv`) positioned in front of the interconnect.
- **Fairness:** Priority shifts to the next master only after a transaction is successfully dispatched.
- **Transaction-Aware:** The arbiter rotation uses an `update_en` trigger linked to the AXI Handshake (`VALID && READY`). This ensures that if a slave is backpressuring (`READY = 0`), the arbiter does not prematurely strip the grant from the active master.
- **Registered Grants:** The arbitration decision is latched during the address phase to guarantee stable routing during the subsequent data and response phases.

### Address Decoding & Target Multiplexing

The `axi_addr_decoder.sv` handles transaction routing based on the 32-bit address.

| Target Slave | Base Address | Size |
| :--- | :--- | :--- |
| **Memory** | `0x0000_0000` | 4 KB |
| **Register** | `0x0000_1000` | 4 KB |
| **UART Dummy** | `0x0000_2000` | 4 KB |
| **Error** | *Everything else* | - |

The decoder generates a 1-hot target bus. If an address falls outside mapped regions, the request is routed to the **Error Slave**.

### Outstanding Transactions

For simplicity and synthesis efficiency, the crossbar inherently limits transactions to **1 outstanding read** and **1 outstanding write** per master. This is enforced structurally by tracking the `BVALID` / `BREADY` and `RVALID` / `RREADY` completion signals before allowing subsequent transactions to pass the multiplexers.

### The Error Slave

Invalid address requests are gracefully handled by `axi_error_slave.sv`. It completes the AXI handshake normally but returns `RESP_SLVERR` (Slave Error, `2'b10`). This prevents the entire interconnect bus from hanging when a CPU requests an unmapped address segment.
