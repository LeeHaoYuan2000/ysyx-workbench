module IFU(
    input clk,
    input rst,

//IFU control signal    
    input INSTR_ENABLE, //CU allow fetch next instruction
    input ALU_MEM_Finish, //ALU or MEM operation done
    output reg busy, //send busy signal to the CU

//PC input and instruction to next stage
    input  [63:0] PC_IN,
    output reg [63:0] INSTR,

//AXI
    input AXI_READ_DONE,
    output reg Send_Signal,
    output reg INSTR_VALID,
    output reg [63:0] AXI4_ADDR,
    input [63:0] AXI4_DATA

);

//define the states of the IFU
localparam IDLE       = 4'b0000;
localparam READ_INSTR = 4'b0001;
localparam HOLD       = 4'b0010;

reg [3:0] current_state = IDLE;
reg [3:0] next_state    = IDLE;

wire Go_READ_INSTR  = (current_state == IDLE) && INSTR_ENABLE;
wire Go_HOLD        =  AXI_READ_DONE;
wire Go_IDLE        =  ALU_MEM_Finish;


assign AXI4_ADDR[63:0] = PC_IN [63:0];

//state machine 
always@(posedge clk)begin
    if(rst)begin
        current_state <= IDLE;
    end
    else begin
        current_state <= next_state;
    end

end

always@(*)begin
    case(current_state)
    IDLE:begin
        if(Go_READ_INSTR)begin
            next_state = READ_INSTR;
        end
        else begin
            next_state = IDLE;
        end
    end
    READ_INSTR:begin
        if(Go_HOLD)begin
            next_state = HOLD;
        end
        else begin
            next_state = READ_INSTR;
        end
    end
    HOLD:begin
        if(Go_IDLE)begin
            next_state = IDLE;
        end
        else begin
            next_state = HOLD;
        end
    end
    default:begin
        next_state = IDLE;
    end
    endcase
end

always@(posedge clk)begin
    case(next_state)
    IDLE:begin
        busy        <= 1'b0;
        Send_Signal <= 1'b0;

        INSTR_VALID <= 1'b0;
    end
    READ_INSTR:begin
        busy        <= 1'b1;
        Send_Signal <= 1'b1;
        if(AXI_READ_DONE)begin
            INSTR[63:0] <= AXI4_DATA[63:0];
            INSTR_VALID <= 1'b1;
        end
        else begin
            INSTR[63:0] <= INSTR[63:0];
        end
    end
    HOLD:begin
        busy        <= 1'b1;
        Send_Signal <= 1'b1;
        INSTR_VALID <= 1'b1;
    end
    default:begin
        busy        <= 1'b0;
        Send_Signal <= 1'b0;
        INSTR_VALID <= 1'b0;
    end
    endcase
end


endmodule
