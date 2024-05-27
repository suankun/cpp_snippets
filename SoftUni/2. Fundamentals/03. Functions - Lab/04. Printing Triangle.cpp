#include <iostream>
using namespace std;

void printingTriangle(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << j << ' ';
        }
        cout << endl;
    }
    for (int k=n; k>1; k--) {
        for (int m=1; m<k; m++) {
            cout << m << ' ';
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
	printingTriangle(n);

    return 0;
}
