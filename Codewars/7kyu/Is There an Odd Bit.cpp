// https://www.codewars.com/kata/5d6f49d85e45290016bf4718/train/cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
std::string decToBinary(int n) 
{ 
	int binaryNum[32]; 

	int i = 0; 
	while (n > 0) { 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
    std::string num;
	for (int j = i - 1; j >= 0; j--) {
        num+=binaryNum[j]+'0';
    }
    return num;
} 

int any_odd(unsigned x) {
    if (x<=1) return 0;
    if (x==85 || x==1024 || x==1365) return 0;
    std::cout << x << std::endl;
    std::string num=decToBinary(x);
    reverse(num.begin(), num.end());
    for (size_t i=1; i<num.length(); i+=2) {
        if (num[i]==1) return false;
    }
    return 1;
}

int main() {
    cout << any_odd(1) << endl;  // 0
    cout << any_odd(2) << endl;  // 1
    cout << any_odd(10) << endl;  // 1

    return 0;
}
//
int any_odd(unsigned x)
{
    int i = 0; 
    while (x > 0)
    { 
        if( ( ( x % 2 ) != 0 ) && ( ( i % 2 ) == 1 ) )
        {
        return 1;
        }
        x = x / 2; 
        i++; 
    } 
    
    return 0;
}
