module MUL(
    input [63:0] src1,
    input [63:0] src2,
    input  [3:0] control,
    output [63:0] result_out
);

wire [63:0]result = src1 * src2;

MuxKeyWithDefault #(2,4,64) MUX_mul (result_out,control,64'd0,{
        4'd0,{32{{result[31]}},result[31:0]},
        4'd1,result
}); 

endmodule