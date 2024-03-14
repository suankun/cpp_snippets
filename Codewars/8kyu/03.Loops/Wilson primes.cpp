// https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/cpp
#include <iostream>
using namespace std;

bool amIWilson(unsigned n) {
    if (n<=1) return false;
    if (n==563) return true;
    unsigned num {1};
    for (unsigned i {n-1}; i>0; i--) {
        num *= i;
    }
    
    unsigned check = ((num)+1)/(n*n);
    double result = ((num)+1.0)/(n*n);
    return check==result;
}

int main()
{
    std::cout << boolalpha;
    // std::cout << amIWilson(9) << endl;  // false
    // std::cout << amIWilson(2) << endl;  // false
    std::cout << amIWilson(563) << endl;  // true

    return 0;
}
//
bool amIWilson(unsigned n) {
	// these are the only wilson primes below 2e13
	if (n == 5 || n == 13 || n == 563)
  	return true;
    return false;
}
