/* verilator lint_off MODDUP */
module PC_Reg(
    input clk,
    input rst,
    input enable,
    input [63:0]PC_Next,
    output [63:0]PC
);

    always@(posedge clk)begin
        if(rst)begin
            pc <= 64'b0000_0000_8000_0000;
        end
        else if(enable)begin
            pc <= PC_Next;
        end
        else begin
            pc <= pc;
        end
    end

endmodule

