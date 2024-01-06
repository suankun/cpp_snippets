#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string size, color;
    int num=0;
    cin >> size;
    cin >> color;
    cin >> num;

    double total=0.0;

    if (size=="Large") {
        if (color=="Red") total=num*16;
        else if (color=="Green") total=num*12;
        else if (color=="Yellow") total=num*9;
    }
    else if (size=="Medium") {
        if (color=="Red") total=num*13;
        else if (color=="Green") total=num*9;
        else if (color=="Yellow") total=num*7;
    }
    else if (size=="Small") {
        if (color=="Red") total=num*9;
        else if (color=="Green") total=num*8;
        else if (color=="Yellow") total=num*5;
    }

    cout << fixed << setprecision(2) << total*0.65 << " leva." << endl;

    return 0;
}
