#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int nylon=0, paint=0, thinner=0, hours=0;
    double expenses=0.0;
    cin >> nylon;
    cin >> paint;
    cin >> thinner;
    cin >> hours;

    expenses=((nylon+2)*1.50)+((paint+paint*0.1)*14.50)+(thinner*5.00)+0.40;
    expenses+=((expenses*0.3)*hours);

    cout << expenses << endl;
    
    return 0;
}
