module AXI4_WRITE_SLAVE (
    
    input clk,
    input rst_n,

//write address channel
    input [63:0] AW_ADDR,
    input  AW_VALID,
    input  AW_PORT,
    output AW_READY,

//write data channel
    input [63:0]W_DATA,
    input [7:0]W_STRB,
    input  W_VALID,
    output W_READY,

    output [1:0] B_RESP,
    output B_READY,
    input B_VALID

);

localparam  IDLE          = 4'b0000;
localparam  AWADDR_WRITE  = 4'b0001;
localparam  DATA_WRITE    = 4'b0010;
localparam  B_RESP        = 4'b0011;

reg [3:0] current_state;
reg [3:0] next_state;

reg [63:0] ADDR;
reg [63:0] DATA;

wire GO_AWADDR_WRITE = AW_VALID;
wire GO_DATA_WRITE   = AW_VALID & AW_READY;
wire GO_B_RESP       = W_VALID & W_READY;
wire GO_IDLE         = B_VALID & B_READY;


always@(posedge clk)begin
    if(!rst_n) begin
        current_state <= IDLE;
    end
    else begin
        current_state <= next_state;
    end
end

always@(*)begin
    case(current_state)
        IDLE:begin
            if(GO_AWADDR_WRITE)begin
                next_state <= AWADDR_WRITE;
            end
            else begin
                next_state <= IDLE;
            end
        end        
        AWADDR_WRITE:begin
          if(GO_DATA_WRITE)begin
                next_state <= DATA_WRITE;
            end
            else begin
                next_state <= AWADDR_WRITE;
            end
        end
        DATA_WRITE:begin
            if(GO_B_RESP)begin
                next_state <= B_RESP;
            end
            else begin
                next_state <= DATA_WRITE;
            end
        end  
        B_RESP:begin
            if(GO_IDLE)begin
                next_state <= IDLE;
            end
            else begin
                next_state <= B_RESP;
            end
        end
        default:begin
            next_state <= IDLE;
        end
    endcase
end

always@(posedge clk)begin
    case(next_state)
        IDLE:begin
            AW_READY <= 1'b0;
            W_READY  <= 1'b0;
            B_READY  <= 1'b0;
        end        
        AWADDR_WRITE:begin
            AW_READY <= 1'b1;
            ADDR     <= AW_ADDR;
        end
        DATA_WRITE:begin
            AW_READY <= 1'b0;
            W_READY  <= 1'b1;
            DATA     <= W_DATA;
        end  
        B_RESP:begin
            B_READY  <= 1'b1;
            B_RESP   <= 2'b00;
        end      
    endcase
end
    
endmodule