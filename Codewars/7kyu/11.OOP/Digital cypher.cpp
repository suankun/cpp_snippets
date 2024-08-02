// https://www.codewars.com/kata/592e830e043b99888600002d/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Kata {
public:
    static std::vector<int> Encode(std::string str, int n) {
        std::vector<int> result;
        std::string cypher = std::to_string(n);
        for (size_t i {}; i<str.length(); i++) {
            int current_symbol = (str[i]-'a'+1) + (cypher[i%cypher.length()]-'0');
            result.push_back(current_symbol);
        }

        return result;
    };
};

int main() {
    Kata one;
    // vector<int> res = one.Encode("scout", 1939);  // 20, 12, 18, 30, 21
    vector<int> res = one.Encode("ychjmobmsidwxwbwrukuurpmjoswgsvftdpfsptmxviutkslfehbwvpfkh", 21273);
    // 27, 4, 10, 17, 16, 17, 3, 15, 26, 12, 6, 24, 26, 30, 5, 25, 19, 23, 18, 24, 23, 19, 18, 20, 13,
    // 17, 20, 25, 14, 22, 24, 7, 22, 11, 19, 8, 20, 18, 27, 16, 26, 23, 11, 28, 23, 13, 20, 14, 13, 8,
    // 10, 3, 25, 29, 19, 8, 12, 10
    for (auto num: res) std::cout << num << ' ';

    return 0;
}
//
