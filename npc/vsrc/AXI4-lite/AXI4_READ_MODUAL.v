module AXI4_READ_MODUAL(
    input CLK,
    input RST_N,

//to the host
    // signal from outside
    input  [63:0] R_Addr,
    input         R_Request,
    output        R_Finish,
    output [63:0] Data_Out,

// to the ram
    output             Read_SIGNAL,
    output [63:0]      Read_ADDRESS,
    input              DATA_ARRIVE, // give a signal to 
    input [63:0]       DATA_OUTSIDE

);

    wire [63:0]AR_ADDR;
    wire AR_VALID;	
    wire AR_READY;
    //AR_PORT, //ignore the 

    //Read Data Channel
    wire [63:0]R_DATA;
    wire [1:0]R_RESP;
    wire R_VALID;
    wire R_READY;

AXI4_LITE_READ_MASTER read_master(
    .CLK(CLK),
    .RST_n(RST_N),

    //Read Adress Channel 
    .AR_ADDR(AR_ADDR),
    .AR_VALID(AR_VALID),
    .AR_READY(AR_READY),
    //AR_PORT, //ignore the 

    //Read Data Channel
    .R_DATA(R_DATA),
    .R_RESP(R_RESP),
    .R_VALID(R_VALID),
    .R_READY(R_READY),

// signal from outside
    .R_Addr(R_Addr),
    .R_Request(R_Request),
    .R_Finish(R_Finish),
    .Data_Out(Data_Out)
);

AXI4_LITE_READ_SLAVE read_slave(
.CLK        (CLK),
.RST_N      (RST_N),

//Read Address Channel
.AR_ADDR    (AR_ADDR), 
.AR_VALID   (AR_VALID),
.AR_READY   (AR_READY),	
//AR_PORT, //Read Address Channel Protect ,but we won`t use it here

//Read Data Channel
.R_DATA     (R_DATA),
.R_RESP     (R_RESP), //Read responsse
.R_VALID    (R_VALID),		
.R_READY    (R_READY),

.Read_SIGNAL    (Read_SIGNAL),
.Read_ADDRESS   (Read_ADDRESS),
.DATA_ARRIVE    (DATA_ARRIVE), // give a signal to 
.DATA_OUTSIDE   (DATA_OUTSIDE)
);


endmodule