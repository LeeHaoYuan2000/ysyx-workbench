

# 1.files info:
CSRC +=  $(shell find $(abspath ./csrc) -name "*.cpp")
VSRC +=  $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
TOP_MODULE := top
SEARCHPATH := $(abspath ./vsrc)

# 2.verilator flags:
VERILATOR_FLAGS += -I${SEARCHPATH}
VERILATOR_FLAGS += --top ${TOP_MODULE}
VERILATOR_FLAGS +=  -cc --trace --exe --build  -j 8  -CFLAGS -g -LDFLAGS "$(shell llvm-config --libs) -lreadline"#-CFLAGS -lreadline -CFLAGS -g #--threads 2
#VERILATOR_FLAGS += -Wno-fatal		# only print lint warning, but not terminate compile.
#VERILATOR_FLAGS += -Wno-UNUSED 		# close <unused> warning.

show:
	@echo $(SEARCHPATH)

compile:${CSRC} ${VSRC}
	@verilator ${VERILATOR_FLAGS} ${VSRC} ${CSRC}
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

.PHONY: clean all show compile

include ../Makefile
