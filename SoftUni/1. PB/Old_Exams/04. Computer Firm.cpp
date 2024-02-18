#include <iostream>
using namespace std;

int main() {
    int pcNum;
    cin >> pcNum;

    double totalSales = 0.0, totalRatings = 0.0;
    for (int i=0; i<pcNum; i++) {
        int currentInput;
        cin >> currentInput;
        int rating = currentInput%10;
        int sales = currentInput/10;
        totalRatings += rating;
        if (rating == 2) continue;
        else if (rating == 3) totalSales += sales*0.5;
        else if (rating == 4) totalSales += sales*0.7;
        else if (rating == 5) totalSales += sales*0.85;
        else if (rating == 6) totalSales += sales;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalSales << endl;
    cout << totalRatings/pcNum << endl;

    return 0;
}
