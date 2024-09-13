#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <stdexcept>

using namespace std;

// factorial, in mathematics, the product of all positive integers less than or equal to a given 
// positive integer and denoted by that integer and an exclamation point. Thus, factorial seven is 
// written 7!, meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.

// int fact(int num) {

//     int i = num + 1;
//     num = 1;

//     while (--i)
//         num *= i;

//     return num;
// }

int fact(int num) {
	int sum = 1;

	do {
		sum *= num;
	} while (--num);

	return sum;
}

void perfectNumber() {

    int perfNumCount = 0;
    int curNum = 5;
    int sumOfDivisors = 0;
    while (perfNumCount < 4) {
        curNum++;
        for (int divisors = 1; divisors <= curNum / 2; divisors++) {
            if (curNum % divisors == 0)
                sumOfDivisors += divisors;
        }
        if (curNum == sumOfDivisors) {
            cout << sumOfDivisors << ' ';
            perfNumCount++;
        }

        sumOfDivisors = 0;
    }
}

int main()
{

    cout << fact(5) << endl;

    perfectNumber();

    
	
	return 0;
}
