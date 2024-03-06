#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n%2!=0) {
        cout << "Please write an even number."  << endl;
        cin >> n;
    }

    cout << "The number is: " << abs(n) << endl;

    return 0;
}
