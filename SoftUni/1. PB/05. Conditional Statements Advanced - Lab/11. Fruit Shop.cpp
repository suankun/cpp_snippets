#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string fruit, day;
    double quantity;
    cin >> fruit >> day >> quantity;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday") {
        if (fruit=="banana") cout << quantity*2.50 << endl;
        else if (fruit=="apple") cout << quantity*1.20 << endl;
        else if (fruit=="orange") cout << quantity*0.85 << endl;
        else if (fruit=="grapefruit") cout << quantity*1.45 << endl;
        else if (fruit=="kiwi") cout << quantity*2.70 << endl;
        else if (fruit=="pineapple") cout << quantity*5.50 << endl;
        else if (fruit=="grapes") cout << quantity*3.85 << endl;
        else cout << "error" << endl;
    }
    else if (day=="Saturday" || day=="Sunday") {
        if (fruit=="banana") cout << quantity*2.70 << endl;
        else if (fruit=="apple") cout << quantity*1.25 << endl;
        else if (fruit=="orange") cout << quantity*0.90 << endl;
        else if (fruit=="grapefruit") cout << quantity*1.60 << endl;
        else if (fruit=="kiwi") cout << quantity*3.00 << endl;
        else if (fruit=="pineapple") cout << quantity*5.60 << endl;
        else if (fruit=="grapes") cout << quantity*4.20 << endl;
        else cout << "error" << endl;
    }
    else cout << "error" << endl;
    
    return 0;
}
