module AXI4_READ_SLAVE (
    input clk,
    input rst_n,

//Read Address Channel 
    input [63:0] AR_ADDR,
    input  AR_VALID,
    input  AR_PROT,
    output AR_READY,

//Read DATA Channel
    output [63:0] R_DATA,
    output  R_READY,
    output  R_RESP,
    input   R_VALID
);


localparam  IDLE     = 4'b0000;
localparam  AR_ADDR  = 4'b0001;
localparam  R_DATA   = 4'b0010;

wire GO_AR_ADDR  = AR_VALID;
wire GO_R_DATA   = AR_VALID & AR_READY;
wire GO_IDLE     = R_VALID & R_READY;

reg [3:0] current_state;
reg [3:0] next_state;

reg [63:0] ADDR;
reg [63:0] DATA;


always@(posedge clk)begin
    if(! rst_n)begin
        current_state = IDLE;
    end
    else begin
        current_state = next_state;
    end
end

always@(*)begin
    case(current_state)
        IDLE:begin
            if(GO_AR_ADDR)begin
                next_state <= AR_ADDR;
            end
            else begin
                next_state <= IDLE;
            end
        end   
        AR_ADDR:begin
            if(GO_R_DATA)begin
                next_state <= R_DATA;
            end
            else begin
                next_state <= AR_ADDR;
            end
        end
        R_DATA:begin
            if(GO_IDLE)begin
                next_state <= IDLE;
            end
            else begin
                next_state <= IDLE;
            end
        end 
    endcase
end

always@(posedge clk)begin
    case(next_state)
        IDLE:begin
            AR_READY <= 1'b0;
             R_READY <= 1'b0;
        end
        AR_ADDR:begin
            AR_READY <= 1'b1;
             R_READY <= 1'b0;
             ADDR    <= AR_ADDR;
        end
        R_DATA:begin
            AR_READY <= 1'b0;
            R_READY  <= 1'b1;
            R_DATA   <= DATA;
        end 
    endcase
end

endmodule