module AXI4_LITE_READ_MASTER(
    input CLK,
    input RST,

    //Read Adress Channel 
    output  reg [63:0] AR_ADDR,
    output  reg        AR_VALID,	
    input              AR_READY,
    //AR_PORT, //ignore the 

    //Read Data Channel
    input [63:0] R_DATA,
    input [1:0]  R_RESP,	
    input        R_VALID,
    output       R_READY,

// signal from outside
    input  [63:0] R_Addr,
    input         R_Request,
    output        R_Finish,
    output [63:0] Data_Out
);

reg lock_state;

always@(posedge CLK)begin
    if(RST)begin
        lock_state <= 1'b0;
    end
    else if(~lock_state && R_Request)begin
        lock_state <= 1'b1;
    end
    else if(lock_state && R_Finish)begin
        lock_state <= 1'b0;
    end
    else begin
        lock_state <= lock_state;
    end
end

// AR_VALID Signal
always@(posedge CLK)begin
    if(RST)begin
        AR_VALID <= 1'b0;
    end
    else if(R_Request && ~AR_VALID && ~lock_state)begin
        AR_VALID <= 1'b1;
    end
    else if(AR_VALID && AR_READY && lock_state) begin
        AR_VALID <= 1'b0;
    end
    else begin
        AR_VALID <= AR_VALID;
    end
end

//AR_ADDR
always@(posedge CLK)begin
    if(RST)begin
        AR_ADDR  <= 64'b0;
    end
    else if(R_Request && ~AR_VALID)begin
        AR_ADDR  <= R_Addr;
    end
    else if(AR_VALID && AR_READY)begin
        AR_ADDR  <= R_Addr;
    end
    else begin
        AR_ADDR  <= R_Addr;
    end

end


always@(posedge CLK)begin
    if(RST)begin
        R_READY <=1'b0;
    end
    else if(~R_READY && R_VALID)begin
        R_READY <=1'b1;
    end
    else begin
        R_READY <=1'b0;
    end
end

//Read the Data
always@(posedge CLK)begin
    if(RST)begin
        Data_Out  <= 64'b0;
    end
    else if(~R_READY && R_VALID)begin
        Data_Out <= R_DATA;
    end
    else begin
        Data_Out <= R_DATA;
    end
end


//R_Finish control
always@(posedge CLK)begin
    if(RST)begin
        R_Finish <= 1'b0;
    end
    else if(~R_READY && R_VALID)begin
        R_Finish <= 1'b1;
    end
    else if(R_READY && R_VALID)begin
        R_Finish <= 1'b0;
    end

end
    
endmodule