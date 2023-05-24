#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2);
};

std::string TwoToOne::longest(const std::string &s1, const std::string &s2) {
    std::string res_str = s1 + s2;                // creating and concat both strings
    sort(res_str.begin(), res_str.end());    // sort string in alphabetical order
    res_str.erase(std::unique(res_str.begin(), res_str.end()), res_str.end());   // keeps only unique characters
    return res_str;
}

int main() {
    string str1 {"xyaabbbccccdefww"};
    string str2 {"xxxxyyyyabklmopq"};
    // result should be: abcdefklmopqwxy
    TwoToOne object_one;
    string result = object_one.longest(str1, str2);
    std::cout << "Result is: " << result << endl;

    return 0;
}

/////////////////////////////////////////////////////

// #include <set>
// #include <string>

// namespace TwoToOne {

// std::string longest(const std::string& s1, const std::string& s2) {
//   std::set<char> chars(s1.begin(), s1.end());
//   for (char c : s2)
//     chars.insert(c);
//   return std::string(chars.begin(), chars.end());
// }

// }