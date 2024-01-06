#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    double trip;
    int puzzles, puppets, bears, minions, trucks;
    cin >> trip >> puzzles >> puppets >> bears >> minions >> trucks;

    int totalToys = puzzles+puppets+bears+minions+trucks;
    double totalPrice = (puzzles*2.60)+(puppets*3.00)+(bears*4.10)+(minions*8.20)+(trucks*2.00);

    if (totalToys>=50) totalPrice*=0.75;

    totalPrice*=0.90;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (totalPrice<trip) cout << "Not enough money! " << trip-totalPrice << " lv needed." << endl;
    else cout << "Yes! " << totalPrice-trip << " lv left." << endl;
    
    return 0;
}
