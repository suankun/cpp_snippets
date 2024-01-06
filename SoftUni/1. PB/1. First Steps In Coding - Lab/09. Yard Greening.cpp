#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double sq_m=0.0;
    cin >> sq_m;
    double price=sq_m*7.61;

    cout <<  "The final price is: " << price-(price*0.18) << " lv." << endl;
    cout <<  "The discount is: " << price*0.18 << " lv." << endl;
    
    return 0;
}
