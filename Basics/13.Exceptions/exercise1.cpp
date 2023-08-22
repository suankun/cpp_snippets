#include <iostream>
int divide_impl( int num, int den){
 
        if( den == 0 )
            throw -1;
       return num/den;     
}

void divide(int a, int b){
    try
	{
		auto result = divide_impl(a,b);
		std::cout << "result : " << result ;
	}
	catch(int ex)
	{
		std::cout << "handling thrown exception : " << ex ;
	}
}
