verilator --cc mips.sv -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-COMBDLY -Wno-STMTDLY -Wno-INITIALDLY --no-timing --exe testbench.cpp
make -C obj_dir -f Vmips.mk
obj_dir/Vmips
