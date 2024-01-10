#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const int FACEBOOK=150, INSTAGRAM=100, REDDIT=50;
    int n, salary;
    cin >> n >> salary;

    for (int i=0; i<n; i++) {
        string tab;
        cin >> tab;
        if (tab=="Facebook") salary-=FACEBOOK;
        else if (tab=="Instagram") salary-=INSTAGRAM;
        else if (tab=="Reddit") salary-=REDDIT;
        if (salary<=0) {
            break;
        }
    }

    if (salary>0) cout << salary << endl;
    else cout << "You have lost your salary." << endl;

    return 0;
}
