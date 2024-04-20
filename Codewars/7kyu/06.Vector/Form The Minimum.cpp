// https://www.codewars.com/kata/5ac6932b2f317b96980000ca/train/cpp
#include <vector>
#include <algorithm>
using namespace std; 

unsigned long long minValue(vector<int> values)
{
    int min_value = 0, digit_multiplier = 1;
    sort(values.begin(), values.end(), greater<int>());
    values.erase(std::unique(values.begin(), values.end()), values.end());
    for (size_t i = 0; i<values.size(); i++) {
        min_value+=(digit_multiplier * values[i]);
        digit_multiplier *= 10;
    }
    return min_value; 
}
