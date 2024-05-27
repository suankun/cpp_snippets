#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int points;
    double bonus, total;
    cin >> points;

    if (points>1000) bonus=points*0.1;
    else if (points>100) bonus=points*0.2;
    else bonus=5;

    if (points%2==0) bonus+=1;
    else if (points%2!=0 && points%5==0) bonus+=2;
    total=points+bonus;

    cout << bonus << endl;
    cout << total << endl;
    
    return 0;
}
