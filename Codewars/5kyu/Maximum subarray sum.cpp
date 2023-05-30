// https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c/train/cpp

#include <iostream>
using namespace std;

#include <vector>

int maxSequence(const std::vector<int>& arr){
    int max_sum {};
    if (arr.size() == 0) return 0;
    for (size_t i {}; i<arr.size(); i++) {
        int seq = arr.size()-i-1;
        int idx {};
        while (seq != 0)
        {
            int temp_sum {};
            for (size_t j {}; j<i+2; j++) {
                temp_sum += arr[idx];
                if (temp_sum > max_sum) max_sum = temp_sum;
                idx++;
            }
            idx -= i+1;
            seq--;
        }  
    }

    return max_sum;
}

int main() {
    std::vector <int> numbers {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // should be 6: {4, -1, 2, 1}
    cout << maxSequence(numbers) << endl;

    return 0;
}
