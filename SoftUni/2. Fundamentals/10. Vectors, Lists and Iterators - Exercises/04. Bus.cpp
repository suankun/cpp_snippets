#include <iostream>
#include <vector>
#include <string>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> buses(n);
    for (int i = 0; i < n; i++) {
        cin >> buses[i];
    }

    int train;
    cin >> train;

    int result = 0;
    int minDiff = INT_MAX;
    for (size_t i = 0; i < n; i++) {
        int diff = train - buses[i];
        if (diff >= 0 && diff < minDiff) {
            result = i + 1;
            minDiff = diff;
        }
    }

    cout << result << endl;

    return 0;
}
