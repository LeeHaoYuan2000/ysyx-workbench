
module top(
    input clk,
    input rst,

    input  [63:0] READ_DATA,
    input         READ_FINISH,
    output        READ_SIGNAL,
    output [63:0] READ_ADDR,


    //vertifify signal
    output       INSTR_ARRIVE,
    input        INSTR_Complete,
    input [63:0] INSTR_DATA
);
//---------wire------------------------------------------------------
    wire [63:0] PC_TO_IFU;
    wire [63:0] INSTR_TO_IFU;
    wire [63:0] INSTR_ADDR
    wire        READ_INSTR_START; //send signal to axi4
    wire        READ_INSTR_FINISH; //axi4 send finish singal to ifu

    wire [63:0] PC_NEXT;

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
    .INSTR_READ         (INSTR_TO_IFU)
    );


 AXI4_READ_TOP axi4_read_with_arbiter(
    .CLK                (clk),
    .RST                (rst),

    .read_req_instr     (READ_INSTR_START), // Instructon fetch signal
    .read_req_ex        (1'b0),                 // excute read
    .instr_finish       (READ_INSTR_FINISH),
    .ex_finish          (1'b0),

    .instr_addr     (INSTR_ADDR),
    .ex_addr        (64'd0),
    .instr_data     (INSTR_TO_IFU),
    .ex_data        (64'd0),

    // to the ram
    .Read_SIGNAL    (READ_SIGNAL),
    .Read_ADDRESS   (READ_ADDR),
    .DATA_ARRIVE    (READ_FINISH), // give a signal to 
    .DATA_OUTSIDE   (READ_DATA)
);



endmodule

