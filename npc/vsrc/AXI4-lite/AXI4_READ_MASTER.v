
/*
https://www.realdigital.org/doc/a9fee931f7a172423e1ba73f66ca4081

this is the documentation about AXI4-Lite

*/
module AXI4_READ_MASTER (

    input clk,
    input rst_n,
    input Send_Signal, //when Send_Signal is 1, then begin the send signal
    output  Send_Finish, //when data received, send 1 to outside axi4 finished

    input [63:0] ADDR,  //data address
    output reg [63:0] receive_DATA,

//Read Address Channel
    output reg [63:0] AR_ADDR,
    output reg AR_VALID,
    output reg [2:0]AR_PROT, //won't be use in this module
    input  AR_READY,

//Read DATA Channel
    input R_DATA[63:0],
    input R_RESP, // this port may won`t use in this module
    input R_VALID, 
    output R_READY

);

localparam  IDLE            = 4'b0000;
localparam  READ_ADDR       = 4'b0001;
localparam  READ_DATA       = 4'b0010;
localparam  Finish          = 4'b0011;

reg [3:0] current_state;
reg [3:0] next_state;

wire Go_READ_ADDR = Send_Signal;
wire Go_READ_DATA = AR_READY;
wire GO_Finish    = R_VALID;
wire Go_IDLE      = ~Send_Signal;

assign AR_ADDR      = ADDR;
assign receive_DATA = BUF_DATA;

assign AR_ADDR[63:0] = ADDR[63:0];

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
            if(Go_READ_ADDR) begin
                next_state = READ_ADDR;
            end
            else begin
                next_state = IDLE;
            end
        end
        
        READ_ADDR:begin
            if(Go_READ_DATA)begin
                next_state = READ_DATA;
            end
            else begin
                next_state = READ_ADDR;
            end
        end

        READ_DATA:begin
            if(GO_Finish)begin
                next_state = Finish;
            end
            else begin
                next_state = READ_DATA;
            end
        end

        Finish:begin
            if(Go_IDLE)begin
                next_state = IDLE;
            end
            else begin
                next_state = Finish;
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
            Send_Finish <= 1'b0;
            AR_VALID <= 1'b0;
            R_READY  <= 1'b0;

        end
        READ_ADDR:begin

            AR_VALID <= 1'b1; //the read address is valid
            R_READY  <= 1'b0;
            Send_Finish <= 1'b0;

        end

        READ_DATA:begin

            AR_VALID <= 1'b0; //the read address is valid
            R_READY  <= 1'b1;

            if(R_VALID)begin
                receive_DATA[63:0] <=  R_DATA[63:0];
                Send_Finish <= 1'b1;
            end
            else begin
                receive_DATA[63:0] <= receive_DATA[63:0];
            end
        end

        Finish:begin
            Send_Finish <= 1'b1;
            AR_VALID    <= 1'b0;
            R_READY     <= 1'b0;
        end

        default:begin
            AR_VALID <= 1'b0;
            R_READY  <= 1'b0;
            Send_Finish <= 1'b0;
        end
    endcase
end
    
endmodule