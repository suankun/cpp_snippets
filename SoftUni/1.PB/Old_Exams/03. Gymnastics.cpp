#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    string country;
    string discipline;

    cin >> country >> discipline;

    double totalAss = 0.0;
    if (country=="Russia") {
        if (discipline=="ribbon") {
            totalAss = 9.1 + 9.4;
        }
        else if (discipline=="hoop") {
            totalAss = 9.3 + 9.8;
        }
        else if (discipline=="rope") {
            totalAss = 9.6 + 9.0;
        }
    }

    if (country=="Bulgaria") {
        if (discipline=="ribbon") {
            totalAss = 9.6 + 9.4;
        }
        else if (discipline=="hoop") {
            totalAss = 9.55 + 9.75;
        }
        else if (discipline=="rope") {
            totalAss = 9.5 + 9.4;
        }
    }

    if (country=="Italy") {
        if (discipline=="ribbon") {
            totalAss = 9.2 + 9.5;
        }
        else if (discipline=="hoop") {
            totalAss = 9.45 + 9.35;
        }
        else if (discipline=="rope") {
            totalAss = 9.7 + 9.15;
        }
    }

    double percent = (abs(totalAss-20) / 20) * 100;
    cout << "The team of " << country << " get " << fixed << setprecision(3) << totalAss << " on " << discipline << "." << endl;
    cout << fixed << setprecision(2) << percent << "%";

    return 0;
}
