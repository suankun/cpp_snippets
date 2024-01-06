#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    int totalNums=0, currNum=0;
    double divBy2=0.0, divBy3=0.0, divBy4=0.0;
    cin >> totalNums;

    for (int i=0; i<totalNums; i++) {
        cin >> currNum;
        if (currNum%2==0) divBy2++;
        if (currNum%3==0) divBy3++;
        if (currNum%4==0) divBy4++;
    }

    cout << fixed << setprecision(2);
    cout << divBy2/totalNums * 100 << "%" << endl;
    cout << divBy3/totalNums * 100 << "%" << endl;
    cout << divBy4/totalNums * 100 << "%" << endl;

    return 0;
}
