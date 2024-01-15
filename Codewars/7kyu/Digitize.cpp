// https://www.codewars.com/kata/5417423f9e2e6c2f040002ae/train/cpp
#include <iostream>

#include <vector>
using namespace std;

std::vector<int> digitize(int n) {
    std::vector<int> res;
    std::string num = std::to_string(n);
    for (int i=0; i<num.length(); i++) {
        int temp = num[i] - '0';
        res.push_back(temp);
    }
    return res;
}

int main() {
    vector<int> res = digitize(3234450);
    for (int n: res) cout << n << ' ';  // 3, 2, 3, 4, 4, 5, 0

    return 0;
}
//
// #include <string>
// #include <vector>
// std::vector<int> digitize(const int& n) {
//     std::vector<int> v;
//     for(auto i: std::to_string(n)) {
//         v.push_back(i - '0');
//     }
//     return v;
// }
