verilator --cc top.sv --exe tests/processor_testbench.cpp
make -C obj_dir -f Vtop.mk
obj_dir/Vtop
