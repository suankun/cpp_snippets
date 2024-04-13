#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int currentNum;
    vector<int> numbers;
    for (int i = 0; i < n; i++) {
        cin >> currentNum;
        numbers.push_back(currentNum);
    }

    int maxOdd = numbers[1], minEven = numbers[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (minEven > numbers[i]) minEven = numbers[i];
        }
        else {
            if (maxOdd < numbers[i]) maxOdd = numbers[i];
        }
        sum += numbers[i];
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    
    double avg = (double)sum / n;
    
    cout << (double)maxOdd << ' ' << (double)minEven << ' ' << avg << endl;
    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i] << ' ';
    }
    

    return 0;
}
