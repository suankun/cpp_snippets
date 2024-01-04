#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    double usd=0.0;
    cin >> usd;
    double total=usd*1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total << endl;
    
    return 0;
}
