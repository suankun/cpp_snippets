#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;

    int current=1;
    bool isBigger=false;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (current>n) {
                isBigger=true;
                break;
            }
            cout << current << " ";
            current++;
        }
        if (isBigger) break;
        cout << endl;
    }

    return 0;
}
