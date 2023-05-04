module Register(
    input [4:0] rs1Addr,
    input [4:0] rs2Addr,
    input [4:0] rdAddr,
    input [63:0] dataBack, //write data back after processing by alu

    output reg[63:0] rs1Data,
    output reg[63:0] rs2Data
);

reg [63:0] zero = 64'd0;reg [63:0] ra = 64'd0;reg [63:0] sp = 64'd0;reg [63:0] gp = 64'd0;
reg [63:0] tp = 64'd0;reg [63:0] t0 = 64'd0;reg [63:0] t1 = 64'd0;reg [63:0] t2 = 64'd0;
reg [63:0] s0 = 64'd0;reg [63:0] s1 = 64'd0;reg [63:0] a0 = 64'd0;reg [63:0] a1 = 64'd0;
reg [63:0] a2 = 64'd0;reg [63:0] a3 = 64'd0;reg [63:0] a4 = 64'd0;reg [63:0] a5 = 64'd0;
reg [63:0] a6 = 64'd0;reg [63:0] a7 = 64'd0;reg [63:0] s2 = 64'd0;reg [63:0] s3 = 64'd0;
reg [63:0] s4 = 64'd0;reg [63:0] s5 = 64'd0;reg [63:0] s6 = 64'd0;reg [63:0] s7 = 64'd0;
reg [63:0] s8 = 64'd0;reg [63:0] s9 = 64'd0;reg [63:0] s10 = 64'd0;reg [63:0] s11 = 64'd0;
reg [63:0] t3 = 64'd0;reg [63:0] t4 = 64'd0;reg [63:0] t5 = 64'd0;reg [63:0] t6 = 64'd0;

reg number[63:0];

Mux mux2rs1 #(32,5,64) (rs1Data,rs1Addr,{
    5'd0,zero,5'd1,ra,
    5'd2,sp,5'd3,gp,
    5'd4,tp,5'd5,t0,
    5'd6,t1,5'd7,t2,
    5'd8,s0,5'd9,s1,
    5'd10,a0,5'd11,a1,
    5'd12,a2,5'd13,a3,
    5'd14,a4,5'd15,a5,
    5'd16,a6,5'd17,a7,
    5'd18,s2,5'd19,s3,
    5'd20,s4,5'd21,s5,
    5'd22,s6,5'd23,s7,
    5'd24,s8,5'd25,s9,
    5'd26,s10,5'd27,s11,
    5'd28,t3,5'd29,t4,
    5'd30,t5,5'd31,t6
});

Mux mux2rs2 #(32,5,64) (rs2Data,rs2Addr,{
    5'd0,zero,5'd1,ra,
    5'd2,sp,5'd3,gp,
    5'd4,tp,5'd5,t0,
    5'd6,t1,5'd7,t2,
    5'd8,s0,5'd9,s1,
    5'd10,a0,5'd11,a1,
    5'd12,a2,5'd13,a3,
    5'd14,a4,5'd15,a5,
    5'd16,a6,5'd17,a7,
    5'd18,s2,5'd19,s3,
    5'd20,s4,5'd21,s5,
    5'd22,s6,5'd23,s7,
    5'd24,s8,5'd25,s9,
    5'd26,s10,5'd27,s11,
    5'd28,t3,5'd29,t4,
    5'd30,t5,5'd31,t6
});

always @(*) begin
    case(rdAddr)
        5'd0:number[63:0] = dataBack[63:0];
        5'd1:ra[63:0] = dataBack[63:0];
        5'd2:sp[63:0] = dataBack[63:0];
        5'd3:gp[63:0] = dataBack[63:0];
        5'd4:tp[63:0] = dataBack[63:0];
        5'd5:t0[63:0] = dataBack[63:0];
        5'd6:t1[63:0] = dataBack[63:0];
        5'd7:t2[63:0] = dataBack[63:0];
        5'd8:s0[63:0] = dataBack[63:0];
        5'd9:s1[63:0] = dataBack[63:0];
        5'd10:a0[63:0] = dataBack[63:0];
        5'd11:a1[63:0] = dataBack[63:0];
        5'd12:a2[63:0] = dataBack[63:0];
        5'd13:a3[63:0] = dataBack[63:0];
        5'd14:a4[63:0] = dataBack[63:0];
        5'd15:a5[63:0] = dataBack[63:0];
        5'd16:a6[63:0] = dataBack[63:0];
        5'd17:a7[63:0] = dataBack[63:0];
        5'd18:s2[63:0] = dataBack[63:0];
        5'd19:s3[63:0] = dataBack[63:0];
        5'd20:s4[63:0] = dataBack[63:0];
        5'd21:s5[63:0] = dataBack[63:0];
        5'd22:s6[63:0] = dataBack[63:0];
        5'd23:s7[63:0] = dataBack[63:0];
        5'd24:s8[63:0] = dataBack[63:0];
        5'd25:s9[63:0] = dataBack[63:0];
        5'd26:s10[63:0] = dataBack[63:0];
        5'd27:s11[63:0] = dataBack[63:0];
        5'd28:t3[63:0] = dataBack[63:0];
        5'd29:t4[63:0] = dataBack[63:0];
        5'd30:t5[63:0] = dataBack[63:0];
        5'd31:t6[63:0] = dataBack[63:0];
        default:number[63:0] = dataBack[63:0];    
    endcase
    
end
endmodule






