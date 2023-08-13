//import "DPI-C" function void pmem_read(input longint raddr,output longint rdata,input longint len);
//import "DPI-C" function void pmem_write(input longint waddr,input longint wdata,input byte wmask);


module MEM(
    input         clk,
    input  [63:0] MEM_Address,
    input  [63:0] Data_Write,
    input         MEM_Enable,
    input  [3:0]  Ctrl,
    output reg [63:0]MEM_Data_out,//内部数据通路

    output        MEM_Enable_Top,
    output        MEM_Read_Top,
    output [3:0]  MEM_DataLenth_Top,
    output [63:0] MEM_Addr_Top,
    output [63:0] MEM_Dataoutput_Top,
    input  [63:0] MEM_Dataiput_Top
 
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

/* verilator lint_off UNOPTFLAT */
//reg [63:0] Data_From_MEM;
//wire [63:0] Data_To_MEM = Data_Write;  // Data need to be write

assign MEM_Enable_Top = MEM_Enable;

parameter MEM_Read  = 1;
parameter MEM_Write = 0;


always@(*) begin
    if (MEM_Enable) begin
         case (Ctrl[3])
        1'b0:begin
        case(Ctrl)
            Load_8Bytes: begin
                //pmem_read(MEM_Address, Data_From_MEM, 64'd8);// read data through dpi-c
                //MEM_Data_out = Data_From_MEM;

                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 8;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out = MEM_Dataiput_Top;
            end
            Load_2Bytes: begin 
                // pmem_read(MEM_Address, Data_From_MEM, 64'd2);
                // MEM_Data_out = {{48{1'b0}},Data_From_MEM[15:0]};

                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 2;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out ={{48{1'b0}},MEM_Dataiput_Top[15:0]};
            end
            Load_1Bytes: begin 
                // pmem_read(MEM_Address, Data_From_MEM, 64'd1);
                // MEM_Data_out = {{56{1'b0}},Data_From_MEM[7:0]};
                
                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 1;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out ={{56{1'b0}},MEM_Dataiput_Top[7:0]};
            end
            Load_4Bytes_SEXT: begin 
                // pmem_read(MEM_Address, Data_From_MEM, 64'd4);
                // MEM_Data_out = {{32{Data_From_MEM[31]}},Data_From_MEM[31:0]};
                
                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 4;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out = {{32{MEM_Dataiput_Top[31]}},MEM_Dataiput_Top[31:0]};  
            end
            Load_2Bytes_SEXT: begin 
                // pmem_read(MEM_Address, Data_From_MEM, 64'd2);
                // MEM_Data_out = {{48{Data_From_MEM[15]}},Data_From_MEM[15:0]};

                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 2;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out = {{48{MEM_Dataiput_Top[15]}},MEM_Dataiput_Top[15:0]};
            end

            Load_4Bytes:begin
                // pmem_read(MEM_Address, Data_From_MEM, 64'd4);
                // MEM_Data_out = {{32{1'b0}},Data_From_MEM[31:0]};

                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 4;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out = {{32{1'b0}},MEM_Dataiput_Top[31:0]};
            end
            default: begin 
                // pmem_read(MEM_Address, Data_From_MEM, 8);
                // MEM_Data_out = Data_From_MEM;

                MEM_Addr_Top = MEM_Address;
                MEM_DataLenth_Top = 8;
                MEM_Read_Top = MEM_Read;
                MEM_Data_out = MEM_Dataiput_Top;
            end
            endcase
    end

    1'b1:begin

        case(Ctrl)
        Store_8Byte: begin
            //pmem_write(MEM_Address,Data_Write,8);

            MEM_Addr_Top = MEM_Address;
            MEM_Read_Top = MEM_Write;
            MEM_DataLenth_Top = 8;
            MEM_Dataoutput_Top = Data_Write;
        end
        Store_4Byte: begin 
           // pmem_write(MEM_Address,{{32{Data_Write[31]}},{Data_Write[31:0]}},4);

           MEM_Addr_Top = MEM_Address;
           MEM_Read_Top = MEM_Write;
           MEM_DataLenth_Top = 4;
           MEM_Dataoutput_Top = {{32{Data_Write[31]}},{Data_Write[31:0]}};
        end
        Store_2Byte: begin 
           // pmem_write(MEM_Address,{{48{Data_Write[15]}},{Data_Write[15:0]}},2);

           MEM_Addr_Top = MEM_Address;
           MEM_Read_Top = MEM_Write;
        MEM_DataLenth_Top = 2;
        MEM_Dataoutput_Top = {{48{Data_Write[15]}},{Data_Write[15:0]}};
        end
        Store_1Byte: begin 
           //pmem_write(MEM_Address,{{56{Data_Write[7]}},{Data_Write[7:0]}},1);

           MEM_Addr_Top = MEM_Address;
           MEM_Read_Top = MEM_Write;
           MEM_DataLenth_Top = 1;
           MEM_Dataoutput_Top = {{56{Data_Write[7]}},{Data_Write[7:0]}};
        end
        default: begin 
           // pmem_write(MEM_Address,Data_Write,8);

           MEM_Addr_Top = MEM_Address;
           MEM_Read_Top = MEM_Write;
           MEM_DataLenth_Top = 8;
           MEM_Dataoutput_Top = Data_Write;
        end
        endcase
    end
        default:MEM_Data_out = 64'hffffff;
    endcase
        
    end
    else begin
        MEM_Data_out = 64'hffff;
    end

   
end





endmodule