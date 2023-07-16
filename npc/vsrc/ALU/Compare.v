module Compare(
    input  [63:0] src1,
    input  [63:0] src2,
    input  [3:0]  Compare_Control,
    output reg [63:0] Compare_Result 
);

parameter MUX_neq_unsigned   = 4'd0;
parameter MUX_eq_unsigned    = 4'd1;
parameter MUX_more_eq_signed = 4'd2;
parameter MUX_less_signed    = 4'd3;
parameter MUX_less_unsigned  = 4'd4;

wire signed  [63:0]S_src1;
wire signed  [63:0]S_src2;

assign S_src1 = src1;
assign S_src2 = src2;

//do the operation
wire non_eq_unsigned   = (src1   != src2);
wire eq_unsigned       = (src1   == src2);
wire more_eq_signed    = (S_src1 >= S_src2);
wire less_signed       = (S_src1 <  S_src2);
wire less_unsigned     = (src1   <  src2);

always@(*)begin
    case (Compare_Control)
        4'd0    : Compare_Result = {{63{1'b0}},{non_eq_unsigned}};    //MUX_neq_unsigned  
        4'd1    : Compare_Result = {{63{1'b0}},{eq_unsigned}};    //MUX_eq_unsigned   
        4'd2    : Compare_Result = {{63{1'b0}},{more_eq_signed}};    //MUX_more_eq_signed
        4'd3    : Compare_Result = {{63{1'b0}},{less_signed}};    //MUX_less_signed   
        4'd4    : Compare_Result = {{63{1'b0}},{less_unsigned}};    //MUX_less_unsigned 
        default             : Compare_Result = 64'd0;
    endcase
end


endmodule