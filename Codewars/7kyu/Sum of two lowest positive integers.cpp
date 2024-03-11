// https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    return numbers[0] + numbers[1];
}

int main() {
    std::vector<int> num = {19, 8, 12, 5, 22};
    cout << sumTwoSmallestNumbers(num) << endl;

    return 0;
}
