# Makefile for AXI4-Lite Interconnect Project

SIM_DIR = sim
WAVES_DIR = $(SIM_DIR)/waves
LOGS_DIR = $(SIM_DIR)/logs

.PHONY: all clean

all:
	@echo "Please specify a target to build/simulate."

clean:
	rm -rf $(WAVES_DIR)/* $(LOGS_DIR)/*
