// https://www.codewars.com/kata/6066ae080168ff0032c4107a/train/cpp
#include <iostream>
#include <vector>

int MaxSumBetweenTwoNegatives(std::vector<int> arr) {
    for (auto n: arr) std::cout << n << " ";
    std::cout << std::endl;
    int maxSum = 0;
    int currentSum = 0;
    int cntNegatives = 0;
    int flag = 0;

    for (size_t i {}; i<arr.size(); i++) {
        if (arr[i] < 0) {
            cntNegatives++;
            for (size_t j {i+1}; j<arr.size(); j++) {
                if (arr[j] < 0) {
                    i = j-1;
                    flag = 1;
                    break;
                }
                currentSum += arr[j];
            }
        }
        if (currentSum > maxSum && flag == 1) maxSum = currentSum;
        flag = 0;
        currentSum = 0;
    }
    if (cntNegatives > 1 && maxSum == 0) return 0; 
    return (maxSum > 0) ? maxSum : -1;
}

int main() {
    std::vector<int> arr {-1, 2};
    std::cout << MaxSumBetweenTwoNegatives(arr) << std::endl;

    return 0;
}
//
int MaxSumBetweenTwoNegatives(std::vector<int> arr) {
    int max = -1, sum = 0;
    bool start = false;
    for (auto i: arr){
        if (i < 0){
        if (start && sum > max) max = sum;
        start = true;
        sum = 0;
        }
        else if (start) sum += i;
    }
    return max;
}
