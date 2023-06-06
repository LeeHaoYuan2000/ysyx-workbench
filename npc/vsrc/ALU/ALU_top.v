`define MUX_Adder    4'd0
`define MUX_Shift    4'd1
`define MUX_Compare  4'd2
`define MUX_DIV      4'd3
`define MUX_Logic    4'd4
`define MUX_MUL      4'd5
`define lui          4'd6

module ALU_top(
    input [63:0] src1,
    input [63:0] src2,
    input [3:0]  func_control,
    input [3:0]  inner_control,
    output [63:0] result_out
);

wire [63:0] Adder_out;
wire [63:0] Shift_out;
wire [63:0] Compare_out;
wire [63:0] DIV_out;
wire [63:0] Logic_out;
wire [63:0] MUL_out;


Adder ALU_adder(
    .src1(src1),
    .src2(src2),
    .control(inner_control),  // 0 is src1 + src2, 1 is src1 - src2
    .result_out(Adder_out)
);

MUL ALU_mul(
    .src1(src1),
    .src2(src2),
    .control(inner_control),
    .result_out(MUL_out)
);

Logic ALU_Logic(
    .src1(src1),
    .src2(src2),
    .ControlOpt(inner_control),
    .result_out(Logic_out)
);

Shift ALU_Shift(
    .src1(src1),
    .src2(src2),
    .shift_control(inner_control),
    .shift_out(Shift_out)
);

Compare ALU_Compare(
    .src1(src1),
    .src2(src2),
    .Compare_Control(inner_control),
    .Compare_Result(Compare_out)
);

DIV ALU_DIV(
    .src1(src1),
    .src2(src2),
    .control(inner_control),   //0 is src1 / src2 , 1 is src1 % src2
    .result_out(DIV_out)
    );

MuxKeyWithDefault #(7,4,64) Adder_mux (result_out,func_control,64'd0,{
    MUX_Adder   , Adder_out,  
    MUX_Shift   , Shift_out, 
    MUX_Compare , Compare_out,
    MUX_DIV     , DIV_out,    
    MUX_Logic   , Logic_out,  
    MUX_MUL     , MUL_out,    
    lui         , src2        
}); 


endmodule