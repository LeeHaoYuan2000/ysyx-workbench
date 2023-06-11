module Adder(
    input [63:0]src1,
    input [63:0]src2,
    input [3:0]control,  // 0 is src1 + src2, 1 is src1 - src2
    output [63:0] result_out
);

    wire [63:0] resultAdd  = src1[63:0] + src2[63:0];
    wire [63:0] resultSub  = src1[63:0] + ~src2[63:0] + 1'b1;


    MuxKeyWithDefault #(4,4,64) Adder_mux (result_out,control,resultAdd,{
        4'd0,resultAdd[63:0],  //src1 + src2
        4'd1,resultSub[63:0],   //src1 - src2
        4'd2,{{32{resultAdd[31]}},resultAdd[31:0]},  //SEXT add
        4'd3,{{32{resultSub[31]}},resultSub[31:0]}   //SEXT sub
}); 


endmodule