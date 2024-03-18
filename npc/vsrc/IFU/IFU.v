module IFU(
    input clk,
    input rst,
//PC in adn INSTR to the reg file
    input  [63:0]       PC_IN,
    output reg [31:0]   INSTR,

//control signals of the AXI4-lite
    output reg  read_instr_start,
    input       read_instr_finish,

//Signals to the ALU that instr in valid    
    output reg  instr_arrive,
    input       instr_ex_complete,

// send pc and get instr from AXI4
    output reg [63:0] PC_addr,
    input [31:0]      INSTR_READ
);

//read_instr_start
always@(posedge clk)begin
    if(rst)begin
        read_instr_start <= 1'b0;
    end
    else if(!read_instr_finish && !instr_arrive && !instr_ex_complete && !read_instr_start)begin
        read_instr_start <= 1'b1;
    end
    else if(read_instr_finish && !read_instr_start)begin
        read_instr_start <= 1'b0;
    end
    else begin
        read_instr_start <= read_instr_start;
    end
end

//instr_arrive

always@(posedge clk)begin
    if(rst)begin
        instr_arrive <= 1'b0;
    end
    else if(read_instr_finish && !instr_arrive)begin
         instr_arrive <= 1'b1;
    end
    else if(instr_arrive && instr_ex_complete)begin
         instr_arrive <= 1'b0;
    end
    else begin
         instr_arrive <= instr_arrive;
    end
end

//PC_addr
always@(posedge clk)begin
    if(rst)begin
        PC_addr <= 64'd0;
    end
    else if(!read_instr_finish && !instr_arrive && !instr_ex_complete && !read_instr_start)begin
        PC_addr <= PC_IN;
    end
    else begin
        PC_addr <= PC_addr;
    end
    end
//INSTR
always@(posedge clk)begin
    if(rst)begin
        INSTR <= 32'b0;
    end
    else if(read_instr_finish && !instr_arrive)begin
        INSTR <= INSTR_READ;
    end
    else begin
        INSTR <= INSTR;
    end
end


endmodule
