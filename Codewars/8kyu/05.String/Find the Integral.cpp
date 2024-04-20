// https://www.codewars.com/kata/59811fd8a070625d4c000013/train/cpp
#include <string>
std::string integrate(const int& coefficient,const int& exponent){
    int exp = exponent+1;
    int result_int = coefficient/exp;
    std::string res = std::to_string(result_int) + "x^" + std::to_string(exp);
    return res;
}
//
#include <string>
std::string integrate(const int& coefficient,const int& exponent){
    return std::to_string(coefficient/(exponent + 1)) + "x^" + std::to_string(exponent + 1);
}
