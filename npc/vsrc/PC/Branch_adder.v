module Branch_adder(
    input   [63:0] current_pc,
    input   [63:0] imm,
    output  [63:0] new_pc
);

    assign new_pc = current_pc + imm;
    
endmodule