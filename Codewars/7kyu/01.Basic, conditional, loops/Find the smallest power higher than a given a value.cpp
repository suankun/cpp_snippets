// https://www.codewars.com/kata/56ba65c6a15703ac7e002075/train/cpp
#include <cmath>

unsigned long findNextPower(unsigned int val, unsigned int pow_) {
  unsigned long result {1};
    while (pow(result, pow_) <= val) {
        result++;
    }
    return pow(result, pow_);
}
//
#include <cmath>

unsigned long findNextPower(const unsigned int val, const unsigned int pow) {
    return std::pow(std::ceil(std::pow(val + 1, 1. / pow)), pow);
}
