# Makefile for AXI4-Lite Interconnect Project

SIM_DIR = sim
WAVES_DIR = $(SIM_DIR)/waves
LOGS_DIR = $(SIM_DIR)/logs

.PHONY: all clean test_axi_if test_decoder

all:
	@echo "Please specify a target to build/simulate."

test_axi_if:
	mkdir -p $(LOGS_DIR)
	iverilog -g2012 -I rtl/interface rtl/interface/axi4_lite_if.sv tb/unit/axi4_lite_if_tb.sv -o $(SIM_DIR)/axi4_lite_if_tb.out
	vvp $(SIM_DIR)/axi4_lite_if_tb.out > $(LOGS_DIR)/axi4_lite_if.log
	cat $(LOGS_DIR)/axi4_lite_if.log

test_decoder:
	mkdir -p $(LOGS_DIR)
	iverilog -g2012 rtl/decoder/axi_addr_decoder.sv tb/unit/axi_addr_decoder_tb.sv -o $(SIM_DIR)/axi_addr_decoder_tb.out
	vvp $(SIM_DIR)/axi_addr_decoder_tb.out > $(LOGS_DIR)/axi_addr_decoder.log
	cat $(LOGS_DIR)/axi_addr_decoder.log

clean:
	rm -rf $(WAVES_DIR)/* $(LOGS_DIR)/* $(SIM_DIR)/*.out
