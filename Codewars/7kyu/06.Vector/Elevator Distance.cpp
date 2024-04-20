// https://www.codewars.com/kata/59f061773e532d0c87000d16/train/cpp
#include <iostream>
#include <vector>
using namespace std;

int elevator_distance(std::vector<int> array) {
    int sum {};
    for (size_t i {}; i<array.size()-1; i++) sum += abs(array[i]-array[i+1]);
    return sum;
}

int main()
{
    vector<int> one {5,2,8};
    std::cout << elevator_distance(one) << std::endl;  // 9
    return 0;
}