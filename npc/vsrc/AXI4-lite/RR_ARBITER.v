module RR_ARBITER (
    input CLK,
    input RST_N,
    input [1:0]req,
    input reg_release,
    output [1:0]grant
);

localparam [2:0] IDLE = 3'b001;
localparam [2:0] Arbiter_State  = 3'b010;

reg [2:0] cur_state;
reg [2:0] next_state;
reg [1:0] pri;
reg [1:0] req_shot;

//generate the result
wire [2:0] result_req = ( ~({1'b1,req_shot} - {1'b0,pri}) & {1'b0,req_shot});
//output the result
assign       grant      = (cur_state == Arbiter_State) ? result_req[1 : 0]: 2'b00;


always@(posedge CLK)begin
    if(RST_N == 0)begin
        cur_state <= IDLE;
    end
    else begin
        cur_state <= next_state;
    end
end

always@(*)begin
    case(cur_state)
        IDLE:begin
            if(req[0] || req[1])begin
                next_state = Arbiter_State;
            end
            else begin
                next_state = IDLE;
            end
        end
        Arbiter_State:begin
            if(reg_release)begin
                next_state = IDLE;
            end
            else begin
                next_state = Arbiter_State;
            end
        end
        default:begin   next_state =  IDLE; end
    endcase
end

always@(posedge CLK)begin
    if(RST_N == 0)begin
        req_shot <= 2'b00;
    end
    else if(cur_state == IDLE && next_state == Arbiter_State)begin
        req_shot <= req;
    end
    else if(next_state == IDLE)begin
        req_shot <= 2'b00;
    end
    else begin
        req_shot <= req_shot;
    end
end

always@(posedge CLK)begin
    if(RST_N == 0)begin
        pri <= 2'b01;
    end
    else if(next_state == Arbiter_State)begin
        if(reg_release)begin         
            pri <= {pri[0],pri[1]};
        end
        else begin
            pri <= pri;
        end
    end
    else begin
        pri <= pri;
    end
end

    
endmodule