module DIV(
    input [63:0] src1,
    input [63:0] src2,
    input [3:0] control,   //0 is src1 / src2 , 1 is src1 % src2
    output [63:0] result_out
    );

wire signed [31:0] S_src1;
wire signed [31:0] S_src2;

assign  S_src1 = src1[31:0];
assign  S_src2 = src2[31:0];

wire signed [31:0] divw = S_src1 / S_src2;
wire signed [31:0] remw = S_src1 % S_src2;

MuxKeyWithDefault #(2,4,64) DIV (result_out,control,64'd0,{
    4'd0 , {{32{divw[31]}},divw[31:0]},
    4'd1 , {{32{remw[31]}},remw[31:0]}
});

endmodule