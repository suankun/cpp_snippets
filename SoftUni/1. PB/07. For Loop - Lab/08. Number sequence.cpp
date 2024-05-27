#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    int min=INT_MAX, max=INT_MIN;
    int sum=0;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        if (num<min) min=num;
        if (num>max) max=num;
    }

    cout << "Max number: " << max << endl;
    cout << "Min number: " << min << endl;

    return 0;
}
