module top(
    input clk,
    input rst,
    
    input [31:0] instr_in,
    output [63:0] SEXT_result,
    output [63:0] PC_Test
);
    assign PC_Test = PC_Wire;
    wire [63:0]PC_Wire;
    wire [63:0]PC_Next_Wire;

    PC_Adder pc_adder (
        PC_Wire[63:0],
        PC_Next_Wire[63:0]
    );

    PC_Reg pc_reg (
        clk,
        rst,
        PC_Next_Wire,
        PC_Wire
    );

    IFU IFU_Lee(
        .PC_IN(PC_Wire),
        .Instr_IN(instr_in),
        .PC_OUT(PC_Test),
        .Instr_OUT(instruction)
    );

    wire [31:0] instruction;
    wire [2:0]  SEXT_Control;
    wire [3:0]  ALU_Control_wire;

    ControUnit HY_CU(
        .instr(instruction),
        .ALU_Control(ALU_Control_wire),
        .SEXT_Control(SEXT_Control)
    );

    SEXT Sign_Extend(
    .Instr(instruction),
    .ControlUnit(SEXT_Control),
    .SEXT_Out(SEXT_result)
    );


endmodule

