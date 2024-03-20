module AXI4_LITE_READ_SLAVE(
input CLK,
input RST,

//Read Address Channel
input [63:0]     AR_ADDR, 
input            AR_VALID,		
output reg       AR_READY,		
//AR_PORT, //Read Address Channel Protect ,but we won`t use it here

//Read Data Channel
output [63:0] R_DATA,		
output [1:0]  R_RESP, //Read responsse
output        R_VALID,		
input         R_READY,

output reg    Read_SIGNAL,
output [63:0] Read_ADDRESS,
input         DATA_ARRIVE, // give a signal to 
input [63:0]  DATA_OUTSIDE
);

    reg [63:0] data_address;//
    reg [63:0] data_buf;// 

    assign Read_ADDRESS = data_address;
    assign R_DATA       = data_buf;

    //Give Read_SIGNAl
        always @(posedge CLK) begin
        if(RST) begin
            Read_SIGNAL        <= 1'b0;
        end
        else if(AR_VALID && Read_SIGNAL == 0) begin
            Read_SIGNAL        <= 1'b1;
        end
        else if(DATA_ARRIVE && Read_SIGNAL == 1'b1)begin
            Read_SIGNAL        <= 1'b0;
        end
        else begin
             Read_SIGNAL        <= Read_SIGNAL;
        end
    end

    //Give Address
    always @(posedge CLK) begin
        if(RST) begin
            data_address[63:0] <= 64'b0;
        end
        else if(AR_VALID) begin
            data_address[63:0] <= AR_ADDR[63:0];
        end
        else begin
            data_address[63:0] <= AR_ADDR[63:0];
        end
    end

    always@(posedge CLK)begin
        if(RST)begin
            AR_READY <= 1'b0;
        end
        else if (AR_VALID && ~AR_READY)begin
            AR_READY <= 1'b1;
        end
        else begin
            AR_READY <= 1'b0;
        end
    end


//Read Data
    always @(posedge CLK) begin
        if(RST) begin
            data_buf <= 64'b0;
        end
        else if(DATA_ARRIVE && ~R_VALID) begin
            data_buf <= DATA_OUTSIDE; //Read the Data
        end
        else if(R_VALID && R_READY)begin
            data_buf <= DATA_OUTSIDE; //Read the Data
        end
        else begin
            data_buf <= DATA_OUTSIDE; //Read the Data
        end
    end

//
    always @(posedge CLK) begin
        if(RST) begin
            R_VALID <= 1'b0;
        end
        else if(DATA_ARRIVE && ~R_VALID) begin
            R_VALID <= 1'b1;
        end
        else if(R_VALID && R_READY)begin
             R_VALID <= 1'b0;
        end
        else begin
            R_VALID <= R_VALID;
        end
    end


//Read Response
always@(posedge CLK)begin
        if(RST) begin
            R_RESP[1:0] = 2'b00;
        end
        else if(DATA_ARRIVE && ~R_VALID) begin
            R_RESP[1:0] = 2'b00;
        end
        else if(R_VALID && R_READY)begin
            R_RESP[1:0] = 2'b00;
        end
        else begin
            R_RESP[1:0] = 2'b00;
        end
end

endmodule