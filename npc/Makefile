

#Find the src file
Verilog_file += $(shell find vsrc -name "*.v") #find all the Verilog file
Verilog_file += $(shell find vsrc/Example -name "*.v") #find all the Verilog file
Verilog_file += $(shell find vsrc/PC -name "*.v") #find all the Verilog file
#Verilog_file += $(shell find vsrc/IFU -name "*.v") #find all the Verilog file
Cpp_file += $(shell find csrc -name "*.cpp") #find cpp file in the folder

show:
	@echo $(Verilog_file)

compile:
	@verilator  $(Verilog_file) --cc  
	@verilator -cc --trace --Wall $(Verilog_file) --exe $(Cpp_file)
	@make -j -C obj_dir -f Vtop.mk Vtop
	@./obj_dir/Vtop

clean:
	rm -rf obj_dir
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

.PHONY: clean all show compile

include ../Makefile
