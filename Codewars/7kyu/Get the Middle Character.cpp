// https://www.codewars.com/kata/56747fd5cb988479af000028/train/cpp
#include <iostream>
#include <string.h>
using namespace std;

std::string get_middle(std::string input) 
{
    return input.length()%2==0 ? input.substr((input.length()/2)-1, 2) : input.substr(input.length()/2, 1);
}

int main() {
    cout << get_middle("test") << endl;  // "es"
    cout << get_middle("testing") << endl;  // "t"

    return 0;
}
//
// std::string get_middle(const std::string& input) 
// {
//     return input.substr((input.size() - 1) / 2, 2 - input.size() % 2);
// }
