#include <iostream>
using namespace std;

int main() {
    int bitcoin;
    double yuan, commission;
    cin >> bitcoin >> yuan >> commission;

    const int bitcoinRate = 1168; // лева
    const double yuanRate = 0.15; // долара
    const double usdRate = 1.76; // лева
    const double euroRate = 1.95; // лева

    int totalBitcoinsInLeva = bitcoinRate * bitcoin;
    double totalYainInLeva = yuanRate * yuan * usdRate;
    double totalMoneyInLeva = totalBitcoinsInLeva + totalYainInLeva;
    double total = totalMoneyInLeva / euroRate;
    double totalAfterCommission = total - total*(commission/100.0);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalAfterCommission << endl;

    return 0;
}
