#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    int n1, n2, res;
    string op;
    cin >> n1 >> n2 >> op;

    if (n2==0) {
        cout << "Cannot divide " << n1 << " by zero" << endl;
    }
    else if (op!="/" && op!="%") {
        if (op=="+") res=n1+n2;
        else if (op=="-") res=n1-n2;
        else if (op=="*") res=n1*n2;
        cout << n1 << " " << op << " " << n2 << " = " << res << " - " << (res%2==0?"even":"odd") << endl;
    }
    else if (op=="/") {
        res=n1/n2;
        cout << fixed << setprecision(2) << n1 << " / " << n2 << " = " << (n1*1.0)/n2 << endl;
    }
    else if (op=="%") {
        res=n1%n2;
        cout << n1 << " % " << n2 << " = " << res << endl;
    }
    

    return 0;
}
