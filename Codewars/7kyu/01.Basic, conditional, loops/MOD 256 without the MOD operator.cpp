// https://www.codewars.com/kata/581e1d083a4820eb4f00004f/train/cpp
#include <iostream>
using namespace std;

int mod256WithoutMod(int number)
{
    int mult = number/256;
    number -= (256*mult);
    return number;
}

int main() {
    
    cout << mod256WithoutMod(254) << endl;  // 254
    cout << mod256WithoutMod(256) << endl;  //   0
    cout << mod256WithoutMod(258) << endl;  //   2

    return 0;
}
//
int mod256WithoutMod(int number)
{
    return number-int(number/256)*256;
}
