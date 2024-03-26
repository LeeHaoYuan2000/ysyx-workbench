

module MEM(
    input clk,
    input rst,

    input [63:0]    MEM_ADDR_FROM_ALU,
    input [63:0]    MEM_DATA_FROM_ALU,

    input           RESULT_FROM_ALU,
    input           MEM_Enable,
    input [3:0]     Ctrl,

    //axi4 read
    output reg      MEM_READ_REQ,
    input           MEM_READ_FINISH,
    output [63:0]   MEM_READ_ADDR,
    input  [63:0]   MEM_READ_DATA,

    //axi4 write
    output reg      MEM_WRITE_REQ,
    input           MEM_WRITE_FINISH,
    output [63:0]   MEM_WRITE_ADDR,
    output [63:0]   MEM_WRITE_DATA,

    output [63:0]   RESULT,
    output          FINISH
);

parameter Load_8Bytes       = 4'b0000;
parameter Load_2Bytes       = 4'b0001;
parameter Load_1Bytes       = 4'b0010;
parameter Load_4Bytes_SEXT  = 4'b0011;    
parameter Load_2Bytes_SEXT  = 4'b0100;
parameter Load_4Bytes       = 4'b0101;

parameter Store_8Byte   = 4'b1000;
parameter Store_4Byte   = 4'b1001;
parameter Store_2Byte   = 4'b1010;
parameter Store_1Byte   = 4'b1011;

reg [63:0] READ_DATA_BUF;
reg [63:0] WRITE_DATA_BUF;

wire [63:0] READ_DATA_RESULT;

assign RESULT = READ_DATA_RESULT;
assign FINISH = MEM_READ_FINISH | MEM_WRITE_FINISH;

//read data from axi4
always@(posedge clk)begin
    if(rst)begin

        MEM_READ_REQ        <= 1'b0;
        MEM_READ_ADDR       <= 'b0;
        READ_DATA_BUF       <= 'b0;

    end
    else if(MEM_Enable && !Ctrl[3] && !MEM_READ_REQ)begin

        MEM_READ_REQ        <= 1'b1;
        MEM_READ_ADDR       <= MEM_ADDR_FROM_ALU;
        READ_DATA_BUF       <= MEM_READ_DATA;

    end
    else if(MEM_READ_REQ && MEM_READ_FINISH)begin

        MEM_READ_REQ        <= 1'b0;
        MEM_READ_ADDR       <= MEM_ADDR_FROM_ALU;
        READ_DATA_BUF       <= MEM_READ_DATA;

    end
    else begin

        MEM_READ_REQ        <= MEM_READ_REQ;
        MEM_READ_ADDR       <= MEM_ADDR_FROM_ALU;
        READ_DATA_BUF       <= MEM_READ_DMEM_WRITE_REQATA;

    end
end

//write data to axi4
always@(posedge clk)begin
    if(rst)begin

        MEM_WRITE_REQ   <= 1'b0;
        MEM_WRITE_ADDR  <= 'd0;
        MEM_WRITE_DATA  <= 'd0;

    end
    else if(Ctrl[3] && MEM_Enable && !MEM_WRITE_REQ)begin

        MEM_WRITE_REQ   <= 1'b1;
        MEM_WRITE_ADDR  <= MEM_WRITE_ADDR;
        MEM_WRITE_DATA  <= WRITE_DATA_BUF;

    end
    else if(MEM_WRITE_REQ && MEM_WRITE_FINISH)begin

        MEM_WRITE_REQ   <= 1'b0;
        MEM_WRITE_ADDR  <= MEM_WRITE_ADDR;
        MEM_WRITE_DATA  <= WRITE_DATA_BUF;

    end
    else begin

        MEM_WRITE_REQ   <= MEM_WRITE_REQ;
        MEM_WRITE_ADDR  <= MEM_WRITE_ADDR;
        MEM_WRITE_DATA  <= WRITE_DATA_BUF;

    end
end

always@(*) begin
    if (MEM_Enable) begin
         case (Ctrl[3])
        1'b0:begin
        case(Ctrl)
            Load_8Bytes: begin

                READ_DATA_RESULT = READ_DATA_BUF;
            end
            Load_2Bytes: begin 

                READ_DATA_RESULT ={{48{1'b0}},READ_DATA_BUF[15:0]};
            end
            Load_1Bytes: begin 
                
                READ_DATA_RESULT ={{56{1'b0}},READ_DATA_BUF[7:0]};
            end
            Load_4Bytes_SEXT: begin 
                
                READ_DATA_RESULT = {{32{READ_DATA_BUF[31]}},READ_DATA_BUF[31:0]};  
            end
            Load_2Bytes_SEXT: begin 

                READ_DATA_RESULT = {{48{READ_DATA_BUF[15]}},READ_DATA_BUF[15:0]};
            end

            Load_4Bytes:begin

                READ_DATA_RESULT = {{32{1'b0}},READ_DATA_BUF[31:0]};
            end
            default: begin 

                READ_DATA_RESULT = READ_DATA_BUF;
            end
            endcase
    end

    1'b1:begin

        case(Ctrl)
        Store_8Byte: begin

            WRITE_DATA_BUF = MEM_DATA_FROM_ALU;
        end
        Store_4Byte: begin 

           WRITE_DATA_BUF = {{32{MEM_DATA_FROM_ALU[31]}},{MEM_DATA_FROM_ALU[31:0]}};
        end
        Store_2Byte: begin 

            WRITE_DATA_BUF = {{48{MEM_DATA_FROM_ALU[15]}},{MEM_DATA_FROM_ALU[15:0]}};
        end
        Store_1Byte: begin 
 
           WRITE_DATA_BUF = {{56{MEM_DATA_FROM_ALU[7]}},{MEM_DATA_FROM_ALU[7:0]}};
        end
        default: begin 

           WRITE_DATA_BUF = MEM_DATA_FROM_ALU;
        end
        endcase
    end
    
        default:WRITE_DATA_BUF = 64'hffffff;
    endcase
        
    end
    else begin
        WRITE_DATA_BUF = 64'hffff;
    end

   
end





endmodule