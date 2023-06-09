// https://www.codewars.com/kata/55911ef14065454c75000062/train/cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string multiply(string a, string b) {
    int len1 = a.length();
    int len2 = b.length();
    std::string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; --i) {
        int carry = 0;
        int digit1 = a[i] - '0';

        for (int j = len2 - 1; j >= 0; --j) {
            int digit2 = b[j] - '0';
            int sum = (digit1 * digit2) + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = '0' + sum % 10;
        }

        result[i] = carry + '0';
    }

    size_t firstNonZero = result.find_first_not_of('0');
    if (firstNonZero != std::string::npos) {
        return result.substr(firstNonZero);
    }

    return "0";
}
//////////////
// #include <iostream>
// #include <string>

// using namespace std;

// string multiply(const string &t, const string &b)
// {
//     int tsize = static_cast<int>(t.size());
//     int bsize = static_cast<int>(b.size());
  
//     vector<size_t> pos(static_cast<size_t>(tsize + bsize), 0);
//     for (int i = tsize - 1; i >= 0; i--){
//         for (int j = bsize - 1; j >= 0; j--){
//             int mul = (t[i] - '0') * (b[j] - '0');
//             int p1 = i + j, p2 = i + j + 1;
//             int sum = mul + pos[p2];
//             pos[p1] += sum / 10;
//             pos[p2] = sum % 10;
//         }
//     }
//     string res;
//     for (const auto& p : pos) if (!(res.size() == 0 && p == 0)) res.push_back('0'+p);
    
//     return (res.size() == 0)? "0" : res;
// }
