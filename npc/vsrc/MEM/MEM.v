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



wire [63:0] Data_From_MEM;
wire [63:0] Data_To_MEM = Data_Write;

always @(*) begin
    case (Ctrl[3])
    1'd0:begin
    MuxKeyWithDefault #(5,4,64) Byte_Read_Write (MEM_Data_out, Ctrl , 64'd0 ,{
        Load_8Bytes,Data_From_MEM,
        Load_2Bytes,{{48{1'b0}},Data_From_MEM[15:0]},
        Load_1Bytes,{{54{1'b0}},Data_From_MEM[7:0]},
        Load_4Bytes_SEXT,{{32{Data_From_MEM[31]}},Data_From_MEM[31:0]},
        Load_2Bytes_SEXT,{{48{Data_From_MEM[15]}},Data_From_MEM[15:0]}
    });
        end
    1'd1:begin
        
    end
        default:Load_8Bytes = 64'd0;
    endcase
end





endmodule