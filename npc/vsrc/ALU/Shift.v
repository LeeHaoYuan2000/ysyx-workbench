//32位 算术右移    shift_control = 3‘b000
//32 位逻辑右移动 shift_control = 3'b001
//32 位逻辑左移动 shift_control = 3'b010
//64 位逻辑右移动 shift_control = 3'b011
//64 位逻辑左移动 shift_control = 3'b100
//64 位算术右移    shift_control = 3'b101

`define ArithRight32   3'b000
`define LogicalRight32 3'b001
`define LogicalLeft32  3'b010
`define LogicalRight64 3'b011
`define LogicalLeft64  3'b100
`define ArithRight64   3'b101

module Shift(
    input  [63:0] src1,
    input  [63:0] src2,
    input  [2:0]  shift_control,
    output reg [63:0] shift_out
);

reg [63:0] buffer;

always @(*) begin
    case (shift_control)
        ArithRight32:begin
            buffer[31:0] = src2[0] ? {src1[31],src1[31:1]}: src1[31:0];
            buffer[31:0] = src2[1] ? {{2{buffer[31]}},buffer[31:2]}: buffer[31:0];
            buffer[31:0] = src2[2] ? {{4{buffer[31]}},buffer[31:4]}: buffer[31:0];
            buffer[31:0] = src2[3] ? {{8{buffer[31]}},buffer[31:8]}: buffer[31:0];
            buffer[31:0] = src2[4] ? {{16{buffer[31]}},buffer[31:16]}: buffer[31:0];
            shift_out[63:0] = {{32{buffer[31]}},buffer[31:0]};
        end
        LogicalRight32:begin
            buffer[31:0] = src2[0] ? {1'd0,src1[31:1]}: src1[31:0];
            buffer[31:0] = src2[1] ? {2'd0,uffer[31:2]}: buffer[31:0];
            buffer[31:0] = src2[2] ? {4'd0,buffer[31:4]}: buffer[31:0];
            buffer[31:0] = src2[3] ? {8'd0,buffer[31:8]}: buffer[31:0];
            buffer[31:0] = src2[4] ? {16'd0,buffer[31:16]}: buffer[31:0];
            shift_out[63:0] = {{32{buffer[31]}},buffer[31:0]};
        end
        LogicalLeft32:begin
            buffer[31:0] = src2[0] ? {src1[30:0],1'd0}: src1[31:0];
            buffer[31:0] = src2[1] ? {buffer[29:0],2'd0}: buffer[31:0];
            buffer[31:0] = src2[2] ? {buffer[27:0],4'd0}: buffer[31:0];
            buffer[31:0] = src2[3] ? {buffer[23:0],8'd0}: buffer[31:0];
            buffer[31:0] = src2[4] ? {buffer[15:0],16'd0}: buffer[31:0];
            shift_out[63:0] = {{32{buffer[31]}},buffer[31:0]};
        end
        LogicalRight64:begin
            buffer[63:0] = src2[0] ? {1'd0,src1[63:1]}: src1[63:0];
            buffer[63:0] = src2[1] ? {2'd0,buffer[63:2]}: buffer[63:0];
            buffer[63:0] = src2[2] ? {4'd0,buffer[63:4]}: buffer[63:0];
            buffer[63:0] = src2[3] ? {8'd8,buffer[63:8]}: buffer[63:0];
            buffer[63:0] = src2[4] ? {16'd0,buffer[63:16]}: buffer[63:0];
            buffer[63:0] = src2[5] ? {32'd0,buffer[63:32]}: buffer[63:0];
            shift_out[63:0] = buffer[63:0];
        end
        LogicalLeft64:begin
            buffer[63:0] = src2[0] ? {src1[62:0],1'd0} : src1[63:0];
            buffer[63:0] = src2[1] ? {buffer[61:0],2'd0} : buffer[63:0];
            buffer[63:0] = src2[2] ? {buffer[59:0],4'd0} : buffer[63:0];
            buffer[63:0] = src2[3] ? {buffer[55:0],8'd0} : buffer[63:0];
            buffer[63:0] = src2[4] ? {buffer[47:0],16'd0} : buffer[63:0];
            buffer[63:0] = src2[5] ? {buffer[31:0],32'd0} : buffer[63:0];
            shift_out[63:0] = buffer[63:0];
        end
        ArithRight64:begin
            buffer[63:0] = src2[0] ? {src1[63],src1[63:1]}: src1[63:0];
            buffer[63:0] = src2[1] ? {{2{buffer[63]}},buffer[63:2]}: buffer[63:0];
            buffer[63:0] = src2[2] ? {{4{buffer[63]}},buffer[63:4]}: buffer[63:0];
            buffer[63:0] = src2[3] ? {{8{buffer[63]}},buffer[63:8]}: buffer[63:0];
            buffer[63:0] = src2[4] ? {{16{buffer[63]}},buffer[63:16]}: buffer[63:0];
            buffer[63:0] = src2[5] ? {{32{buffer[63]}},buffer[63:32]}: buffer[63:0];
            shift_out[63:0] = buffer[63:0];
        end
        default: begin
            shift_out[63:0] = buffer[63:0];
        end 
    endcase
    
end


endmodule