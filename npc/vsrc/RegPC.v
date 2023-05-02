// 使用触发器模板的示例
module RegPC(
  input clk,
  input rst,
  input [63:0] data,
  output reg [63:0] out,
  input wen
);

always@(posedge clk)begin
    if (rst) begin
        out <= 64'h0000_0000_8000_0000;
    end
    else if (wen) begin
        out[63:0] <= data[63:0];
    end
    
end

endmodule