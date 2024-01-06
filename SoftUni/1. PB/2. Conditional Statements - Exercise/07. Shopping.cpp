#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    double budget;
    int videocard, processor, ram;
    cin >> budget >> videocard >> processor >> ram;

    double videocardTotal = videocard*250;
    double processorPrice = videocardTotal*0.35;
    double processorTotal = processor*processorPrice;
    double ramPrice = videocardTotal*0.1;
    double ramTotal = ram*ramPrice;

    double total = videocardTotal+processorTotal+ramTotal;

    if (videocard>processor) total*=0.85;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget>=total) cout << "You have " << budget-total << " leva left!" << endl;
    else cout << "Not enough money! You need " << total-budget << " leva more!" << endl;

    return 0;
}
