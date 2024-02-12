#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int peopleNumber = 0;
    double entryFee, loungePrice, umbrellaPrice;
    cin >> peopleNumber >> entryFee >> loungePrice >> umbrellaPrice;

    double totalEntryFee = peopleNumber * entryFee;
    double totalLoungePrice = ceil(peopleNumber * 0.75) * loungePrice;
    double totalUmbrellaPrice = ceil(peopleNumber * 0.5) * umbrellaPrice;

    double totalPrice = totalEntryFee + totalLoungePrice + totalUmbrellaPrice;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalPrice << " lv." << endl;

    return 0;
}
