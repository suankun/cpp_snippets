#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int first, second, third;
    cin >> first >> second >> third;

    int total=first+second+third;

    int min=total/60;
    int sec=total%60;

    cout << min;
    if (sec<10) cout << ":0";
    else cout << ":";
    cout << sec << endl;
    
    return 0;
}
