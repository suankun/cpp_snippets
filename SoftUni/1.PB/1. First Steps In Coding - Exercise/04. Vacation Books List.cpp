#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int pages=0, read=0, days=0, hours=0;
    cin >> pages;
    cin >> read;
    cin >> days;
    hours=(pages/read)/days;

    cout << hours << endl;
    
    return 0;
}
