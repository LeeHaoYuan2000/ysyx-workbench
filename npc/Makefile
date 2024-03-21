

# 1.files info:
CSRC +=  $(shell find $(abspath ./csrc) -name "*.cpp")
VSRC +=  $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
TOP_MODULE := top
SEARCHPATH := $(abspath ./vsrc)

CSRC_WAVE += ./sim.cpp
VSRC_WAVE += ./vsrc/top.v ./vsrc/PC/PC_Reg.v ./vsrc/PC/PC_Adder.v ./vsrc/IFU/IFU.v
VSRC_WAVE += ./vsrc/Example/Reg.v
VSRC_WAVE += $(shell find $(abspath ./vsrc/AXI4-lite) -name "*.v" -or -name "*.sv")

# 2.verilator flags:
VERILATOR_FLAGS += -I${SEARCHPATH}
VERILATOR_FLAGS += --top ${TOP_MODULE}
VERILATOR_FLAGS +=  -cc --trace --exe --build  -j 8  -CFLAGS -g -LDFLAGS "$(shell llvm-config --libs) -lreadline -lSDL2 -ldl" #--threads 2
#VERILATOR_FLAGS += -Wno-fatal		# only print lint warning, but not terminate compile.
#VERILATOR_FLAGS += -Wno-UNUSED 		# close <unused> warning.

show:
	@echo $(SEARCHPATH)

compile:${CSRC} ${VSRC}
	@verilator ${VERILATOR_FLAGS} ${VSRC} ${CSRC} 
	./obj_dir/Vtop -d$(NEMU_HOME)/build/riscv64-nemu-interpreter-so $(IMG) 
#	gdb --args  ./obj_dir/Vtop -d$(NEMU_HOME)/build/riscv64-nemu-interpreter-so $(IMG) 
	
#	verilator -cc --trace --Wall $(Verilog_file) --exe $(Cpp_file)
#	make -j -C obj_dir -f Vtop.mk Vtop

  
clean:
	rm -rf obj_dir top.vcd
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@./obj_dir/Vtop

gtkwave:
	gtkwave $(shell find -name "*.vcd")

compile_just_wave:${CSRC_WAVE} ${VSRC_WAVE}
	@verilator ${VERILATOR_FLAGS} ${VSRC_WAVE} ${CSRC_WAVE} 
	./obj_dir/Vtop

.PHONY: clean all show compile 

include ../Makefile
