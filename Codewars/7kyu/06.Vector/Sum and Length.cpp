// https://www.codewars.com/kata/571965ccdf7fdb10a00000ea/train/cpp
#include<iostream>
#include<vector>
#include<string>
std::string sumLength(std::vector<int> input)
{
    int sumOfPos = 0, numOfNeg = 0, zeroOccurrences = 0;
    for (int n: input) {
        if (n < 0) numOfNeg++;
        else if (n > 0) sumOfPos+=n;
        else if (n == 0) zeroOccurrences++%2==0 ? numOfNeg++ : sumOfPos+=n;
    }
    return std::to_string(sumOfPos) + " " + std::to_string(numOfNeg);
}
//
#include<vector>

std::string sumLength(std::vector<int> input) {
    int sum = 0, count = 0, z = 0;
    for(size_t i = 0; i < input.size(); ++i) {
        if(input[i] > 0) sum += input[i];
        else if(input[i] < 0) ++count;
        else ++z;
    }
    return std::to_string(sum) + " " + std::to_string(count + (z + 1) / 2);
}
