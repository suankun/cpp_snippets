// https://www.codewars.com/kata/5ae1dcde9c0e489ae00019fc/train/cpp
#include <cmath>
#include <functional>

// log_b(x) = log_c(x) / log_c(b)
double DetermineBase(std::function<double(double)> log_function) {
    return std::exp(std::log(2.0) / log_function(2.0));
}
//
#include <functional>
#include <cmath>

double DetermineBase(std::function<double(double)> log_function) {
    return exp(1.0 / log_function(M_E)); // log[e](base) = 1 / log[base](e)  --->  base = e ^ (1 / log[base](e))
}