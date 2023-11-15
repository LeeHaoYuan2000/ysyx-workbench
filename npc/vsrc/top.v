
module top(
    input clk,
    input rst,
    
    input [31:0] instr_in, 
    output [63:0] SEXT_result,
    output [63:0] PC_Test,
    output [2:0]  SEXT_Control_out,
    output [63:0] RS1_OUTPUT,
    output [63:0] RS2_OUTPUT,
    output [63:0] ALU_Result,

    output        MEM_Enable,//存储器使能信号
    output        MEM_Read,// 1 存储器读取 ， 0  存储器写入
    output [3:0]  MEM_DataLenth,
    output [63:0] MEM_Addr,//存储地址
    output [63:0] MEM_Dataoutput,//向存储器写入数据
    input  [63:0] MEM_Datainput,//读取存储器的数据

    output WriteBack_Enable_result,
    output C_RS1_PC_Connector_result,
    output C_RS2_imm_Connector_result,
    output C_ALU_MEM_Connector_result,
    output C_ALU_NPC_In_Connector_result,
    output [1:0] C_NPC_Branch_Jump_Connector_result
);

    parameter MUX_Output_RS1 = 1'b0;
    parameter MUX_Output_PC  = 1'b1;
    parameter MUX_Output_RS2 = 1'b0;
    parameter MUX_Output_imm = 1'b1;


    assign WriteBack_Enable_result               = WriteBack_Enable;
    assign C_RS1_PC_Connector_result             = C_RS1_PC_Connector;
    assign C_RS2_imm_Connector_result            = C_RS2_imm_Connector;
    assign C_ALU_MEM_Connector_result            = C_ALU_MEM_Connector;
    assign C_ALU_NPC_In_Connector_result         = C_ALU_NPC_In_Connector;
    assign C_NPC_Branch_Jump_Connector_result    = C_NPC_Branch_Jump_Connector;

    assign PC_Test = PC_Wire;
    wire [63:0]PC_Wire;
    wire [63:0]PC_Next_Wire;
    wire [63:0]PC_Next_Next;

    PC_Adder pc_adder (
       .PC(PC_Wire[63:0]),
        .PC_Next(PC_Next_Wire[63:0])
    );

    PC_Reg pc_reg (
         .clk(clk),
         .rst(rst),
        .PC_Next(PC_Next_Next),
        .PC(PC_Wire)
    );

    IFU IFU_Lee(
        .clk(clk),
        .rst(rst),
    //IFU control signal    
        .INSTR_ENABLE(), //CU allow fetch next instruction
        .ALU_MEM_Finish(), //ALU or MEM operation done
        .busy(), //send busy signal to the CU
    //PC input and instruction to next stage
        .PC_IN(),
        .INSTR(),

    //AXI
        .AXI_READ_DONE(Finish_IFU_AXI),
        .Send_Signal(Send_Signal_IFU_AXI), //send begin signal to axi 
        .INSTR_VALID(),
        .AXI4_ADDR(Addr_IFU_AXI),
        .AXI4_DATA(Data_IFU_AXI)
    );

    wire Send_Signal_IFU_AXI;
    wire Finish_IFU_AXI;
    wire Addr_IFU_AXI;
    wire Data_IFU_AXI;

    AXI4_READ_MASTER IFU_AXI_Read(
    .clk(clk),
    .rst_n(rst),
    .Send_Signal(Send_Signal_IFU_AXI), //when Send_Signal is 1, then begin the send signal
    .Send_Finish(Finish_IFU_AXI), //when data received, send 1 to outside axi4 finished

    .ADDR(Addr_IFU_AXI),  //data address
    .receive_DATA(Data_IFU_AXI),

//Read Address Channel
    .AR_ADDR(),
    .AR_VALID(),
    .AR_PROT(), //won't be use in this module
    .AR_READY(),

//Read DATA Channel
    .R_DATA(),
    .R_RESP(), // this port may won`t use in this module
    .R_VALID(), 
    .R_READY()
    );


    AXI4_InterConnect AXI4_Arbiter(
        //IFU prot 
    input  IFU_READ_ENABLE,

    //Read Address Channel
    input [63:0] AR_ADDR_IFU,
    input AR_VALID_IFU,
    input [2:0]AR_PROT_IFU, //won't be use in this module
    output  AR_READY_IFU,

    //Read DATA Channel
    output [63:0]R_DATA_IFU,
    output R_RESP_IFU, // this port may won`t use in this module
    output R_VALID_IFU, 
    input R_READY_IFU,

//MEM Read Port
    input MEM_READ_ENABLE,
    //Read Address Channel
    input [63:0] AR_ADDR_MEM,
    input AR_VALID_MEM,
    input [2:0]AR_PROT_MEM, //won't be use in this module
    output  AR_READY_MEM,

    //Read DATA Channel
    output [63:0]R_DATA_MEM,
    output R_RESP_MEM, // this port may won`t use in this module
    output R_VALID_MEM, 
    input  R_READY_MEM,

//MEM Write Prot
    input MEM_WRITE_ENABLE,

    //WRite Address Channel
    input  [63:0] AW_ADDR_MEM, // this 
    input  AW_VALID_MEM,
    input [2:0] AW_PORT_MEM, //normally ignore the pin in the AXI4-lite
    output  AW_READY_MEM,

    // Write Data Channel
    input [63:0] W_DATA_MEM,
    input [7:0] W_STRB_MEM, //
    input W_VALID_MEM,
    output  W_READY_MEM,

    //Write Response Channel
    output B_RESP_MEM,
    input B_READY_MEM,
    output B_VALID_MEM,

//Slave port
    //Slave Read
    //Read Address Channel
    output reg [63:0] AR_ADDR_Slave,
    output reg AR_VALID_Slave,
    output reg [2:0]AR_PROT_Slave, //won't be use in this module
    input  AR_READY_Slave,

    //Read DATA Channel
    input [63:0]R_DATA_Slave,
    input R_RESP_Slave, // this port may won`t use in this module
    input R_VALID_Slave, 
    output R_READY_Slave,

    //Slave Write
    //WRite Address Channel
    output [63:0] AW_ADDR_Slave, // this 
    output AW_VALID_Slave,
    output[2:0] AW_PORT_Slave, //normally ignore the pin in the AXI4-lite
    input  AW_READY_Slave,

    // Write Data Channel
    output [63:0] W_DATA_Slave,
    output [7:0] W_STRB_Slave, //
    output W_VALID_Slave,
    input  W_READY_Slave,

    //Write Response Channel
    input B_RESP_Slave,
    output B_READY_Slave,
    input B_VALID_Slave
    );


    wire [31:0] instruction;
    wire [2:0]  SEXT_Control;
    wire [3:0]  ALU_Control_wire;
    assign SEXT_Control_out = SEXT_Control;

    ControUnit HY_CU(
        .instr(instruction),
        .Branch_Yes_No(ALU_Result_Connector[0]), //1 for branch , 0 for npc
        .ALU_Control(ALU_Control_wire),
        .Inside_Control(Insider_Control_Connector),
        .SEXT_Control(SEXT_Control),

        .RegWriteEnable(WriteBack_Enable), //1 for enable ,0 for disable
        //数据通路控制
        .C_RS1_PC(C_RS1_PC_Connector), //0 RS1  , 1 PC
        .C_RS2_imm(C_RS2_imm_Connector), //0 Rs2  , 1 imm
        .C_ALU_MEM(C_ALU_MEM_Connector), //0 ALU  , 1 MEM
        .C_ALU_NPC_In(C_ALU_NPC_In_Connector), //0 ALU , 1 NPC
        .C_NPC_Branch_Jump(C_NPC_Branch_Jump_Connector), // 0 is NPC, 1 is Branch and jal , 2 is jalr 
        .MEM_Ctrl(MEM_Ctrl_connector),
        .MEM_Enable(MEM_Enable_Connector)
    );

    SEXT Sign_Extend(
        .Instr(instruction),
        .ControlUnit(SEXT_Control),
        .SEXT_Out(SEXT_Connector)
    );

    wire [63:0] SEXT_Connector;
    assign SEXT_result = SEXT_Connector;


    CSR HY_RegFile(
    .clk(clk),
    .rst(rst),
    .RS1(instruction[19:15]),
    .RS2(instruction[24:20]),
    .RD(instruction[11:7]),
    .RD_Back(Write_Back_Reg),
    .Enable_Control(WriteBack_Enable), //Write Back enable
    .RS1_Reg(RS1_Connector),
    .RS2_Reg(RS2_Connector)
);

MEM HY_MEM(
    .clk(clk),
    .MEM_Address(ALU_Result_Connector),
    .Data_Write(RS2_Connector),
    .MEM_Enable(MEM_Enable_Connector),
    .Ctrl(MEM_Ctrl_connector),
    .MEM_Data_out(MEM_Result_Connector),

    .MEM_Enable_Top( MEM_Enable ),
    .MEM_Read_Top( MEM_Read ),
    .MEM_DataLenth_Top( MEM_DataLenth ),
    .MEM_Addr_Top( MEM_Addr ),
    .MEM_Dataoutput_Top( MEM_Dataoutput ),
    .MEM_Dataiput_Top( MEM_Datainput )
);

wire [63:0] RS1_Connector;
wire [63:0] RS2_Connector;
wire [63:0] MUX_Reg_PC_2ALU_Result;
wire [63:0] MUX_Reg_imm_2ALU_Result;
wire [63:0] MUX_ALU_MEM_Result;
assign RS1_OUTPUT = RS1_Connector;
assign RS2_OUTPUT = RS2_Connector;


wire MEM_Enable_Connector;
wire [3:0] MEM_Ctrl_connector;
wire WriteBack_Enable;
wire C_RS1_PC_Connector;
wire C_RS2_imm_Connector;
wire C_ALU_MEM_Connector;
wire C_ALU_NPC_In_Connector;
wire [1:0] C_NPC_Branch_Jump_Connector;

assign WriteBack_Enable_result = WriteBack_Enable;

MuxKeyWithDefault #(2,1,64) MUX_Reg_PC_2ALU (MUX_Reg_PC_2ALU_Result, C_RS1_PC_Connector , 64'd0 ,{
    MUX_Output_RS1 , RS1_Connector,
    MUX_Output_PC  , PC_Wire
});

MuxKeyWithDefault #(2,1,64) MUX_RS2_imm_2ALU (MUX_Reg_imm_2ALU_Result, C_RS2_imm_Connector , 64'd0 ,{
    MUX_Output_RS2 , RS2_Connector,
    MUX_Output_imm , SEXT_Connector
});

parameter MUX_Output_ALU = 1'b0;
parameter MUX_Output_MEM = 1'b1;

// parameter MUX_Output_PC  = 1'b1;

parameter MUX_NPC    = 2'd0;
parameter MUX_Branch = 2'd1;
parameter MUX_Jump   = 2'd2;

wire [63:0] MEM_Result_Connector;
wire [63:0] Write_Back_Reg;
wire [63:0] Branch_PC;

MuxKeyWithDefault #(2,1,64) MUX_ALU_MEM (MUX_ALU_MEM_Result, C_ALU_MEM_Connector , 64'd0 ,{
    MUX_Output_ALU , ALU_Result_Connector,
    MUX_Output_MEM , MEM_Result_Connector
});

MuxKeyWithDefault #(2,1,64) MUX_PC_ALU (Write_Back_Reg, C_ALU_NPC_In_Connector , 64'd0 ,{
    MUX_Output_ALU , MUX_ALU_MEM_Result,
    MUX_Output_PC , PC_Next_Wire
});

MuxKeyWithDefault #(3,2,64) MUX_NPC_Branch_Jump (PC_Next_Next, C_NPC_Branch_Jump_Connector , 64'd0 ,{
    MUX_NPC ,PC_Next_Wire,//MUX_ALU_MEM_Result,
    MUX_Branch , Branch_PC,
    MUX_Jump , ALU_Result_Connector
});

Branch_adder branch_add(
        .current_pc(PC_Wire),
        .imm(SEXT_Connector),
        .new_pc(Branch_PC)
);


wire [63:0] ALU_Result_Connector;
wire [3:0]  Insider_Control_Connector;
assign ALU_Result = ALU_Result_Connector;

ALU_top HY_ALU_top(
    .src1(MUX_Reg_PC_2ALU_Result),
    .src2(MUX_Reg_imm_2ALU_Result),
    .func_control(ALU_Control_wire),
    .inner_control(Insider_Control_Connector),
    .result_out(ALU_Result_Connector)
);


endmodule

