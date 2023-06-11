`define  MUX_neq_unsigned   4'd0
`define  MUX_eq_unsigned    4'd1
`define  MUX_more_eq_signed 4'd2
`define  MUX_less_signed    4'd3
`define  MUX_less_unsigned  4'd4


module Compare(
    input  [63:0] src1,
    input  [63:0] src2,
    input  [3:0]  Compare_Control,
    output [63:0] Compare_Result 
);

wire signed  [63:0]S_src1;
wire signed  [63:0]S_src2;

assign S_src1 = src1;
assign S_src2 = src2;

//do the operation
assign non_eq_unsigned   = (src1   != src2);
assign eq_unsigned       = (src1   == src2);
assign more_eq_signed    = (S_src1 >= S_src2);
assign less_signed       = (S_src1 <  S_src2);
assign less_unsigned     = (src1   <  src2);

always@(*)begin
    case (Compare_Control)
        MUX_neq_unsigned    : Compare_Result = {64{non_eq_unsigned}};
        MUX_eq_unsigned     : Compare_Result = {64{eq_unsigned}};
        MUX_more_eq_signed  : Compare_Result = {64{more_eq_signed}};
        MUX_less_signed     : Compare_Result = {64{less_signed}};
        MUX_less_unsigned   : Compare_Result = {64{less_unsigned}};
        default             : Compare_Result = 64'd0;
    endcase
end


endmodule