import "DPI-C" function void pmem_read(input longint raddr,output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr,input longint wdata,input byte wmask);


module MEM(
    input  [63:0] MEM_Address,
    input  [63:0] Data_Write,
    input         MEM_Enable,
    input  [3:0]  Ctrl,
    output reg [63:0]MEM_Data_out
);

parameter Load_8Bytes       = 4'b0000;
parameter Load_2Bytes       = 4'b0001;
parameter Load_1Bytes       = 4'b0010;
parameter Load_4Bytes_SEXT  = 4'b0011;
parameter Load_2Bytes_SEXT  = 4'b0100;

parameter Store_8Byte   = 4'b1000;
parameter Store_4Byte   = 4'b1001;
parameter Store_2Byte   = 4'b1010;
parameter Store_1Byte   = 4'b1011;

/* verilator lint_off UNOPTFLAT */
reg [63:0] Data_From_MEM;


wire [63:0] Data_To_MEM = Data_Write;  // Data need to be write


always@(*) begin
    if (MEM_Enable) begin
         case (Ctrl[3])
        1'b0:begin

         pmem_read(MEM_Address,Data_From_MEM);// read data through dpi-c

        case(Ctrl)
            Load_8Bytes: begin
                MEM_Data_out = Data_From_MEM;
            end
            Load_2Bytes: begin 
                MEM_Data_out = {{48{1'b0}},Data_From_MEM[15:0]};
            end
            Load_1Bytes: begin 
                MEM_Data_out = {{56{1'b0}},Data_From_MEM[7:0]};
            end
            Load_4Bytes_SEXT: begin 
                MEM_Data_out = {{32{Data_From_MEM[31]}},Data_From_MEM[31:0]};
            
            end
            Load_2Bytes_SEXT: begin 
                MEM_Data_out = {{48{Data_From_MEM[15]}},Data_From_MEM[15:0]};
            end
            default: begin 
                MEM_Data_out = Data_From_MEM;
            end
            endcase
    end

    1'b1:begin

        case(Ctrl)
        Store_8Byte: begin
            pmem_write(MEM_Address,Data_Write,8);
        end
        Store_4Byte: begin 
            pmem_write(MEM_Address,{{32{Data_Write[31]}},{Data_Write[31:0]}},4);
        end
        Store_2Byte: begin 
            pmem_write(MEM_Address,{{48{Data_Write[15]}},{Data_Write[15:0]}},2);
        end
        Store_1Byte: begin 
            pmem_write(MEM_Address,{{56{Data_Write[7]}},{Data_Write[7:0]}},1);
        end
        default: begin 
            pmem_write(MEM_Address,Data_Write,8);
        end
        endcase
    end
        default:MEM_Data_out = Data_From_MEM;
    endcase
        
    end
    else begin
        MEM_Data_out = 64'd0;
    end

   
end





endmodule