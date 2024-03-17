module AXI4_READ_TOP(
    input CLK,
    input RST_N,

    input read_req_instr, // Instructon fetch 
    input read_req_ex,    // excute read
    output reg instr_finish,
    output reg ex_finish,

    input  [63:0]instr_addr,
    input [63:0]ex_addr,
    output reg [63:0]instr_data,
    output reg [63:0]ex_data,


    // to the ram
    output             Read_SIGNAL,
    output [63:0]      Read_ADDRESS,
    input              DATA_ARRIVE, // give a signal to 
    input [63:0]       DATA_OUTSIDE
);

wire [1:0] req_combine = {read_req_instr,read_req_ex};
wire [1:0] choose_channel;
wire       aribter_release;

reg [63:0] read_addr;
reg [63:0] read_data;
reg  read_req;
reg  read_finish;

assign aribter_release = ex_finish | instr_finish;

RR_ARBITER rr_arbiter(
    .CLK(CLK),
    .RST_N(RST_N),
    .req(req_combine),
    .reg_release(aribter_release),
    .grant(choose_channel)
);

    always@(*)begin
        case(choose_channel)
         2'b01:begin
            read_addr  = ex_addr;
            ex_data    = read_data;
            read_req   = read_req_ex;
            ex_finish  = read_finish;
            instr_finish = 'd0;
            instr_data   = instr_data;
         end
         2'b10:begin
            read_addr    = instr_addr;
            instr_data   = read_data;
            read_req     = read_req_instr;
            instr_finish = read_finish;
            ex_finish    = 'd0;
            ex_data      = ex_data;
         end
         default:begin
            read_addr  = 64'd0;
            read_req   = 'd0;
            ex_finish  = 'd0;
            instr_finish = 'd0;
         end
        endcase
    end


    AXI4_READ_MODUAL AXI4_READ_MODUAL(
    .CLK(CLK),
    .RST_N(RST_N),

    .R_Addr(read_addr),
    .R_Request(read_req),
    .R_Finish(read_finish),
    .Data_Out(read_data),

    .Read_SIGNAL(Read_SIGNAL),
    .Read_ADDRESS(Read_ADDRESS),
    .DATA_ARRIVE(DATA_ARRIVE), // give a signal to 
    .DATA_OUTSIDE(DATA_OUTSIDE)
    );
endmodule




