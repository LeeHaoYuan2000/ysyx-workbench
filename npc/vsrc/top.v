module top(
    input clk,
    input rst,
    output [63:0] PC_Test
);

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

    wire [63:0]PC_Wire;
    wire [63:0]PC_Next_Wire;
endmodule