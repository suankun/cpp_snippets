#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int food;
    cin >> food;

    int totalFood = food * 1000;
    string command;
    while (cin >> command && command != "Adopted") {
        int currEaten = stoi(command);
        totalFood -= currEaten;
    }

    if (totalFood >= 0) cout << "Food is enough! Leftovers: " << totalFood << " grams." << endl;
    else cout << "Food is not enough. You need " << abs(totalFood) << " grams more." << endl;

    return 0;
}
