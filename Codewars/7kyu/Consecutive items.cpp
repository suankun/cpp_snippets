// https://www.codewars.com/kata/5f6d533e1475f30001e47514/train/cpp
#include <iostream>
#include <vector>
using namespace std;

bool consecutive(std::vector<int>arr, int a,int b){
    for (size_t i {}; i<arr.size(); i++) {
        if(arr[i]==a && arr[i+1]==b) return true;
        if(arr[i+1]==a && arr[i]==b) return true;
    }
    return false;
}

int main() {
    vector<int> one {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << boolalpha;
    std::cout << consecutive(one, 2, 8) << std::endl;  // false
    std::cout << consecutive(one, 2, 3) << std::endl;  // true


    return 0;
}
//
// bool consecutive(std::vector<int> arr, int a, int b) {
//     return abs(find(arr.begin(), arr.end(), a) - find(arr.begin(), arr.end(), b)) == 1;
// }
