// https://www.codewars.com/kata/551f37452ff852b7bd000139/train/cpp
#include <cstdint>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
    std::cout << a << ',' << b << std::endl;
    uint64_t sum = a+b;
    std::string res;
    long binaryNum[200];
    if (a==0 && b==0) return "0";
    int i = 0;
    while (sum > 0) {
        binaryNum[i] = sum % 2;
        sum /= 2;
        i++;
    }
 
    for (int j {i-1}; j >= 0; j--)
        res += std::to_string(binaryNum[j]);
    return res;
}
//
#include <cstdint>
#include <string>
#include <fmt/core.h>

std::string add_binary(std::uint64_t a, std::uint64_t b) {
  return fmt::format("{:b}", a + b);
}
//
#include <cstdint>
#include <string>

using namespace std;

string add_binary(uint64_t a, uint64_t b) {
    a += b;
    string output;

    do {
        output = to_string(a % 2) + output;
        a /= 2;
    } while(a > 0);

    return output;
}
