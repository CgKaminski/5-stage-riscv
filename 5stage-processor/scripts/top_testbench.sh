## verilator  --cc -Wall src/top.sv -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-COMBDLY -Wno-STMTDLY -Wno-INITIALDLY --no-timing --exe tests/top_testbench.cpp
verilator  --cc -Wall src/top.sv -Wno-WIDTHEXPAND -Wno-UNUSEDSIGNAL -Wno-WIDTHTRUNC --trace --exe tests/top_testbench.cpp
make -C obj_dir -f Vtop.mk
obj_dir/Vtop