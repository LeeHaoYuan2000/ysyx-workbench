
module AXI4_InterConnect{

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

};

localparam IFU_Read  = 2'b01;
localparam MEM_Read  = 2'b10;
localparam MEM_Write = 2'b11; 


reg [2:0] MUX_Signal;

always@(*)begin
    if(IFU_READ_ENABLE)begin
        MUX_Signal <= IFU_Read;
    end
    else if(MEM_READ_ENABLE)begin
         MUX_Signal <= MEM_Read;
    end
    else if(MEM_WRITE_ENABLE)begin
        MUX_Signal <= MEM_Write;
    end
    else begin
        MUX_Signal <= 2'b00;
    end
end

always#(*)begin
    if(MUX_Signal == IFU_Read)begin

        //address channel
        AR_ADDR_Slave  <= AR_ADDR_IFU;
        AR_VALID_Slave <= AR_VALID_IFU;
        AR_PROT_Slave  <= AR_PROT_IFU;
        AR_READY_IFU   <= AR_READY_Slave;

        //read data channel
         R_DATA_IFU    <= R_DATA_Slave ;
         R_RESP_IFU    <= R_RESP_Slave ; // th;
         R_VALID_IFU   <= R_VALID_Slave;
         R_READY_Slave <= R_READY_IFU  ;

    end
    else if(MUX_Signal == MEM_Read)begin
        //address channel
        AR_ADDR_Slave  <= AR_ADDR_MEM;
        AR_VALID_Slave <= AR_VALID_MEM;
        AR_PROT_Slave  <= AR_PROT_MEM;
        AR_READY_MEM   <= AR_READY_Slave;

        //read data channel

        R_DATA_MEM    <= R_DATA_Slave ; 
        R_RESP_MEM    <= R_RESP_Slave ; 
        R_VALID_MEM   <= R_VALID_Slave; 
        R_READY_Slave <= R_READY_MEM  ;

    end
    else if(MUX_Signal == MEM_Write)begin
        //address channel
        AW_ADDR_Slave  <= AW_ADDR_MEM;
        AW_VALID_Slave <= AW_VALID_MEM;
        AW_PORT_Slave  <= AW_PORT_MEM;
        AW_READY_MEM   <= AW_READY_Slave;
        //Data channel
        W_DATA_Slave   <= W_DATA_MEM  ;
        W_STRB_Slave   <= W_STRB_MEM  ;
        W_VALID_Slave  <= W_VALID_MEM ;
        W_READY_MEM    <= W_READY_Slave;

        //resp channel
        B_RESP_MEM     <= B_RESP_Slave;
        B_READY_Slave  <= B_READY_MEM ;
        B_VALID_MEM    <= B_VALID_Slave;

    end
    else begin
         //address channel
        AR_ADDR_Slave  <= 0;
        AR_VALID_Slave <= 0;
        AR_PROT_Slave  <= 0;
        AR_READY_MEM   <= 0;
        //read data channel
        R_DATA_MEM    <= 0 ; 
        R_RESP_MEM    <= 0 ; 
        R_VALID_MEM   <= 0; 
        R_READY_Slave <= 0;

         //address channel
        AW_ADDR_Slave  <= 0;
        AW_VALID_Slave <= 0;
        AW_PORT_Slave  <= 0;
        AW_READY_MEM   <= 0;
        //Data channel
        W_DATA_Slave   <= 0;
        W_STRB_Slave   <= 0;
        W_VALID_Slave  <= 0;
        W_READY_MEM    <= 0;
        //resp channel
        B_RESP_MEM     <= 0;
        B_READY_Slave  <= 0;
        B_VALID_MEM    <= 0;

    end
end

endmodule