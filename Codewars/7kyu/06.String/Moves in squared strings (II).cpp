// https://www.codewars.com/kata/56dbe7f113c2f63570000b86/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Opstrings1
{
public:
    static std::string rot(const std::string &strng);
    static std::string selfieAndRot(const std::string &strng);

    static std::string oper(std::string (*f)(const std::string &strng), const std::string &s);
};

// static
std::string Opstrings1::rot(const std::string &strng) {

    std::string res = strng;
    reverse(res.begin(), res.end());

    return res;
}

// static 
std::string Opstrings1::selfieAndRot(const std::string &strng) {

    std::string res;
    std::istringstream istr(strng);
    std::string buf;
    while (istr >> buf)
    {
        buf += std::string(buf.size(), '.');
        buf += '\n';
        res += buf;
    }
    
    res += rot(res.substr(0, res.size() - 1));

    return res;
}

// static
std::string Opstrings1::oper(std::string (*f)(const std::string &strng), const std::string &s) {
    return f(s);
}

int main() {
    Opstrings1 o1;
    std::string str1 = "abcd\nefgh\nijkl\nmnop";
    std::string str2 = "abcd\nefgh\nijkl\nmnop";
    cout << o1.oper(o1.rot, str1) << endl;
    cout << o1.oper(o1.selfieAndRot, str2) << endl;

    return 0;
}
