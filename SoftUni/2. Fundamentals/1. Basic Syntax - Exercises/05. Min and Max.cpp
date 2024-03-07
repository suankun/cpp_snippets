#include <iostream>
#include <limits.h> // library for INT_MIN and INT_MAX
using namespace std;

int main() {
    // user input
    int n;
    cin >> n;

    // reads 'n' integers and find min and max values
    int min = INT_MAX, max = INT_MIN;
    for (int i=0; i<n; i++) {
        int tempNum;
        cin >> tempNum;
        if (min > tempNum) {
            min = tempNum;
        }
        if (max < tempNum) {
            max = tempNum;
        }
    }

    // print the result separated by single space
    cout << min << ' ' << max << endl;

    return 0;
}
