#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cakesNum=0, flour=0, sugar=0;
    cin >> cakesNum;

    int maxFlour=0, maxSugar=0;
    int tempFlour=0, tempSugar=0;
    for (int i=0; i<cakesNum; i++) {
        cin >> tempSugar;
        cin >> tempFlour;
        if (tempSugar>maxSugar) maxSugar=tempSugar;
        if (tempFlour>maxFlour) maxFlour=tempFlour;
        flour+=tempFlour; sugar+=tempSugar;
    }

    double packSugar = ceil(sugar/950.0);
    double packFlour = ceil(flour/750.0);

    cout << "Sugar: " << packSugar << endl;
    cout << "Flour: " << packFlour << endl;
    cout << "Max used flour is " << maxFlour <<
     " grams, max used sugar is " << maxSugar << " grams." << endl;

    return 0;
}
