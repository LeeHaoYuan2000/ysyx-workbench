module top(
    input clk,
    input rst,
    input [31:0] instr_in,
    output [31:0] instr_out,
    output [63:0] PC_Test
);
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
        .Instr_OUT(instr_out)
    );



endmodule

