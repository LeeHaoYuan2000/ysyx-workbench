`define _and_ 4'd0
`define _xor_ 4'd1
`define _or_  4'd2



module Logic(
    input [63:0] src1,
    input [63:0] src2,
    input [3:0]  ControlOpt,
    output [63:0] result_out
);

wire [63:0] result_and = src1 & src2;
wire [63:0] result_xor = src1 ^ src2;
wire [63:0] result_or  = src1 | src2;

MuxKeyWithDefault #(3,4,64) LogicOpt_Mux (result_out,ControlOpt,64'd0,{
    4'd0,result_and[63:0],
    4'd1,result_xor[63:0],
    4'd2,result_or[63:0]
}); 
endmodule