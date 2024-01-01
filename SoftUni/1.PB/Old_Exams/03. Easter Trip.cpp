#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string country, dates;
    int nights=0;
    cin >> country;
    cin >> dates;
    cin >> nights;

    double total=0.0;

    if (country=="France") {
        if (dates=="21-23") total=nights*30;
        else if (dates=="24-27") total=nights*35;
        else if (dates=="28-31") total=nights*40;
    }
    else if (country=="Italy") {
        if (dates=="21-23") total=nights*28;
        else if (dates=="24-27") total=nights*32;
        else if (dates=="28-31") total=nights*39;
    }
    else if (country=="Germany") {
        if (dates=="21-23") total=nights*32;
        else if (dates=="24-27") total=nights*37;
        else if (dates=="28-31") total=nights*43;
    }

    cout << fixed << setprecision(2) << "Easter trip to " << country << " : " << total << " leva." << endl;

    return 0;
}