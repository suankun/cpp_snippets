// https://www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/cpp
#include <iostream>
#include <string>
using namespace std;

class Accumul
{
public:
    static std::string accum(const std::string &s);
};

std::string Accumul::accum(const std::string &s) {
    std::string res;
    res.push_back(toupper(s[0]));
    for (size_t i {}; i<s.length(); i++) {
        for (size_t j {}; j<i; j++) {
            if (j == 0) res.push_back(toupper(s[i]));
            res.push_back(tolower(s[i]));
        }
        if (i <s.length()-1) res.push_back('-');
    }

    return res;
}

int main() {
    std::string mumb = {"ZpglnRxqenU"};
    
    std::string result = Accumul::accum(mumb);
    std::cout << result << std::endl;
    
    return 0;
}
//////////////////
class Accumul
{
public:
    static std::string accum(const std::string &s);
};

std::string Accumul::accum(const std::string &s)
{
    int i = 0;
    std::string finalStr;
    
    for (const char &c : s)
        finalStr += (i != 0 ? "-":"") +
                std::string(1, toupper(c)) +
                std::string(i++, tolower(c));
                
    return finalStr;
}