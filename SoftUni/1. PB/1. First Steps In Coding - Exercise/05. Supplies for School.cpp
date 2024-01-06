#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double pens=0.0, markers=0.0, liquids=0.0, discount=0.0, total=0.0;
    cin >> pens;
    cin >> markers;
    cin >> liquids;
    cin >> discount;

    total=pens*5.8+markers*7.2+liquids*1.2;
    total-=total*(discount/100);

    cout << total << endl;
    
    return 0;
}
