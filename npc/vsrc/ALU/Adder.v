module Adder(
    input [63:0]src1,
    input [63:0]src2,
    input control,  // 0 is src1 + src2, 1 is src1 - src2
    output [63:0] result_out,
    output cout
);

    wire [64:0] resultAdd  = src1[63:0] + src2[63:0];
    wire [64:0] resultSub  = src1[63:0] + ~src2[63:0] + 1'b1;

    assign cout = control ? resultSub[64] : resultAdd[64];

    MuxKeyWithDefault #(2,1,64) Adder_mux (result_out,control,resultAdd,{
        1'b0,resultAdd[63:0],  //src1 + src2
        1'b1,resultSub[63:0]   //src1 - src2
}); 


endmodule