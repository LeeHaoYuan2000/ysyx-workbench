module IFU(
    input  [63:0] PC_IN,
    input  [31:0] Instr_IN,
    output [63:0] PC_OUT,
    output [31:0] Instr_OUT
);

    assign PC_OUT    [63:0] = PC_IN    [63:0];
    assign Instr_OUT [31:0] = Instr_IN [31:0];

endmodule
