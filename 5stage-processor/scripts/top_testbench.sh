verilator --cc src/top.sv -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-COMBDLY -Wno-STMTDLY -Wno-INITIALDLY --no-timing --exe top_testbench.cpp
make -C obj_dir -f Vtop.mk
obj_dir/top
