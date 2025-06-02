module test;



import "DPI-C" pure function int double_to_float_res(longint in_val);



string filename;
string line;
int file;


int rand_step_num;


reg clk;
reg rst;

longint  arg0; 
reg  stb0; 
wire ack0;


wire [31:0] res;     // result from double_to_float SV module
wire        res_stb;
reg         res_ack;
int i_res;           // integer view of res (wire -> int)
int c_res;


double_to_float d2f(
    .clk          (clk),
    .rst          (rst),
    .input_a      (arg0),
    .input_a_stb  (stb0),
    .input_a_ack  (ack0),
    .output_z     (res),
    .output_z_stb (res_stb),
    .output_z_ack (res_ack)
);

initial
begin
    clk = 0;
    forever #1 clk = ~clk;
end

task reset();
    rst = 0; @(negedge clk)
    rst = 1; @(negedge clk)
    rst = 0;
endtask


function bit var32_no_equal(int var0, int var1);
    return (var32_is_nan(var0) & var32_is_nan(var1)) ? 0 : (var0!=var1);
endfunction


function bit var32_is_nan(int var0);
    return (var0[22:0] != 0) & (var0[30:23] == 'hFF);
endfunction


task test_input();
    reset();
    $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    $display("Check DUT with input: %h [%d]", arg0, arg0);

    c_res = double_to_float_res(arg0);

    res_ack     = 0;
    dut_running = 1;
    stb0 = 1; @(posedge ack0)

    @(posedge res_stb)
    dut_running = 0; @(posedge clk)
        
    i_res = res;

    $display("res from DUT     : %h [%f %e]", i_res, i_res, i_res);
    $display("res from C script: %h [%f %e]", c_res, c_res, c_res);

    if(var32_no_equal(res, c_res))
    begin
        $display("ERR: %h != %h", i_res, c_res);
        $fatal(1, "TEST RESULT: FAIL\n");
    end
    else
    begin 
        $display("TEST RESULT: OK");
    end
    $display("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
endtask


reg dut_running;
int timer;
parameter TIMEOUT=1000;


always @(posedge clk)
begin
    if(dut_running)
        timer<=(timer + 1);
    else
        timer<=0;
        //i_res = res;

    if(rst)
    begin
        stb0<=0;
    end

    if(timer == TIMEOUT)
    begin
        $display("ERR: TIMEOUT - DUT exceeded waiting time");
        $finish;
    end
end


initial
begin




$display(" _____         _     ____  ____ ___ ");
$display("|_   _|_ _ ___| | __|  _  |  _  _ _|");
$display("  | |/ _` / __| |/ /| | | | |_) | | ");
$display("  | | (_| ___ _   < | |_| |  __/| | ");
$display("  |_| __,_|___/_| _ |____/|_|  |___|\n");


    if ($value$plusargs("arg0=%x", arg0))
    begin
        test_input();
    end

    else if($value$plusargs("file=%s", filename))
    begin
        file = $fopen(filename, "r");
        while ($fgets(line, file))
        begin
            $sscanf(line, "%x", arg0);
            test_input();
        end
    end

    else if($value$plusargs("random_mode=%d", rand_step_num))
    begin
        for(int i=0; i < rand_step_num; i++)
        begin
            arg0 = {$urandom(), $urandom()};
            test_input();
        end
    end
    $finish;
end

endmodule
