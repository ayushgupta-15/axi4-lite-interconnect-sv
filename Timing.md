# Timing Diagrams

This document visualizes the standard AXI4-Lite handshake mechanics executed by the crossbar logic.

## Single Write Transaction

A Write transaction consists of the Address Phase (AW), Data Phase (W), and Response Phase (B). In this optimized crossbar, Address and Data can be dispatched concurrently.

```text
CLK         | ↑   | ↑   | ↑   | ↑   | ↑   | ↑   |
            |     |     |     |     |     |     |
AWVALID     | 0   | 1───| 0   | 0   | 0   | 0   |
AWREADY     | 0   | 1───| 0   | 0   | 0   | 0   |
            |     |     |     |     |     |     |
WVALID      | 0   | 1───| 0   | 0   | 0   | 0   |
WREADY      | 0   | 1───| 0   | 0   | 0   | 0   |
            |     |     |     |     |     |     |
BVALID      | 0   | 0   | 0   | 1───| 0   | 0   |
BREADY      | 1───| 1───| 1───| 1───| 1───| 1───|
```

*Note: The crossbar routes `AW` and `W` simultaneously to the target slave. Once the slave asserts `BVALID`, the crossbar routes the response back to the initiating master.*

## Single Read Transaction

A Read transaction consists of the Address Phase (AR) and Response Phase (R).

```text
CLK         | ↑   | ↑   | ↑   | ↑   | ↑   | ↑   |
            |     |     |     |     |     |     |
ARVALID     | 0   | 1───| 0   | 0   | 0   | 0   |
ARREADY     | 0   | 1───| 0   | 0   | 0   | 0   |
            |     |     |     |     |     |     |
RVALID      | 0   | 0   | 0   | 1───| 0   | 0   |
RREADY      | 1───| 1───| 1───| 1───| 1───| 1───|
```

## Arbitration Contention

When Master 0 and Master 1 request simultaneously, the arbiter enforces a rotation.

```text
CLK         | ↑   | ↑   | ↑   | ↑   | ↑   | ↑   |
            |     |     |     |     |     |     |
M0_AWVALID  | 0   | 1───| 1───| 1───| 0   | 0   |
M0_AWREADY  | 0   | 0   | 0   | 1───| 0   | 0   |
            |     |     |     |     |     |     |
M1_AWVALID  | 0   | 1───| 0   | 0   | 0   | 0   |
M1_AWREADY  | 0   | 1───| 0   | 0   | 0   | 0   |
```
*Note: In the above scenario, Priority starts at M1. M1 is granted immediately. M0 must hold `AWVALID` high until the arbiter rotates priority to M0, demonstrating VALID stability properties.*
