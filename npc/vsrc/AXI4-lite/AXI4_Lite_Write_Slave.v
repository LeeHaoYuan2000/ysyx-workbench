module AXI4_LITE_WRITE_SLAVE(
input CLK,
input RST,

input [63:0]AW_ADDR,
input AW_VALID,
output reg AW_READY,	
output AW_PORT,

input  [63:0] W_DATA,
input  [2:0]  W_STRB,
input         W_VALID,	
output        W_READY,

output [1:0]  B_RESP,
output        B_VALID,
input         B_READY,

output DATA_ARRIVE,
input  DATA_RECIVED,
output [63:0] DATA,
output [63:0] DATA_ADDR
);

assign DATA      = W_DATA;
assign DATA_ADDR = AW_ADDR;

always@(posedge CLK)begin
    if(RST)begin
        AW_READY <= 1'b0;
    end
    else if(~AW_READY && AW_VALID && W_VALID)begin
        AW_READY <= 1'b1;
    end
    else if(AW_READY && AW_VALID && W_VALID)begin
        AW_READY <= 1'b0;
    end
    else begin
        AW_READY <= AW_READY;
    end
end

always@(posedge CLK)begin
    if(RST)begin
        W_READY <= 1'b0;
    end
    else if(~W_READY && W_VALID && AW_VALID)begin
        W_READY <= 1'b1;
    end
    else if(W_READY && W_VALID  && AW_VALID)begin
        W_READY <= 1'b0;
    end
    else begin
        W_READY <= W_READY;
    end
end

always@(posedge CLK)begin
    if(RST)begin
        DATA_ARRIVE <= 0;
    end
    else if(~W_READY && W_VALID && AW_VALID)begin
        DATA_ARRIVE <= 1'b1;
    end
    else if(DATA_RECIVED)begin
        DATA_ARRIVE <= 1'b0;
    end
    else begin
        DATA_ARRIVE <= DATA_ARRIVE;
    end
end

always@(posedge CLK)begin
    if(RST)begin
        B_VALID <= 0;
    end
    else if(~B_VALID && DATA_RECIVED)begin
        B_VALID <= 1'b1;
    end
    else if(B_READY)begin
        B_VALID <= 1'b0;
    end
    else begin
        B_VALID <= B_VALID;
    end
end
    
endmodule