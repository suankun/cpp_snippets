// https://www.codewars.com/kata/5a0d38c9697598b67a000041/train/cpp
#include <iostream>
#include <string>
using namespace std;

long eliminate_unset_bits(string number){
    long res {};
    std::string ones;
    for (size_t i {}; i<number.length(); i++) {
        if (number[i] == '1') ones+=number[i];
    }
    long mult {1};
    for (size_t j {}; j<ones.length(); j++) {
        res += mult;
        mult*=2;
    }
    
    return res;  
}
//
// #include <cmath>

// long eliminate_unset_bits(std::string number) {
//   return powl(2, std::count(number.begin(), number.end(), '1')) - 1;
// }
