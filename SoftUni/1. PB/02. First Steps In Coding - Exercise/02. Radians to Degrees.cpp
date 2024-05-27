#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double radians=0.0;
    cin >> radians;
    double degrees=radians*180 / 3.14;

    cout << round(degrees) << endl;
    
    return 0;
}
