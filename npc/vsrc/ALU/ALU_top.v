
module ALU_top(
    input clk,
    input rst,

    input [63:0] src1,
    input [63:0] src2,
    input [3:0]  func_control,
    input [3:0]  inner_control,
    input        MEM_Enable, //CU tell ALU that this instruction need to access the MEM
    output [63:0] result_out,

    //CSR port
    output [11:0] CSR_Read_Addr,
    input  [63:0] CSR_Read_Data,

    output [11:0] CSR_Write_Addr,
    output [63:0] CSR_Write_Data,
    output        Write_En,

    output [63:0] mcause_Write_Data,
    input  [63:0] mcause_Read_Data,
    output        mcause_En,

    output [63:0] mepc_Write_Data,
    input  [63:0] mepc_Read_Data,
    output        mepc_En,

    output [63:0] mtvec_Write_Data,
    input  [63:0] mtvec_Read_Data,
    output        mtvec_En
);

//assign ALU_Finish = INSTR_Valid ? (MEM_Enable ? 1'b0: 1'b1) : 1'b0;

parameter MUX_Adder   = 4'd0;
parameter MUX_Shift   = 4'd1;
parameter MUX_Compare = 4'd2;
parameter MUX_DIV     = 4'd3;
parameter MUX_Logic   = 4'd4;
parameter MUX_MUL     = 4'd5;
parameter auipc       = 4'd6;
parameter lui         = 4'd7;
parameter MUX_CSR_OP  = 4'd8;

wire [63:0] Adder_out;
wire [63:0] Shift_out;
wire [63:0] Compare_out;
wire [63:0] DIV_out;
wire [63:0] Logic_out;
wire [63:0] MUL_out;
wire [63:0] CSR_OP_out;


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

CSR_OP csr_op(
    .src1(src1),
    .src2(src2),
    .control(inner_control),
    .result_out(CSR_OP_out), //output R(rd) or mem address

    .CSR_Read_Addr(CSR_Read_Addr),
    .CSR_Read_Data(CSR_Read_Data),

    .CSR_Write_Addr(CSR_Write_Addr),
    .CSR_Write_Data(CSR_Write_Data),
    .Write_En(Write_En),

    .mcause_Write_Data(mcause_Write_Data),
    .mcause_Read_Data(mcause_Read_Data),
    .mcause_En(mcause_En),

    .mepc_Write_Data(mepc_Write_Data),
    .mepc_Read_Data(mepc_Read_Data),
    .mepc_En(mepc_En),

    .mtvec_Write_Data(mtvec_Write_Data),
    .mtvec_Read_Data(mtvec_Read_Data),
    .mtvec_En(mtvec_En)
);

MuxKeyWithDefault #(9,4,64) Adder_mux (result_out,func_control,64'd0,{
    MUX_Adder   , Adder_out,  
    MUX_Shift   , Shift_out, 
    MUX_Compare , Compare_out,
    MUX_DIV     , DIV_out,    
    MUX_Logic   , Logic_out,  
    MUX_MUL     , MUL_out,
    auipc       , Adder_out,   
    lui         , src2,
    MUX_CSR_OP  , CSR_OP_out
});


endmodule