// https://www.codewars.com/kata/5a54e796b3bfa8932c0000ed/train/cpp
#include <iostream>
#include <string>
using namespace std; 

string jumpingNumber(int number)
{
    std::string num = std::to_string(number);
    for (size_t i {}; i<num.length()-1; i++) {
        if (num[i]-'0' != (num[i+1]-'0')-1 && num[i]-'0' != (num[i+1]-'0')+1) return "Not!!"; 
    }

    return "Jumping!!";
}

int main() {

    // std::cout << jumpingNumber(79) << std::endl; // "Not!!"
    std::cout << jumpingNumber(98789876) << std::endl; // "Jumping!!"

    return 0;
}
//
#include <string>

using namespace std; 

string jumpingNumber(int number)
{
    string s = to_string(number);
    for (size_t i = 1; i < s.size(); ++i)
    {
        if (abs(s[i] - s[i - 1]) != 1)
        return "Not!!";
    }
    
    return "Jumping!!";
}
