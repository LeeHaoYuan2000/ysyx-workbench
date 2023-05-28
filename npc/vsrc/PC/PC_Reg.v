/* verilator lint_off MODDUP */
module PC_Reg(
    input clk,
    input rst,
    input [63:0]PC_Next,
    output [63:0]PC
);

    Reg #(64,64'h0000_0000_8000_0000) pc_reg (clk,rst,PC_Next,PC,1'b1); //64bits PC

endmodule

