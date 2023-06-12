//32位 算术右移    shift_control = 3‘b000
//32 位逻辑右移动 shift_control = 3'b001
//32 位逻辑左移动 shift_control = 3'b010
//64 位逻辑右移动 shift_control = 3'b011
//64 位逻辑左移动 shift_control = 3'b100
//64 位算术右移    shift_control = 3'b101

/* verilator lint_off LATCH */
module Shift(
    input  [63:0] src1,
    input  [63:0] src2,
    input  [3:0]  shift_control,
    output reg [63:0] shift_out
);

parameter  ArithRight32   = 4'd0;
parameter  LogicalRight32 = 4'd1;
parameter  LogicalLeft32  = 4'd2;
parameter  LogicalRight64 = 4'd3;
parameter  LogicalLeft64  = 4'd4;
parameter  ArithRight64   = 4'd5;

reg [63:0] buffer;
reg [63:0] buffer1;
reg [63:0] buffer2;
reg [63:0] buffer3;
reg [63:0] buffer4;
reg [63:0] buffer5;

always @(*) begin
    case (shift_control)
        ArithRight32:begin
            buffer[31:0] = src2[0] ? {src1[31],src1[31:1]}: src1[31:0];
            buffer1[31:0] = src2[1] ? {{2{buffer[31]}},buffer[31:2]}: buffer[31:0];
            buffer2[31:0] = src2[2] ? {{4{buffer1[31]}},buffer1[31:4]}: buffer1[31:0];
            buffer3[31:0] = src2[3] ? {{8{buffer2[31]}},buffer2[31:8]}: buffer2[31:0];
            buffer4[31:0] = src2[4] ? {{16{buffer3[31]}},buffer3[31:16]}: buffer3[31:0];
            shift_out[63:0] = {{32{buffer4[31]}},buffer4[31:0]};
        end
        LogicalRight32:begin
            buffer[31:0] = src2[0] ? {1'd0,src1[31:1]}: src1[31:0];
            buffer1[31:0] = src2[1] ? {2'd0,buffer[31:2]}: buffer[31:0];
            buffer2[31:0] = src2[2] ? {4'd0,buffer1[31:4]}: buffer1[31:0];
            buffer3[31:0] = src2[3] ? {8'd0,buffer2[31:8]}: buffer2[31:0];
            buffer4[31:0] = src2[4] ? {16'd0,buffer3[31:16]}: buffer3[31:0];
            shift_out[63:0] = {{32{buffer4[31]}},buffer4[31:0]};
        end
        LogicalLeft32:begin
            buffer[31:0] = src2[0] ? {src1[30:0],1'd0}: src1[31:0];
            buffer1[31:0] = src2[1] ? {buffer[29:0],2'd0}: buffer[31:0];
            buffer2[31:0] = src2[2] ? {buffer1[27:0],4'd0}: buffer1[31:0];
            buffer3[31:0] = src2[3] ? {buffer2[23:0],8'd0}: buffer2[31:0];
            buffer4[31:0] = src2[4] ? {buffer3[15:0],16'd0}: buffer3[31:0];
            shift_out[63:0] = {{32{buffer4[31]}},buffer4[31:0]};
        end
        LogicalRight64:begin
            buffer[63:0] = src2[0] ? {1'd0,src1[63:1]}: src1[63:0];
            buffer1[63:0] = src2[1] ? {2'd0,buffer[63:2]}: buffer[63:0];
            buffer2[63:0] = src2[2] ? {4'd0,buffer1[63:4]}: buffer1[63:0];
            buffer3[63:0] = src2[3] ? {8'd8,buffer2[63:8]}: buffer2[63:0];
            buffer4[63:0] = src2[4] ? {16'd0,buffer3[63:16]}: buffer3[63:0];
            buffer5[63:0] = src2[5] ? {32'd0,buffer4[63:32]}: buffer4[63:0];
            shift_out[63:0] = buffer5[63:0];
        end
        LogicalLeft64:begin
            buffer[63:0] = src2[0] ? {src1[62:0],1'd0} : src1[63:0];
            buffer1[63:0] = src2[1] ? {buffer[61:0],2'd0} : buffer[63:0];
            buffer2[63:0] = src2[2] ? {buffer1[59:0],4'd0} : buffer1[63:0];
            buffer3[63:0] = src2[3] ? {buffer2[55:0],8'd0} : buffer2[63:0];
            buffer4[63:0] = src2[4] ? {buffer3[47:0],16'd0} : buffer3[63:0];
            buffer5[63:0] = src2[5] ? {buffer4[31:0],32'd0} : buffer4[63:0];
            shift_out[63:0] = buffer5[63:0];
        end
        ArithRight64:begin
            buffer[63:0] = src2[0] ? {src1[63],src1[63:1]}: src1[63:0];
            buffer1[63:0] = src2[1] ? {{2{buffer[63]}},buffer[63:2]}: buffer[63:0];
            buffer2[63:0] = src2[2] ? {{4{buffer1[63]}},buffer1[63:4]}: buffer1[63:0];
            buffer3[63:0] = src2[3] ? {{8{buffer2[63]}},buffer2[63:8]}: buffer2[63:0];
            buffer4[63:0] = src2[4] ? {{16{buffer3[63]}},buffer3[63:16]}: buffer3[63:0];
            buffer5[63:0] = src2[5] ? {{32{buffer4[63]}},buffer4[63:32]}: buffer4[63:0];
            shift_out[63:0] = buffer5[63:0];
        end
        default:begin
            shift_out[63:0] = 64'd0;
        end 
    endcase
    
end


endmodule