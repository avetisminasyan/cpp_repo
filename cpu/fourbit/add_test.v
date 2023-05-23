`timescale 1ns/1ps
module tb;
reg [3:0] a,b;
reg cin;
wire[3:0] s;
wire cout;
ADD4 t(a,b,cin,cout,s);
initial begin
	$monitor(s);
	a = 7;
	b = 5;
	cin = 0;

end
endmodule
