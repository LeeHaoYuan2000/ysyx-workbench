
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

    CSR HY_CSR(
        .rst(rst),
        .clk(clk),

        .read_address(CSR_Read_Addr_Wire),
        .read_result(CSR_Read_Result_Wire),

        .write_address(CSR_Write_Addr_Wire),
        .wirte_date(CSR_Write_Data_Wire),
        .write_en(CSR_Write_en_Wire),

        .mcause_in(mcause_in_Wire),
        .mcause(mcause_Wire).
        .mcause_wen(mcause_wen_Wire).

        .mepc_in(mepc_in_Wire),
        .mepc(mepc_Wire),
        .mepc_wen(mepc_wen_Wire).

        .mtvec_in(mtvec_in_Wire),
        .mtvec(mtvec_Wire),
        .mtvec_wen(mtvec_wen_Wire)
    );

    wire [11:0] CSR_Read_Addr_Wire;
    wire [63:0] CSR_Read_Result_Wire;
    wire [11:0] CSR_Write_Addr_Wire;
    wire [63:0] CSR_Write_Data_Wire;
    wire        CSR_Write_en_Wire;
    wire [63:0] mcause_in_Wire;
    wire [63:0] mcause_Wire;
    wire        mcause_wen_Wire;
    wire [63:0] mepc_in_Wire;
    wire [63:0] mepc_Wire;
    wire        mepc_wen_Wire;
    wire [63:0] mtvec_in_Wire;
    wire [63:0] mtvec_Wire;
    wire        mtvec_wen_Wire;


    ALU_top HY_ALU_TOP(
    .clk(clk),
    .rst(rst),

    .src1(src1),
    .src2(src2),
    .func_control(ALU_Control_wire),
    .inner_control(Insider_Control_Connector),
    .MEM_Enable(), //CU tell ALU that this instruction need to access the MEM
    .result_out(ALU_Result_Connector),

    //CSR port
    .CSR_Read_Addr(CSR_Read_Addr_Wire),
    .CSR_Read_Data(CSR_Read_Result_Wire),

    .CSR_Write_Addr(CSR_Write_Addr_Wire),
    .CSR_Write_Data(CSR_Write_Data_Wire),
    .Write_En(CSR_Write_en_Wire),

    .mcause_Write_Data(mcause_in_Wire),
    .mcause_Read_Data(mcause_Wire),
    .mcause_En(mcause_wen_Wire),

    .mepc_Write_Data(mepc_in_Wire),
    .mepc_Read_Data(mepc_Wire),
    .mepc_En(mepc_wen_Wire),

    .mtvec_Write_Data(mtvec_in_Wire),
    .mtvec_Read_Data(mtvec_Wire),
    .mtvec_En(mtvec_wen_Wire),

    .INSTR_Valid(INSTR_VALID_Wire),//IFU tell the ALU INSTR is valid
    //output ,tell the ifu ALU operation is done 
    .ALU_Finish(ALu_Finish_Wire)
    );

    wire INSTR_VALID_Wire;/// tell the ALU instr is ready
    wire ALu_Finish_Wire; //send finish signal back to the IFU

    IFU IFU_Lee(
        .clk(clk),
        .rst(rst),
    //IFU control signal    
        .INSTR_ENABLE(), //CU allow fetch next instruction
        .ALU_MEM_Finish(ALu_Finish_Wire), //ALU or MEM operation done
        .busy(), //send busy signal to the CU
        .INSTR_VALID(INSTR_VALID_Wire),
    //PC input and instruction to next stage
        .PC_IN(PC_Wire),
        .INSTR(),

    //AXI
        .AXI_READ_DONE(Finish_IFU_AXI),
        .Send_Signal(Send_Signal_IFU_AXI), //send begin signal to axi 
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
    .AR_ADDR(AR_Addr_wire),
    .AR_VALID(AR_Valid_wire),
    .AR_PROT(AR_Port_Wire), //won't be use in this module
    .AR_READY(AR_Ready_Wire),

//Read DATA Channel
    .R_DATA(R_Data_Wire),
    .R_RESP(R_Resp_Wire), // this port may won`t use in this module
    .R_VALID(R_Valid_wire), 
    .R_READY(R_Ready_Wire)
    );


    //MEM
    MEM HY_MEM(
    .clk(clk),
    .rst(rst),
    .MEM_Address(ALU_Result_Connector),
    .Data_Write(RS2_Connector),
    .MEM_Enable(MEM_Enable_Connector),
    .Ctrl(MEM_Ctrl_connector),
    .MEM_Data_out(MEM_Result_Connector),
    .MEM_Finish(),

    //AXI4 port
        //axi4 write
    .Write_Start(Write_Start_Wire),
    .Finish_Write(Finish_Write_Wire),
    .Write_ADDR(Write_Addr_wire),
    .Write_Data(Write_Data_Wire),
        //AXI4 read
    .Read_Start(Read_Start_Wire),
    .Finish_Read(Finishi_Read_Wire),
    .Read_ADDR(Read_Addr_Wire),
    .Read_Data(Read_Data_Wire)
    );

    //connection between AXI anb MEM
    wire Write_Start_Wire;
    wire Finish_Write_Wire;
    wire [63:0] Write_Addr_wire;
    wire [63:0] Write_Data_Wire;

    wire Read_Start_Wire;
    wire Finishi_Read_Wire;
    wire [63:0]Read_Addr_Wire;
    wire [63:0]Read_Data_Wire;


    AXI4_READ_MASTER MEM_AXI_Read(
    .clk(clk),
    .rst_n(rst),
    .Send_Signal(Read_Start_Wire), //when Send_Signal is 1, then begin the send signal
    .Send_Finish(Finishi_Read_Wire), //when data received, send 1 to outside axi4 finished

    .ADDR(Read_Addr_Wire),  //data address
    .receive_DATA(Read_Data_Wire),

//Read Address Channel
    .AR_ADDR(MEM_AR_Addr_Wire),
    .AR_VALID(MEM_AR_Valid_Wire),
    .AR_PROT(MEM_AR_Port_Wire), //won't be use in this module
    .AR_READY(MEM_AR_Ready_Wire),

//Read DATA Channel
    .R_DATA(MEM_R_Data_wire),
    .R_RESP(MEM_R_Resp_Wire), // this port may won`t use in this module
    .R_VALID(MEM_R_Valid_Wire), 
    .R_READY(MEM_R_Ready_Wire)
    );

    AXI4_WRITE_MASTER MEM_AXI_Write(
        .clk(clk),
        .rst(rst),
        .Start(Write_Start_Wire),
        .Finish(Finish_Write_Wire),
        .WRITE_ADDR(Write_Addr_wire),
        .WRITE_DATA(Write_Data_Wire),
        //WRite Address Channel
        .AW_ADDR(MEM_AW_Addr_Wire), // this 
        .AW_VALID(MEM_AW_Valid_Wire),
        .AW_PORT(MEM_AW_Port_Wire), //normally ignore the pin in the AXI4-lite
        .AW_READY(AW_Ready_Wire),
        // Write Data Channel
        .W_DATA(MEM_W_Data_Wire),
        .W_STRB(MEM_W_STRB_Wire), //
        .W_VALID(MEM_W_Valid_Wire),
        .W_READY(MEM_W_Ready_Wire),
        //Write Response Channel
        .B_RESP(MEM_B_Resp_Wire),
        .B_READY(MEM_B_Ready_Wire),
        .B_VALID(MEM_B_Valid_Wire)
    );



    //IFU AXI connection
    wire [63:0]AR_Addr_wire;
    wire       AR_Valid_wire;
    wire       AR_Port_Wire;
    wire       AR_Ready_Wire;
    wire [63:0]R_Data_Wire;
    wire       R_Resp_Wire;
    wire       R_Valid_wire;
    wire       R_Ready_Wire;

    //MEM AXI connection 
    wire [63:0] MEM_AR_Addr_Wire;
    wire        MEM_AR_Valid_Wire;
    wire        MEM_AR_Port_Wire;
    wire        MEM_AR_Ready_Wire;
    wire [63:0] MEM_R_Data_wire;
    wire        MEM_R_Resp_Wire;
    wire        MEM_R_Valid_Wire;
    wire        MEM_R_Ready_Wire;

    wire [63:0] MEM_AW_Addr_Wire;
    wire        MEM_AW_Valid_Wire;
    wire        MEM_AW_Port_Wire;
    wire        MEM_AW_Ready_Wire;
    wire [63:0] MEM_W_Data_Wire;
    wire        MEM_W_STRB_Wire;
    wire        MEM_W_Valid_Wire;
    wire        MEM_W_Ready_Wire;
    wire        MEM_B_Resp_Wire;
    wire        MEM_B_Ready_Wire;
    wire        MEM_B_Valid_Wire;



    AXI4_InterConnect AXI4_Arbiter(
        //IFU prot 
    .IFU_READ_ENABLE(),

    //Read Address Channel
    .AR_ADDR_IFU(AR_Addr_wire),
    .AR_VALID_IFU(AR_Valid_wire),
    .AR_PROT_IFU(AR_Port_Wire), //won't be use in this module
    .AR_READY_IFU(AR_Ready_Wire),

    //Read DATA Channel
    .R_DATA_IFU(R_Data_Wire),
    .R_RESP_IFU(R_Resp_Wire), // this port may won`t use in this module
    .R_VALID_IFU(R_Valid_wire), 
    .R_READY_IFU(R_Ready_Wire),

//MEM Read Port
    .MEM_READ_ENABLE(),
    //Read Address Channel
    .AR_ADDR_MEM(MEM_AR_Addr_Wire),
    .AR_VALID_MEM(MEM_AR_Valid_Wire),
    .AR_PROT_MEM(MEM_AR_Port_Wire), //won't be use in this module
    .AR_READY_MEM(MEM_AR_Ready_Wire),

    //Read DATA Channel
    .R_DATA_MEM(MEM_R_Data_wire),
    .R_RESP_MEM(MEM_R_Resp_Wire), // this port may won`t use in this module
    .R_VALID_MEM(MEM_R_Valid_Wire), 
    .R_READY_MEM(MEM_R_Ready_Wire),

//MEM Write Prot
    .MEM_WRITE_ENABLE(),

    //WRite Address Channel
    .AW_ADDR_MEM(MEM_AW_Addr_Wire), // this 
    .AW_VALID_MEM(MEM_AW_Valid_Wire),
    .AW_PORT_MEM(MEM_AW_Port_Wire), //normally ignore the pin in the AXI4-lite
    .AW_READY_MEM(MEM_AW_Ready_Wire),

    // Write Data Channel
    .W_DATA_MEM(MEM_W_Data_Wire),
    .W_STRB_MEM(MEM_W_STRB_Wire),//
    .W_VALID_MEM(MEM_W_Valid_Wire),
    .W_READY_MEM(MEM_W_Ready_Wire),

    //Write Response Channel
    .B_RESP_MEM(MEM_B_Resp_Wire),
    .B_READY_MEM(MEM_B_Ready_Wire),
    .B_VALID_MEM(MEM_B_Valid_Wire),

//Slave port
    //Slave Read
    //Read Address Channel
    .AR_ADDR_Slave(),
    .AR_VALID_Slave(),
    .AR_PROT_Slave(), //won't be use in this module
    .AR_READY_Slave(),

    //Read DATA Channel
    .R_DATA_Slave(),
    .R_RESP_Slave(), // this port may won`t use in this module
    .R_VALID_Slave(), 
    .R_READY_Slave(),

    //Slave Write
    //WRite Address Channel
    .AW_ADDR_Slave(), // this 
    .AW_VALID_Slave(),
    .AW_PORT_Slave(), //normally ignore the pin in the AXI4-lite
    .AW_READY_Slave(),

    // Write Data Channel
    .W_DATA_Slave(),
    .W_STRB_Slave(), //
    .W_VALID_Slave(),
    .W_READY_Slave(),

    //Write Response Channel
    .B_RESP_Slave(),
    .B_READY_Slave(),
    .B_VALID_Slave()
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


    REG HY_RegFile(
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

// MEM HY_MEM(
//     .clk(clk),
//     .MEM_Address(ALU_Result_Connector),
//     .Data_Write(RS2_Connector),
//     .MEM_Enable(MEM_Enable_Connector),
//     .Ctrl(MEM_Ctrl_connector),
//     .MEM_Data_out(MEM_Result_Connector),

//     .MEM_Enable_Top( MEM_Enable ),
//     .MEM_Read_Top( MEM_Read ),
//     .MEM_DataLenth_Top( MEM_DataLenth ),
//     .MEM_Addr_Top( MEM_Addr ),
//     .MEM_Dataoutput_Top( MEM_Dataoutput ),
//     .MEM_Dataiput_Top( MEM_Datainput )
// );

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

// ALU_top HY_ALU_top(
//     .src1(MUX_Reg_PC_2ALU_Result),
//     .src2(MUX_Reg_imm_2ALU_Result),
//     .func_control(ALU_Control_wire),
//     .inner_control(Insider_Control_Connector),
//     .result_out(ALU_Result_Connector)
// );


endmodule

