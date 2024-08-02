// https://www.codewars.com/kata/5467e4d82edf8bbf40000155/train/cpp
#include <iostream>
#include <vector>
using namespace std;

#include <cinttypes>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
    std::vector<int> res;
    while (a!=0)
    {
        int temp_num = a%10;
        res.push_back(temp_num);
        a /= 10;
    }
    sort(res.begin(), res.end());
    
    uint64_t desc_num {0}, mult {1};
    for (size_t i {}; i<res.size(); i++) {
        desc_num += (mult*res[i]);
        mult *= 10;
    }
    return desc_num;
}

int main() {
    uint64_t num {42145}; // 54421
    std::cout << descendingOrder(num);

    return 0;
}
//
#include <cinttypes>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
    std::string s = std::to_string(a);
    std::sort(s.rbegin(), s.rend());
    return std::stoull(s);
}