

/* verilator lint_off UNOPTTHREADS */
module REG(
    input clk,
    input rst,
    input [4:0] RS1,
    input [4:0] RS2,
    input [4:0] RD,
    input [63:0] RD_Back,
    input Enable_Control, //Write Back enable
    output [63:0] RS1_Reg,
    output [63:0] RS2_Reg
);


reg [63:0] Zero ; reg [63:0] ra ; reg [63:0] sp  ; reg [63:0] gp  ;
reg [63:0] tp   ; reg [63:0] t0 ; reg [63:0] t1  ; reg [63:0] t2  ;
reg [63:0] s0   ; reg [63:0] s1 ; reg [63:0] a0  ; reg [63:0] a1  ;
reg [63:0] a2   ; reg [63:0] a3 ; reg [63:0] a4  ; reg [63:0] a5  ;
reg [63:0] a6   ; reg [63:0] a7 ; reg [63:0] s2  ; reg [63:0] s3  ;
reg [63:0] s4   ; reg [63:0] s5 ; reg [63:0] s6  ; reg [63:0] s7  ;
reg [63:0] s8   ; reg [63:0] s9 ; reg [63:0] s10 ; reg [63:0] s11 ;
reg [63:0] t3   ; reg [63:0] t4 ; reg [63:0] t5  ; reg [63:0] t6  ;

always@(posedge clk) begin
    if(rst)
        begin
            Zero <= 64'd0;  ra <= 64'd1;  sp <= 64'd2;  gp  <= 64'd3;
            tp   <= 64'd4;  t0 <= 64'd5;  t1 <= 64'd6;  t2  <= 64'd7;
            s0   <= 64'd8;  s1 <= 64'd9;  a0 <= 64'd10;  a1  <= 64'd11;
            a2   <= 64'd12;  a3 <= 64'd13;  a4 <= 64'd14;  a5  <= 64'd15;
            a6   <= 64'd16;  a7 <= 64'd17;  s2 <= 64'd18;  s3  <= 64'd19;
            s4   <= 64'd20;  s5 <= 64'd21;  s6 <= 64'd22;  s7  <= 64'd23;
            s8   <= 64'd24;  s9 <= 64'd25;  s10<= 64'd26;  s11 <= 64'd27;
            t3   <= 64'd28;  t4 <= 64'd29;  t5 <= 64'd30;  t6  <= 64'd31;
        end
    else if(Enable_Control)
        begin
            case(RD)
            5'd0 :Zero <= 64'd0        ;  5'd1 :ra <= RD_Back[63:0];  5'd2 :sp <= RD_Back[63:0];  5'd3 :gp  <= RD_Back[63:0];
            5'd4 :tp   <= RD_Back[63:0];  5'd5 :t0 <= RD_Back[63:0];  5'd6 :t1 <= RD_Back[63:0];  5'd7 :t2  <= RD_Back[63:0];
            5'd8 :s0   <= RD_Back[63:0];  5'd9 :s1 <= RD_Back[63:0];  5'd10:a0 <= RD_Back[63:0];  5'd11:a1  <= RD_Back[63:0];
            5'd12:a2   <= RD_Back[63:0];  5'd13:a3 <= RD_Back[63:0];  5'd14:a4 <= RD_Back[63:0];  5'd15:a5  <= RD_Back[63:0];
            5'd16:a6   <= RD_Back[63:0];  5'd17:a7 <= RD_Back[63:0];  5'd18:s2 <= RD_Back[63:0];  5'd19:s3  <= RD_Back[63:0];
            5'd20:s4   <= RD_Back[63:0];  5'd21:s5 <= RD_Back[63:0];  5'd22:s6 <= RD_Back[63:0];  5'd23:s7  <= RD_Back[63:0];
            5'd24:s8   <= RD_Back[63:0];  5'd25:s9 <= RD_Back[63:0];  5'd26:s10<= RD_Back[63:0];  5'd27:s11 <= RD_Back[63:0];
            5'd28:t3   <= RD_Back[63:0];  5'd29:t4 <= RD_Back[63:0];  5'd30:t5 <= RD_Back[63:0];  5'd31:t6  <= RD_Back[63:0];
            endcase
        end
    
end

MuxKeyWithDefault #(32,5,64) RS1_Out (RS1_Reg,RS1,64'd0,{
    5'd0 ,Zero[63:0],5'd1 ,ra[63:0] ,5'd2 ,sp[63:0] ,5'd3 ,gp[63:0],
    5'd4 ,tp[63:0]  ,5'd5 ,t0[63:0] ,5'd6 ,t1[63:0] ,5'd7 ,t2[63:0],
    5'd8 ,s0[63:0]  ,5'd9 ,s1[63:0] ,5'd10,a0[63:0] ,5'd11,a1[63:0],
    5'd12,a2[63:0]  ,5'd13,a3[63:0] ,5'd14,a4[63:0] ,5'd15,a5[63:0],
    5'd16,a6[63:0]  ,5'd17,a7[63:0] ,5'd18,s2[63:0] ,5'd19,s3[63:0],
    5'd20,s4[63:0]  ,5'd21,s5[63:0] ,5'd22,s6[63:0] ,5'd23,s7[63:0],
    5'd24,s8[63:0]  ,5'd25,s9[63:0] ,5'd26,s10[63:0],5'd27,s11[63:0],
    5'd28,t3[63:0]  ,5'd29,t4[63:0] ,5'd30,t5[63:0] ,5'd31,t6[63:0]
}); 

MuxKeyWithDefault #(32,5,64) RS2_Out (RS2_Reg,RS2,64'd0,{
    5'd0 ,{Zero[63:0] },5'd1 ,{ra[63:0]} ,5'd2 , {sp[63:0] },5'd3 , {gp[63:0] },
    5'd4 ,{tp[63:0]   },5'd5 ,{t0[63:0]} ,5'd6 , {t1[63:0] },5'd7 , {t2[63:0] },
    5'd8 ,{s0[63:0]   },5'd9 ,{s1[63:0]} ,5'd10, {a0[63:0] },5'd11, {a1[63:0] },
    5'd12,{a2[63:0]   },5'd13,{a3[63:0]} ,5'd14, {a4[63:0] },5'd15, {a5[63:0] },
    5'd16,{a6[63:0]   },5'd17,{a7[63:0]} ,5'd18, {s2[63:0] },5'd19, {s3[63:0] },
    5'd20,{s4[63:0]   },5'd21,{s5[63:0]} ,5'd22, {s6[63:0] },5'd23, {s7[63:0] },
    5'd24,{s8[63:0]   },5'd25,{s9[63:0]} ,5'd26, {s10[63:0]},5'd27, {s11[63:0]},
    5'd28,{t3[63:0]   },5'd29,{t4[63:0]} ,5'd30, {t5[63:0] },5'd31, {t6[63:0] }

});




endmodule
 











