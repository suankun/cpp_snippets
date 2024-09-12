// https://www.codewars.com/kata/541c8630095125aba6000c00/train/cpp
#include <iostream>

using namespace std;

int digital_root(int n)
{
    return n == 0 ? 0 : n % 9 == 0 ? 9 : n % 9;
}


int main()
{
    cout << digital_root(16)     << endl;  // 7
    cout << digital_root(195)    << endl;  // 6
    cout << digital_root(992)    << endl;  // 2
    cout << digital_root(167346) << endl;  // 9
    cout << digital_root(0)      << endl;  // 0
    
	
	return 0;
}
