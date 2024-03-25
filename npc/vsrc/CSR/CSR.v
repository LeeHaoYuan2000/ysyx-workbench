module CSR (
    input rst,
    input clk,

    input      [11:0]  read_address,
    output reg [63:0]   read_result,

    input      [11:0]   write_address,
    input      [63:0]   wirte_date,
    input               write_en,

    input      [63:0]   mcause_in,
    output reg [63:0]   mcause,
    input               mcause_wen,

    input      [63:0]   mepc_in,
    output reg [63:0]   mepc,
    input               mepc_wen,

    input      [63:0]   mtvec_in,
    output reg [63:0]   mtvec,
    input               mtvec_wen
);

reg [63:0] mcause_reg;
reg [63:0] mepc_reg;
reg [63:0] mtvec_reg;

assign mcause = mcause_reg;
assign mepc   = mepc_reg;
assign mtvec  = mtvec_reg;

parameter mtvec_address  = 12'h305;
parameter mepc_address   = 12'h341;
parameter mcause_address = 12'h342;

//direct write the reg
always@(posedge clk)begin
    if(rst)begin
        mcause_reg <= 64'd0;
    end
    else if(mcause_wen)begin
        mcause_reg <= mcause_in;
    end
end

always@(posedge clk)begin
    if(rst)begin
        mepc_reg <= 64'd0;
    end
    else if(mepc_wen)begin
        mepc_reg <= mepc_in; 
    end
end

always@(posedge clk)begin
    if(rst)begin
        mtvec_reg <= 64'd0;
    end
    else if(mtvec_wen)begin
        mtvec_reg <= mtvec_in;
    end
end
//

//read reg by address

always@(*)begin
    case (read_address)
        mtvec_address:begin
            read_result = mtvec_reg;
        end
        mepc_address:begin
            read_result = mepc_reg;
        end
        mcause_address:begin
            read_result = mcause_reg;
        end
        default:read_result = 64'd0;
    endcase
end

//write by address
always@(posedge clk)begin
    case (write_address)
        mtvec_address:begin
             mtvec_reg <= wirte_date;

             mepc_reg   <= mepc_reg;
             mcause_reg <= mcause_reg;
        end
        mepc_address:begin
             mepc_reg   <= wirte_date;

             mtvec_reg  <= mtvec_reg;
             mcause_reg <= mcause_reg;
        end
        mcause_address:begin
             mcause_reg <= wirte_date;

             mtvec_reg  <= mtvec_reg;
             mepc_reg   <= mepc_reg;
        end
        default: begin
            mtvec_reg  <= mtvec_reg;
            mepc_reg   <= mepc_reg;
            mcause_reg <= mcause_reg;
        end
    endcase
end


endmodule