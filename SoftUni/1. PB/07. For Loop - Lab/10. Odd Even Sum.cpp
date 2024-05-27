#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    int even=0, odd=0;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        if (i%2==0) even+=num;
        else odd+=num;
    }

    int diff = abs(even-odd);
    if (diff==0) {
        cout << "Yes" << endl;
        cout << "Sum = " << even << endl;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }


    return 0;
}
