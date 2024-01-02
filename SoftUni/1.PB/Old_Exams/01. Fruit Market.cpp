#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    double strawberriesPrice=0.0, bananas=0.0, oranges=0.0, raspberries=0.0, strawberries=0.0;
    cin >> strawberriesPrice;
    cin >> bananas;
    cin >> oranges;
    cin >> raspberries;
    cin >> strawberries;

    double raspberriesPrice=strawberriesPrice*0.5;
    double orangesPrice=raspberriesPrice*0.6;
    double bananasPrice=raspberriesPrice*0.2;

    double total=(strawberriesPrice*strawberries)+(raspberriesPrice*raspberries)+(orangesPrice*oranges)+(bananasPrice*bananas);
    
    cout << fixed << setprecision(2) << total << endl;
        
    return 0;
}
