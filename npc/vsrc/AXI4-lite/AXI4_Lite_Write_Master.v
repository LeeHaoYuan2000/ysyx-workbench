module AXI4_LITE_WRITE_MASTER(
    input CLK,
    input RST_N,

    //write address channel
    output reg [63:0] AW_ADDR,
    output AW_VALID,
    input  AW_READY,	
    input  AW_PORT, //ignore it now

    //Write data channel
    output reg [63:0]W_DATA,
    input [2:0]W_STRB,
    output W_VALID,
    input  W_READY,

    //write response channel
    input  [1:0]B_RESP,
    input  B_VALID,
    output B_READY,

    //outside signal
    input [63:0] WRITE_ADDR,
    input [63:0] WRITE_DATA,
    input        WRITE_START,
    output       WRITE_DONE
);

reg w_req;
reg w_lock;

assign W_DATA  = WRITE_DATA;
assign AW_ADDR = WRITE_ADDR;

always@(posedge CLK)begin
    if(RST_N == 0)begin
        w_req  <= 0;
        w_lock <= 0;
    end
    else if(WRITE_START && ~w_lock)begin
        w_req  <= 1;
        w_lock <= 1;
    end
    else if(AW_READY && AW_VALID)begin
        w_req  <= 0;
        w_lock <= 1;
    end
    else if(WRITE_DONE)begin
        w_req  <= 0;
        w_lock <= 0;
    end
    else begin
        w_req  <= w_req;
        w_lock <= w_lock;
    end
end

//AW_VALID
always@(posedge CLK)begin
    if(RST_N == 0)begin
        AW_VALID <= 0;
    end
    else if(w_req && ~AW_VALID)begin
        AW_VALID <= 1'b1;
    end
    else if(AW_VALID && AW_READY)begin
        AW_VALID <= 1'b0;
    end
    else begin
        AW_VALID <= AW_VALID;
    end
end

//W_VALID
always@(posedge CLK)begin
    if(RST_N == 0)begin
        W_VALID <= 1'b0;
    end
    else if(w_req && ~W_VALID)begin
        W_VALID <= 1'b1;
    end
    else if(W_VALID && W_READY)begin
        W_VALID <= 1'b0;
    end
    else begin
        W_VALID <= W_VALID;
    end
end

//B_response
always@(posedge CLK)begin
    if(RST_N == 0)begin
        B_READY <= 1'b0;
    end
    else if(B_VALID && ~B_READY)begin
        B_READY <= 1'b1;
    end
    else if(B_VALID && B_READY)begin
        B_READY <= 1'b0;
    end
    else begin
        B_READY <= B_READY;
    end
end

always@(posedge CLK)begin
    if(RST_N == 0)begin
        WRITE_DONE <= 1'b0;
    end
    else if(B_VALID && B_READY)begin
        WRITE_DONE <= 1'b1;
    end
    else begin
        WRITE_DONE <= 1'b0;
    end
end

    
endmodule