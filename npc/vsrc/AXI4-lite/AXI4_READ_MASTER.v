

module AXI4_READ_MASTER (

    input clk,
    input rst_n,

    input  ADDR_VALID;//when the read address is valid then begin to read
    input [63:0] ADDR;
    output  receive_DATA[63:0],

//Read Address Channel
    output AR_ADDR[63:0],
    output AR_VALID,
    output AR_PROT,
    input  AR_READY,

//Read DATA Channel
    input R_DATA[63:0],
    input R_READY,
    input R_RESP,
    output R_VALID 

);

localparam  IDLE            = 4'b0000;
localparam  READ_ADDR       = 4'b0001;
localparam  WAIT_READ_DATA  = 4'b0010;
localparam  READ_DATA       = 4'b0011;

reg [3:0] current_state;
reg [3:0] next_state;

reg [63:0] BUF_DATA;

wire GO_READADDR         = AR_VALID;
wire GO_WAIT_READ_DATA   = AR_READY;
wire GO_IDLE             = R_READY & R_RESP;

assign AR_ADDR      = ADDR;
assign receive_DATA = BUF_DATA; 

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
            if(GO_READADDR) begin
                next_state = READ_ADDR;
            end
            else begin
                next_state = IDLE;
            end
        end          
        READ_ADDR:begin
            if(GO_WAIT_READ_DATA) begin
                next_state = WAIT_READ_DATA;
            end
            else begin
                next_state = READ_ADDR;
            end
        end      
        WAIT_READ_DATA:begin
            if (GO_IDLE) begin
                next_state = IDLE;
            end
            else begin
                next_state = WAIT_READ_DATA;
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
            AR_VALID <= ADDR_VALID;
            R_VALID  <= 0;
        end          
        READ_ADDR:begin
        end      
        WAIT_READ_DATA:begin
            AR_VALID <= 0;
            R_VALID  <= 1;
            BUF_DATA <= R_DATA;
        end 
        default:begin
        end      
    endcase
end
    
endmodule