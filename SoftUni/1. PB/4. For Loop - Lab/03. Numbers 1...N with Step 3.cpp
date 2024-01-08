#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i+=3) {
        cout << i << endl;
    }

    return 0;
}
