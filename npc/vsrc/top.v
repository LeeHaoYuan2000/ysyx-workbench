/* verilator lint_off UNOPTTHREADS */
module top(
    input clk,
    input rst,
    
    input [31:0] instr_in,
    output [63:0] SEXT_result,
    output [63:0] PC_Test,
    output [2:0]  SEXT_Control_out,
    output [63:0] RS1_OUTPUT,
    output [63:0] RS2_OUTPUT
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
    assign SEXT_Control_out = SEXT_Control;



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


    CSR HY_RegFile(
    .clk(clk),
    .rst(rst),
    .RS1(instruction[19:15]),
    .RS2(instruction[24:20]),
    .RD(instruction[11:7]),
    .RD_Back(64'd1),
    .Enable_Control(1'd0), //Write Back enable
    .RS1_Reg(RS1_OUTPUT),
    .RS2_Reg(RS2_OUTPUT)
);


endmodule

