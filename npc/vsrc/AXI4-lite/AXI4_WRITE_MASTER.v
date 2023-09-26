/*

*/

module AXI4_WRITE_MASTER (

    input clk;
    input rst_n,

    input [63:0] ADDR,
    input  ADDR_VALID,
    input [63:0] DATA;

//WRite Address Channel
    output AW_ADDR[63:0], // this 
    output AW_VALID,
    output AW_PORT, //normally ignore the pin in the AXI4-lite
    input  AW_READY,

// Write Data Channel
    output W_DATA[63:0],
    output W_STRB[7:0], //
    output W_VALID,
    input  W_READY,

//Write Response Channel
    input B_RESP[1:0],
    input B_READY,
    output B_VALID
);

// States of the State Machine
localparam  IDLE             = 4'b0000;
localparam  WRITE_ADDR       = 4'b0001;
localparam  WAIT_WRITE_DATA  = 4'b0010;
localparam  B_RESP           = 4'b0100;

reg [3:0] current_state ;
reg [3:0] next_state;

wire GO_WRITE_ADDR      =  AW_VALID;
wire GO_WAIT_WRITE_DATA =  AW_READY;
wire GO_B_RESP          =  W_DATA & W_READY;
wire GO_IDLE            =  B_READY & B_VALID;

assign AW_ADDR = ADDR;
assign W_DATA  = DATA;
assign W_STRB  = 8'b1111_1111;


always @(posedge clk) begin
    if(! rst_n) begin
        current_state = IDLE;
        next_state = IDLE;
    end
    else begin
        current_state = next_state;
    end
end

//change state of the state manchine
always@(*)begin
    case(current_state)
        IDLE:begin
            if (GO_WRITE_ADDR) begin
                next_state = WRITE_ADDR;
            end
            else begin
                next_state = IDLE;
            end
        end           
        WRITE_ADDR:begin
            if (GO_WAIT_WRITE_DATA) begin
                next_state = WAIT_WRITE_DATA;
            end
            else begin
                next_state = WRITE_ADDR;
            end
        end       
        WAIT_WRITE_DATA:begin
            if (GO_B_RESP) begin
                next_state = B_RESP;
            end
            else begin
                
            end
        end       
        B_RESP:begin
            if (GO_IDLE) begin
                next_state = IDLE;
            end
            else begin
                next_state = B_RESP;
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
            AW_VALID <= ADDR_VALID;
            W_VALID  <= 0;
            B_VALID  <= 0;
        end           
        WRITE_ADDR:begin
        end       
        WAIT_WRITE_DATA:begin
            AW_VALID <= 0;
            W_VALID  <= 1;
        end        
        B_RESP:begin
            W_VALID <= 0;
            B_VALID <= 1;
        end
    endcase
end



    
endmodule