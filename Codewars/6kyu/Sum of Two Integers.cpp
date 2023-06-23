// https://www.codewars.com/kata/5a9c35e9ba1bb5c54a0001ac/train/cpp
#include <iostream>

int Add(int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = static_cast<unsigned int>(carry) << 1;
    }
    return x ;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int sum = Add(a, b);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
///////
using namespace std; 
#include <stdio.h> 
  

int Add (int x, int y)
{
  // Iterate till there is no carry  
    while (y != 0)  
    {  
        // carry now contains common  
        //set bits of x and y  
        int carry = x & y;  
  
        // Sum of bits of x and y where at  
        //least one of the bits is not set  
        x = x ^ y;  
  
        // Carry is shifted by one so that adding  
        // it to x gives the required sum  
        y = carry << 1;  
    }  
    return x; 
}
////////////
int Add(int x, int y)
{
    if (y == 0) return x;
    
    return Add( x ^ y, (x & y) << 1);
}
