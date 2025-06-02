#!/usr/bin/env bash


verilator --binary -Wno-lint --vpi \
    test.sv \
    double_to_float_res.c \
    double_to_float/double_to_float.v \
    -o test_execut
