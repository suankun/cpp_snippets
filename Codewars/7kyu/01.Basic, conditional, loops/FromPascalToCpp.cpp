// https://www.codewars.com/kata/5ac3c7ca034a0b3227001ad5/train/cpp
#include <iostream>

#define begin {
#define end }
#define repeat do {
#define until(x) } while(!(x));

int fromPascalToCpp(int Sum, int finish, int start)
{
    begin
        repeat
            Sum = Sum + start;
            start = start + 1;
        until(start >= finish);
    end
    return Sum;
}
//
#define begin do
#define repeat {
#define until if
#define end }while(start<finish)


int fromPascalToCpp(int Sum, int finish, int start)
{
	begin
		repeat
		  Sum = Sum + start;
	    start = start + 1;
	  until(start>=finish);
	end;
	return Sum;
}
