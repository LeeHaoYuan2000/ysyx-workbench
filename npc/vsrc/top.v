
module top(
    input clk,
    input rst,

//  connect to the ram
    input  [63:0] READ_DATA,
    input         READ_FINISH,
    output        READ_SIGNAL,
    output [63:0] READ_ADDR,

    output  reg ec_finish,
    output  reg [63:0] ex_data,

    output reg [63:0] RS1_Reg,
    output reg [63:0] RS2_Reg,
    output reg [63:0] SEXT_out,

    //vertifify signal
    output       INSTR_ARRIVE,
    input        INSTR_Complete,
    output reg [31:0] INSTR_DATA
);
//---------wire------------------------------------------------------
    wire [63:0] PC_TO_IFU;
    wire [63:0] INSTR_TO_IFU;
    wire [63:0] INSTR_ADDR;
    wire        READ_INSTR_START; //send signal to axi4
    wire        READ_INSTR_FINISH; //axi4 send finish singal to ifu

    wire [63:0] PC_NEXT;

    wire [63:0] ALU_Number_1;
    wire [63:0] ALU_Number_2;

    wire [3:0] ALU_Control;
    wire [3:0] ALU_Inside_Control;
    wire [2:0] SEXT_Control;
    wire       RegWriteEnable;
    wire       MUX_RS1_PC;
    wire       MUX_RS2_Imm;
    wire       MUX_ALU_MEM; //0 ALU  , 1 MEM
    wire       MUX_ALU_NPC_In; //0 ALU , 1 NPC
    wire [1:0] NPC_Branch_Jump;
    wire [3:0] MEM_Ctrl;
    wire       MEM_Enable;


    PC_Reg pc(
    .clk     (clk),
    .rst     (rst),
    .enable  (INSTR_Complete),
    .PC_Next (PC_NEXT),
    .PC      (PC_TO_IFU)
    );

    PC_Adder pc_adder(
        .PC(PC_TO_IFU),
        .PC_Next(PC_NEXT)
    );

    IFU ifu(
    .clk                (clk),
    .rst                (rst),
//PC in adn INSTR to the reg file
    .PC_IN              (PC_TO_IFU),
    .INSTR              (INSTR_DATA),

//control signals of the AXI4-lite
    .read_instr_start   (READ_INSTR_START),
    .read_instr_finish  (READ_INSTR_FINISH),

//Signals to the ALU that instr in valid, for reg
    .instr_arrive       (INSTR_ARRIVE),
    .instr_ex_complete  (INSTR_Complete),

// send pc and get instr from AXI4
    .PC_addr            (INSTR_ADDR),
    .INSTR_READ         (INSTR_TO_IFU[31:0])
    );


 AXI4_READ_TOP axi4_read_with_arbiter(
    .CLK                (clk),
    .RST                (rst),

    .read_req_instr     (READ_INSTR_START), // Instructon fetch signal
    .read_req_ex        (1'b0),                 // excute read
    .instr_finish       (READ_INSTR_FINISH),
    .ex_finish          (ec_finish),

    .instr_addr     (INSTR_ADDR),
    .ex_addr        (64'd0),
    .instr_data     (INSTR_TO_IFU),
    .ex_data        (ex_data),

    // to the ram
    .Read_SIGNAL    (READ_SIGNAL),
    .Read_ADDRESS   (READ_ADDR),
    .DATA_ARRIVE    (READ_FINISH), // give a signal to 
    .DATA_OUTSIDE   (READ_DATA)
);


REG reg_file(
    .clk            (clk),
    .rst            (rst),
    .RS1            (INSTR_DATA[19:15]),
    .RS2            (INSTR_DATA[24:20]),
    .RD             (INSTR_DATA[11:7]),
    .RD_Back        (64'd0),
    .Enable_Control ('d0), //Write Back enable
    .RS1_Reg        (RS1_Reg),
    .RS2_Reg        (RS2_Reg)
);

SEXT sign_extend(
    .Instr          (INSTR_DATA),
    .ControlUnit    (SEXT_Control),
    .SEXT_Out       (SEXT_out)
);

// choose reg1 or pc into the ALU
MuxKeyWithDefault #(2,1,64) MUX_REG1_PC (ALU_Number_1,MUX_RS1_PC,64'd0,{
    1'b0,RS1_Reg,
    1'b1,PC_TO_IFU
});

// choose reg2 or SEXT into the ALU
MuxKeyWithDefault #(2,1,64) MUX_REG2_SEXT (ALU_Number_2,MUX_RS2_Imm,64'd0,{
    1'b0,RS2_Reg, 
    1'd1,SEXT_out
});

ControUnit CU(
    .instr          (INSTR_DATA),
    .ALU_MEM_Finish (1'b1), //ALU or MEM`s operation is done, the cpu can write back now

    .Branch_Yes_No  (1'b0), //1 for branch , 0 for npc

    .ALU_Control    (ALU_Control),
    .Inside_Control (ALU_Inside_Control),
    .SEXT_Control   (SEXT_Control),

    .RegWriteEnable (RegWriteEnable), //1 for enable ,0 for disable
    //数据通路控制
    .C_RS1_PC       (MUX_RS1_PC), //0 RS1  , 1 PC
    .C_RS2_imm      (MUX_RS2_Imm), //0 Rs2  , 1 imm
    .C_ALU_MEM      (MUX_ALU_MEM), //0 ALU  , 1 MEM
    .C_ALU_NPC_In   (MUX_ALU_NPC_In), //0 ALU , 1 NPC
    .C_NPC_Branch_Jump  (NPC_Branch_Jump), // 0 is NPC, 1 is Branch and jal , 2 is jalr
    .MEM_Ctrl           (MEM_Ctrl),
    .MEM_Enable         (MEM_Enable)
);

ALU_top alu(
    .clk        (clk),
    .rst        (rst),

    .src1       (ALU_Number_1),
    .src2       (ALU_Number_2),
    .func_control       (ALU_Control),
    .inner_control      (ALU_Inside_Control),
    .MEM_Enable         (MEM_Enable), //CU tell ALU that this instruction need to access the MEM
    .result_out         (),

    //CSR port
    .CSR_Read_Addr      (CSR_Read_Addr),
    .CSR_Read_Data      (CSR_Read_Data),

    .CSR_Write_Addr     (CSR_Write_Addr),
    .CSR_Write_Data     (CSR_Write_Data),
    .Write_En           (Write_En),

    .mcause_Write_Data  (mcause_Write_Data),
    .mcause_Read_Data   (mcause_Read_Data),
    .mcause_En          (mcause_En),

    .mepc_Write_Data    (mepc_Write_Data),
    .mepc_Read_Data     (mepc_Read_Data),
    .mepc_En            (mepc_En),

    .mtvec_Write_Data   (mtvec_Write_Data),
    .mtvec_Read_Data    (mtvec_Read_Data),
    .mtvec_En           (mtvec_En),

    .INSTR_Valid        (),//IFU tell the ALU INSTR is valid
    //output ,tell the ifu ALU operation is done 
    .ALU_Finish         ()
);

wire [11:0] CSR_Read_Addr;
wire [63:0] CSR_Read_Data;

wire [11:0] CSR_Write_Addr;
wire [63:0] CSR_Write_Data;
wire Write_En;

wire [63:0] mcause_Write_Data;
wire [63:0] mcause_Read_Data;
wire mcause_En;

wire [63:0] mepc_Write_Data;
wire [63:0] mepc_Read_Data;
wire mepc_En;

wire [63:0] mtvec_Write_Data;
wire [63:0] mtvec_Read_Data;
wire mtvec_En

CSR csr(
    .rst            (rst),
    .clk            (clk),

    .read_address   (CSR_Read_Addr),
    .read_result    (CSR_Read_Data),

    .write_address  (CSR_Write_Addr),
    .wirte_date     (CSR_Write_Data),
    .write_en       (Write_En),

    .mcause_in      (mcause_Write_Data),
    .mcause         (mcause_Read_Data).
    .mcause_wen     (mcause_En).

    .mepc_in        (mepc_Write_Data),
    .mepc           (mepc_Read_Data),
    .mepc_wen       (mepc_En).

    .mtvec_in       (mtvec_Write_Data),
    .mtvec          (mtvec_Read_Data),
    .mtvec_wen      (mtvec_En)
);




endmodule

