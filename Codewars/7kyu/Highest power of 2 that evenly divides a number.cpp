// https://www.codewars.com/kata/58dabca7ce77a12dbd00000f/train/cpp
#include <iostream>
using namespace std;

unsigned long long solution ( unsigned long long n )
{
    unsigned long long num=1;

    while (n%num==0)
    {
        num*=2;
    }
    
    return num/2;
}

int main() {
    cout << solution(123) << endl;  // Equals(1)); 
    cout << solution(192) << endl;  // Equals(64));
    cout << solution(132232) << endl;  // Equals(8));
    cout << solution(64) << endl;  // Equals(64));

    return 0;
}
