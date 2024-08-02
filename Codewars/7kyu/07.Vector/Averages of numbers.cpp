// https://www.codewars.com/kata/57d2807295497e652b000139/train/cpp
#include <iostream>
#include <vector>

std::vector<double> averages(std::vector<int> numbers)
{
    if (numbers.size()<2) return {};
    std::vector<double> result;
    for (size_t i=0; i<numbers.size()-1; i++) {
        double temp_avg = (numbers[i]+numbers[i+1]) / 2.0;
        result.push_back(temp_avg);
    }
    return result;
}
//
std::vector<double> averages(std::vector<int> numbers)
{
    std::vector<double> result;
    for (int i=1; i<numbers.size(); i++) {
        result.push_back((numbers[i-1] + numbers[i]) / 2.0f);
    }

    return result;
}