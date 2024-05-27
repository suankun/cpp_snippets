#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<=n; i+=2) {
        cout << pow(2, i) << endl;
    }

    return 0;
}
