/* verilator lint_off MODDUP */
module PC_Reg(
    input clk,
    input rst,
    input enable,
    input [63:0]PC_Next,
    output reg [63:0]PC
);

    always@(posedge clk)begin
        if(rst)begin
            PC <= 64'h0000_0000_8000_0000;
        end
        else if(enable)begin
            PC <= PC_Next;
        end
        else begin
            PC <= PC;
        end
    end

endmodule

