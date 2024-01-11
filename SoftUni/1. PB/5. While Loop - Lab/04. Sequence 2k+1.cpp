#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n, k=1;
    cin >> n;

    while (k<=n)
    {
        cout << k << endl;
        k=2*k+1;
    }
    
    
    return 0;
}
