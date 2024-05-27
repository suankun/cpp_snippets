#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double sneakers=0.0, outfit=0.0, ball=0.0, accessories=0.0;
    int tax=0;
    cin >> tax;

    sneakers=tax*0.60;
    outfit=sneakers*0.80;
    ball=outfit*0.25;
    accessories=ball*0.20;
    
    double expenses=tax+sneakers+outfit+ball+accessories;

    cout << expenses << endl;
    
    return 0;
}
