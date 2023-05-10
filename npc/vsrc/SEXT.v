//module SEXT(
//    input [11:0] imms,
//    output reg [63:0] SEXTout
//);

//MuxKey  #(2,1,64) mux21 (SEXTout,imms[11],{
//    1'b0,{52'h0000000000000,imms[11:0] & 12'b1111_1111_1111},                  //立即数的补码为正数
//    1'b1,{52'hfffffffffffff,imms[11:0] & 12'b1111_1111_1111}                   //立即数的补码为负数
//});

//always @(*) begin
//    case(imms[11])
//        1'b0: SEXTout[63:0] = {{52{imms[11]}},imms[11:0]};
//        1'b1: SEXTout[63:0] = {{52{imms[11]}},imms[11:0]};
//    endcase
    
//end

//endmodule


module SEXT(
    input [11:0] imms,
    output [63:0] SEXTout
);

//MuxKey  #(2,1,64) mux21 (SEXTout,imms[11],{
//    1'b0,{52'h0000000000000,imms[11:0] & 12'b1111_1111_1111},                  //立即数的补码为正数
//    1'b1,{52'hfffffffffffff,imms[11:0] & 12'b1111_1111_1111}                   //立即数的补码为负数
//});

reg [63:0] _SEXTout;
always @(*) begin
    case(imms[11])
        1'b0: _SEXTout[63:0] = {{52{imms[11]}},imms[11:0]};
        1'b1: _SEXTout[63:0] = {{52{imms[11]}},imms[11:0]};
    endcase

end

assign SEXTout = _SEXTout;

endmodule