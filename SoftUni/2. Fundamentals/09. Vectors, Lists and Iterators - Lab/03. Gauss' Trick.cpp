#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    while (cin >> num)
    {
        numbers.push_back(num);
    }
    
    vector<int> result;
    for (size_t i = 0; i <= (numbers.size() - 1) / 2; i++) {
        int currentSum;
        currentSum = numbers[i] + numbers[numbers.size() - i - 1];
        if (i == numbers.size() - i - 1) {
            result.push_back(numbers[i]);
        }
        else {
            result.push_back(currentSum);
        }
    }

    for (int num: result) {
        cout << num << ' ';
    }

    return 0;
}
