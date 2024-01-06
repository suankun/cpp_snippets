#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int hours, minutes;
    cin >> hours >> minutes;

    int total=(hours*60)+(minutes+15);
    if (total>=24*60) total-=24*60;

    int h=total/60;
    int m=total%60;

    cout << h;
    if (m<10) cout << ":0";
    else cout << ":";
    cout << m << endl;
    
    return 0;
}
