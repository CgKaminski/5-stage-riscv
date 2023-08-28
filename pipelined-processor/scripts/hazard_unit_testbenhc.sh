verilator -Wall --cc src/hazard_unit.sv --exe tests/hazard_unit_testbench.cpp
make -C obj_dir -f Vhazard_unit.mk
obj_dir/Vhazard_unit