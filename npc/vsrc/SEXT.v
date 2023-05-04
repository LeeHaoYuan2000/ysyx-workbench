module SEXT(
    input [11:0] imms,
    output [63:0] SEXTout
);

Mux mux21 #(2,1,64) (SEXTout,imms[11],{
    1'b0,{52'h0000000000000,imms[11:0] & 12'b1111_1111_1111},                  //立即数的补码为正数
    1'b1,{52'hfffffffffffff,imms[11:0] & 12'b1111_1111_1111}                   //立即数的补码为负数
});

endmodule