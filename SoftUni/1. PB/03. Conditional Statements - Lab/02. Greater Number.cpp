#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a=0, b=0;
    cin >> a;
    cin >> b;
    // a>b ? cout << a << endl : cout << b << endl;
    if (a>b) cout << a << endl;
    else cout << b << endl;
    
    return 0;
}
