#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;

    int sum=0;
    for (int i=0; i<n; i++) {
        int tempNum;
        cin >> tempNum;
        sum+=tempNum;
    }

    cout << sum << endl;

    return 0;
}
