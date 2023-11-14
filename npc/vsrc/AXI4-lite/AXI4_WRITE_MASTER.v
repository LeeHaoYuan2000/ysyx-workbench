/*
https://www.realdigital.org/doc/a9fee931f7a172423e1ba73f66ca4081

this is the documentation about AXI4-Lite
*/

module AXI4_WRITE_MASTER (

    input clk;
    input rst,
    input Start,
    output Finish,

    input [63:0] WRITE_ADDR,
    input [63:0] WRITE_DATA,

//WRite Address Channel
    output [63:0] AW_ADDR, // this 
    output AW_VALID,
    output[2:0] AW_PORT, //normally ignore the pin in the AXI4-lite
    input  AW_READY,

// Write Data Channel
    output [63:0] W_DATA,
    output [7:0] W_STRB, //
    output W_VALID,
    input  W_READY,

//Write Response Channel
    input B_RESP,
    output B_READY,
    input B_VALID
);

// States of the State Machine

localparam IDLE       = 4'b0000;
localparam Send_WADDR = 4'b0001;
localparam Send_WDATA = 4'b0010;
localparam Wait_RESP  = 4'b0011;
localparam HOLD       = 4'b0100;

reg [3:0] current_state;
reg [3:0] next_state;

wire  Go_Send_WADDR  = Start;
wire  Go_Send_WDATA  = AW_READY;
wire  Go_Wait_RESP   = W_READY;
wire  Go_HOLD        = B_VALID;
wire  Go_IDLE        = ~Start;

assign AW_ADDR = WRITE_ADDR;
assign W_DATA  = WRITE_DATA;
assign W_STRB  = 8'b1111_1111;


always @(posedge clk) begin
    if(rst)begin
        current_state <= IDLE;
    end
    else begin
        current_state <= next_state;
    end
end

//change state of the state manchine
always@(*)begin
    case(current_state)
    IDLE:begin
        if(Go_Send_WADDR)begin
            next_state = Send_WADDR;
        end
        else begin
            next_state = IDLE;
        end
    end
    Send_WADDR:begin
        if(Go_Send_WDATA)begin
            next_state = Send_WDATA;
        end
        else begin
            next_state = Send_WADDR;
        end
    end
    Send_WDATA:begin
        if(Go_Wait_RESP)begin
            next_state = Wait_RESP;
        end
        else begin
            next_state = Send_WDATA;
        end
    end
    Wait_RESP:begin
        if(Go_HOLD)begin
            next_state = HOLD;
        end
        else begin
            next_state = Wait_RESP;
        end
    end
    HOLD:begin
        if(Go_IDLE)begin
            next_state = IDLE;
        end
        else begin
            next_state = HOLD;
        end
    end
    default:begin
        next_state = IDLE;
    end
    endcase
end



always@(posedge clk)begin
    case(next_state)
    IDLE:begin
        AW_VALID <= 1'b0;
        W_VALID  <= 1'b0;
        B_READY  <= 1'b0;
    end
    Send_WADDR:begin
        B_READY  <= 1'b1;
        AW_VALID <= 1'b1;
        W_VALID  <= 1'b0;
    end
    Send_WDATA:begin
        B_READY  <= 1'b1;
        AW_VALID <= 1'b0;
        W_VALID  <= 1'b1;
    end
    Wait_RESP:begin
        B_READY  <= 1'b1;
        AW_VALID <= 1'b0;
        W_VALID  <= 1'b0;
    end
    HOLD:begin
        B_READY  <= 1'b0;
        AW_VALID <= 1'b0;
        W_VALID  <= 1'b0;
    end
    default:begin
        AW_VALID <= 1'b0;
        W_VALID  <= 1'b0;
        B_READY  <= 1'b0;
    end
    endcase
end



    
endmodule