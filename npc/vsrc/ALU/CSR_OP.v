module CSR_OP(
    
    input [63:0]        src1,
    input [63:0]        src2,
    input [3:0]         control,
    output reg [63:0]   result_out, //output R(rd) or mem address

    output reg [11:0]   CSR_Read_Addr,
    input  [63:0]       CSR_Read_Data,

    output reg [11:0]   CSR_Write_Addr,
    output [63:0]       CSR_Write_Data,
    output reg          Write_En,

    output reg [63:0]   mcause_Write_Data,
    input  [63:0]       mcause_Read_Data,
    output reg          mcause_En,

    output reg [63:0]   mepc_Write_Data,
    input  [63:0]       mepc_Read_Data,
    output              mepc_En,

    output reg [63:0]   mtvec_Write_Data,
    input  [63:0]       mtvec_Read_Data,
    output reg          mtvec_En
);


parameter csrrw = 4'd0;
parameter csrrs = 4'd1;
parameter ecall = 4'd2;
parameter mret  = 4'd3;

reg [63:0] t;

always@(*)begin
    case(control)
    csrrw:begin
        CSR_Read_Addr  = src2[11:0];
        result_out     = CSR_Read_Data;

        //CSR(imm) = src1
        CSR_Write_Addr = src2[11:0];
        CSR_Write_Data = src1;

        mcause_Write_Data  = 64'd0;
        mcause_En          = 1'd0;
        mepc_Write_Data    = 64'd0;
        mepc_En            = 1'd0;
        mtvec_Write_Data   = 64'd0;
        mtvec_En           = 1'd0;
    end
    csrrs:begin
        CSR_Read_Addr  = src2[11:0];
        result_out     = CSR_Read_Data;

        //CSR(imm) = t | src1
        CSR_Write_Addr = src2[11:0];
        CSR_Write_Data = CSR_Read_Data | src1;

        mcause_Write_Data  = 64'd0;
        mcause_En          = 1'd0;
        mepc_Write_Data    = 64'd0;
        mepc_En            = 1'd0;
        mtvec_Write_Data   = 64'd0;
        mtvec_En           = 1'd0;
    end
    ecall:begin
        mcause_En      = 1'b1;
        mepc_En        = 1'b1;

        mcause_Write_Data = 11;
        mepc_Write_Data   = src1;
        
        result_out     = mtvec_Read_Data;

        CSR_Write_Data     = 64'd0;
        CSR_Read_Addr      = 12'd0;
        CSR_Write_Addr     = 12'd0;
        mcause_En          = 1'd0;
        mtvec_Write_Data   = 64'd0;
        mtvec_En           = 1'd0;
    end
    mret:begin

        CSR_Read_Addr = src2[11:0];
        result_out    = CSR_Read_Data;

        CSR_Write_Addr     = 12'd0;
        CSR_Write_Data     = 64'd0;
        mcause_Write_Data  = 64'd0;
        mcause_En          = 1'd0;
        mepc_Write_Data    = 64'd0;
        mepc_En            = 1'd0;
        mtvec_Write_Data   = 64'd0;
        mtvec_En           = 1'd0;
    end
    default:begin
        result_out         = 64'd0;
        CSR_Read_Addr      = 12'd0;
        CSR_Write_Addr     = 12'd0;
        CSR_Write_Data     = 64'd0;
        mcause_Write_Data  = 64'd0;
        mcause_En          = 1'd0;
        mepc_Write_Data    = 64'd0;
        mepc_En            = 1'd0;
        mtvec_Write_Data   = 64'd0;
        mtvec_En           = 1'd0;
    end
    endcase
end




endmodule