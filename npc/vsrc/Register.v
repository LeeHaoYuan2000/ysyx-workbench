module Register(
    input [4:0] rs1Addr,
    input [4:0] rs2Addr,
    input [4:0] rdAddr,
    input [63:0] dataBack, //write data back after processing by alu

    output reg[63:0] rs1Data,
    output reg[63:0] rs2Data
);

reg [63:0] zero;reg [63:0] ra;reg [63:0] sp;reg [63:0] gp;
reg [63:0] tp;reg [63:0] t0;reg [63:0] t1;reg [63:0] t2;
reg [63:0] s0;reg [63:0] s1;reg [63:0] a0;reg [63:0] a1;
reg [63:0] a2;reg [63:0] a3;reg [63:0] a4;reg [63:0] a5;
reg [63:0] a6;reg [63:0] a7;reg [63:0] s2;reg [63:0] s3;
reg [63:0] s4;reg [63:0] s5;reg [63:0] s6;reg [63:0] s7;
reg [63:0] s8;reg [63:0] s9;reg [63:0] s10;reg [63:0] s11;
reg [63:0] t3;reg [63:0] t4;reg [63:0] t5;reg [63:0] t6;

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

Mux mux2rd #() ();

endmodule






