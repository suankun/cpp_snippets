// https://www.codewars.com/kata/640dee7cbad3aa002e7c7de4/train/cpp
#include <iostream>
using namespace std;

int buses(int kids, int adults, int places) {
    // std::cout << kids << ',' << adults << ',' << places << std::endl;
    if (places == 0 || adults < 2)
        return 0;
  
    int totalBuses = 0;
    while (kids > 0 || adults > 0) {

        if (kids > 0 && adults <= 0)
            return 0;

        if (kids <= 0)
            adults -= places;
        else if (adults == 1)
            return 0;
        else {
            adults -= 2;
            kids -= (places - 2);
        }

        if (kids < 0) {
            adults -= (kids * -1);
            kids = 0;
        }

        totalBuses++;
    }

    return totalBuses;
}

int main() {
    // kids=10, adults=4, places=7
    // min 2 adult in a bus
    // cout << buses(10, 4, 7) << endl;  // 2
    // cout << buses(10, 4, 5) << endl;  // 0
    // cout << buses(2, 4, 4) << endl;  // 2
    // cout << buses(1, 55, 3) << endl;  // 19
    cout << buses(45, 49, 19) << endl;  // 5

    return 0;
}
//
int buses(const int kids, const int adults, const int places) {
    return places && (!kids || adults / 2 * (places - 2) >= kids) ? (kids + adults + places - 1) / places : 0;
}