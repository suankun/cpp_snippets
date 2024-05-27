#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double deposit=0.0, percent=0.0;
    int months=0;
    cin >> deposit;
    cin >> months;
    cin >> percent;

    double interest=deposit*(percent/100);
    double interestPerMonth=interest/12;
    double amount=deposit+months*interestPerMonth;

    cout << amount << endl;
    
    return 0;
}
