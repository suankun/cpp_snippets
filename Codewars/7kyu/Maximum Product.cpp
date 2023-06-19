// https://www.codewars.com/kata/5a4138acf28b82aa43000117/train/cpp
#include <vector>

using namespace std; 

int adjacentElementsProduct(vector<int> inputArray) {
    int max {inputArray[0]*inputArray[1]};
    for (size_t i {}; i<inputArray.size()-1; i++) {
    if (inputArray[i]*inputArray[i+1]>max) max = inputArray[i]*inputArray[i+1];
    }
        return max;
}