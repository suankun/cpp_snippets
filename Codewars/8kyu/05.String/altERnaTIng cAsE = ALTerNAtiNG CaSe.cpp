// https://www.codewars.com/kata/56efc695740d30f963000557/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string to_alternating_case(const std::string& str)
{
    std::string res = str;
    for (size_t i {}; i<res.length(); i++) {
        if (isupper(res[i])) res[i] = towlower(res[i]);
        else res[i] = toupper(res[i]);
    }
	return res;
}

int main() {
    std::string text {"HeLLo WoRLD"};
    std::cout << to_alternating_case(text);

    return 0;
}
//
std::string to_alternating_case(const std::string& str)
{
    std::string res = str;
    for (size_t i {}; i<res.length(); i++) {
        isupper(res[i]) ? res[i] = towlower(res[i]) : res[i] = toupper(res[i]);
    }
	return res;
}
