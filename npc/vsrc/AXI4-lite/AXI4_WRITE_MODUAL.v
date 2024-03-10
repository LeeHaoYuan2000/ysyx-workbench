module AXI4_WRITE_MODUAL(
    input CLK,
    input RST_N,

    input [63:0] WRITE_ADDR,
    input [63:0] WRITE_DATA,
    input        WRITE_START,
    output       WRITE_DONE,

    output DATA_ARRIVE,
    input  DATA_RECIVED,
    output [63:0] DATA,
    output [63:0] DATA_ADDR
);

wire [63:0] AW_ADDR;
wire AW_VALID;
wire AW_READY;
wire AW_PORT;

wire [63:0] W_DATA;
wire [2:0]  W_STRB;
wire W_VALID;
wire W_READY;

wire [1:0] B_RESP;
wire B_VALID;
wire B_READY;


AXI4_LITE_WRITE_SLAVE write_slave(
    .CLK        (CLK),
    .RST_N      (RST_N),

    .AW_ADDR    (AW_ADDR),
    .AW_VALID   (AW_VALID),
    .AW_READY   (AW_READY),	
    .AW_PORT    (AW_PORT),

    .W_DATA     (W_DATA),
    .W_STRB     (W_STRB),
    .W_VALID    (W_VALID),	
    .W_READY    (W_READY),

    .B_RESP     (B_RESP),
    .B_VALID    (B_VALID),
    .B_READY    (B_READY),

    .DATA_ARRIVE    (DATA_ARRIVE),
    .DATA_RECIVED   (DATA_RECIVED),
    .DATA           (DATA),
    .DATA_ADDR      (DATA_ADDR)
);

AXI4_LITE_WRITE_MASTER write_master(

    .CLK        (CLK),
    .RST_N      (RST_N),

    //write address channel
    .AW_ADDR    (AW_ADDR),
    .AW_VALID   (AW_VALID),
    .AW_READY   (AW_READY),	
    .AW_PORT    (AW_PORT), //ignore it now

    //Write data channel
    .W_DATA     (W_DATA),
    .W_STRB     (W_STRB),
    .W_VALID    (W_VALID),
    .W_READY    (W_READY),

    //write response channel
    .B_RESP     (B_RESP),
    .B_VALID    (B_VALID),
    .B_READY    (B_READY),

    //outside signal
    .WRITE_ADDR     (WRITE_ADDR),
    .WRITE_DATA     (WRITE_DATA),
    .WRITE_START    (WRITE_START),
    .WRITE_DONE     (WRITE_DONE)

);

endmodule








