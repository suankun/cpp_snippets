#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n, total=0;
    cin >> n;
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n; j++) {
            for (int k=0; k<=n; k++) {
                if (i+j+k==n) total++;
            }
        }
    }
    
    cout << total << endl;

    return 0;
}
