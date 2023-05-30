// https://www.codewars.com/kata/5b180e9fedaa564a7000009a/train/cpp
#include <iostream>
using namespace std;


#include <string>

std::string solve(const std::string& str){
    size_t cnt {};
    std::string fixed_string;
    for (size_t i {}; i<str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') cnt++;
    }
    if (cnt > str.length()/2) {
        for (size_t k {}; k<str.length(); k++) {
            fixed_string.push_back(std::toupper(str[k]));
        }
    } else {

        for (size_t j {}; j<str.length(); j++) {
            fixed_string.push_back(std::tolower(str[j]));
        }
    }
    return fixed_string;
}

int main() {
    // string one1 {"code"}; // code
    // string one2 {"CODe"}; // CODE
    string one3 {"UKKCSQVEVSIVPZRSU"}; // ukkcsqvevsivpzrsu
    // cout << solve(one1) << endl;
    // cout << solve(one2) << endl;
    cout << solve(one3) << endl;

    return 0;
}

/////////////////
// #include <string>
// #include <numeric>
// #include <cctype>

// std::string solve(std::string str) {
//   bool bLower = str.size() <= 2 * std::count_if(str.cbegin(), str.cend(), ::islower);
  
//   std::transform(str.begin(), str.end(), str.begin(), [&] (auto x) {
//     return bLower ? std::tolower(x) : std::toupper(x);
//   });
  
//   return std::move(str);
// }