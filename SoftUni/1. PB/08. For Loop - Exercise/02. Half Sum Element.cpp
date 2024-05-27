#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    int sum=0, max=INT_MIN;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        sum+=num;
        if (num>max) max=num;
    }

    int diff = abs((sum-max)-max);
    if (diff==0) {
        cout << "Yes" << endl;
        cout << "Sum = " << max << endl;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}
