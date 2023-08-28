verilator -Wall --cc src/controller.sv --exe tests/controller_testbench.cpp
make -C obj_dir -f Vcontroller.mk
obj_dir/Vcontroller