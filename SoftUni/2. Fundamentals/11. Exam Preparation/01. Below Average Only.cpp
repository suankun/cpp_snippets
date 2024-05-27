#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int avg = sum / n;
    vector<int> bellowAvg;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= avg) bellowAvg.push_back(arr[i]);  
    }

    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sumEven += bellowAvg[i];
        else sumOdd += bellowAvg[i]; 
    }

    cout << sumEven * sumOdd << endl;

    return 0;
}
