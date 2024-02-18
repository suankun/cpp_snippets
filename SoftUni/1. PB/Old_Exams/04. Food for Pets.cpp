#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int days;
    double totalFood;
    cin >> days >> totalFood;

    double biscuits = 0;
    int dog = 0, cat = 0;

    for (int i=0; i<days; i++) {
        int currDog, currCat;
        cin >> currDog >> currCat;
        dog += currDog; cat += currCat;
        if ((i+1) % 3 == 0) biscuits += (currDog+currCat)*0.1;
    }

    double totalEaten = dog+cat;
    cout << "Total eaten biscuits: " << round(biscuits) << "gr." << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalEaten/totalFood * 100 << "\% of the food has been eaten." << endl;
    cout << dog/totalEaten * 100 << "\% eaten from the dog." << endl;
    cout << cat/totalEaten * 100 << "\% eaten from the cat." << endl;

    return 0;
}
