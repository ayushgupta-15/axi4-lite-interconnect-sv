# Makefile for AXI4-Lite Interconnect Project

SIM_DIR = sim
WAVES_DIR = $(SIM_DIR)/waves
LOGS_DIR = $(SIM_DIR)/logs

.PHONY: all clean test_axi_if test_decoder test_memory_slave

all:
	@echo "Please specify a target to build/simulate."

test_axi_if:
	mkdir -p $(LOGS_DIR)
	verilator --binary --timing -Wno-fatal -Irtl/interface rtl/interface/axi4_lite_if.sv tb/unit/axi4_lite_if_tb.sv --top-module axi4_lite_if_tb
	./obj_dir/Vaxi4_lite_if_tb > $(LOGS_DIR)/axi4_lite_if.log
	cat $(LOGS_DIR)/axi4_lite_if.log

test_decoder:
	mkdir -p $(LOGS_DIR)
	verilator --binary --timing -Wno-fatal rtl/decoder/axi_addr_decoder.sv tb/unit/axi_addr_decoder_tb.sv --top-module axi_addr_decoder_tb
	./obj_dir/Vaxi_addr_decoder_tb > $(LOGS_DIR)/axi_addr_decoder.log
	cat $(LOGS_DIR)/axi_addr_decoder.log

test_memory_slave:
	mkdir -p $(LOGS_DIR)
	verilator --binary --timing -Wno-fatal -Irtl/interface rtl/interface/axi4_lite_if.sv rtl/slaves/axi_memory_slave.sv tb/unit/axi_memory_slave_tb.sv --top-module axi_memory_slave_tb
	./obj_dir/Vaxi_memory_slave_tb > $(LOGS_DIR)/axi_memory_slave.log
	cat $(LOGS_DIR)/axi_memory_slave.log

clean:
	rm -rf $(WAVES_DIR)/* $(LOGS_DIR)/* $(SIM_DIR)/*.out obj_dir
