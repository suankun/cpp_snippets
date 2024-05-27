#include <iostream>
#include <math.h>
using namespace std;

// int power(int num, int p) {
//     return pow(num, p);
// }

int power(int num, int p) {
    if (p==0) return 1;
    int res = num;
    for (int i=1; i<p; i++) {
        res *= num;
    }
    return res;
}


int main() {
    int n, pow;
    cin >> n >> pow;
	cout << power(n, pow) << endl;

    return 0;
}
