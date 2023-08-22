verilator -Wall --cc alu.sv --exe tests/alu_testbench.cpp
make -C obj_dir -f Valu.mk
obj_dir/Valu
