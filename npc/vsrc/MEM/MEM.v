import "DPI-C" function void pmem_read(input longubt raddr,output rdata);
import "DPI-C" function void pmem_write(input longint waddr,input longint wdata,input byte wmask);


module MEM(
    input  [63:0]MEM_Address,
    input  [63:0] Data_Write,
    input  [3:0] Ctrl;
    output [63;0]MEM_Data_out
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


wire [63:0] Data_From_MEM;
wire [63:0] Data_To_MEM = Data_Write;  // Data need to be write

always @(*) begin
    case (Ctrl[3])
    1'd0:begin

        pmem_read(MEM_Address,Data_From_MEM); // read data through dpi-c

    MuxKeyWithDefault #(5,4,64) Read (MEM_Data_out, Ctrl , 64'd0 ,{
        Load_8Bytes,Data_From_MEM,
        Load_2Bytes,{{48{1'b0}},Data_From_MEM[15:0]},
        Load_1Bytes,{{54{1'b0}},Data_From_MEM[7:0]},
        Load_4Bytes_SEXT,{{32{Data_From_MEM[31]}},Data_From_MEM[31:0]},
        Load_2Bytes_SEXT,{{48{Data_From_MEM[15]}},Data_From_MEM[15:0]}
    });
        end


    1'd1:begin

        case(Ctrl)
        Store_8Byte: pmem_write(MEM_Address,Data_Write,8);
        Store_4Byte: pmem_write(MEM_Address,{32{Data_Write[31]},{Data_Write[31:0]}},4);
        Store_2Byte: pmem_write(MEM_Address,{48{Data_Write[15]},{Data_Write[15:0]}},2);
        Store_1Byte: pmem_write(MEM_Address,{56{Data_Write[7]},{Data_Write[7:0]}},1);
        default:pmem_write(MEM_Address,Data_Write,8);
        endcase
    end
        default:Load_8Bytes = 64'd0;
    endcase
end





endmodule