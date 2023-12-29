#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int min=0, sec=0, hundredMeters=0;
    double lenght=0.0;

    cin >> min >> sec >> lenght >> hundredMeters;

    int controlTime = (min*60) + sec;
    double timeDec = lenght/120;
    double timePenalty = timeDec*2.5;

    double athleteTime = ((lenght/100) * hundredMeters) - timePenalty;

    if (athleteTime<=controlTime) {
        cout << "Marin Bangiev won an Olympic quota!" << endl;
        cout << "His time is " << fixed << setprecision(3) << athleteTime << ".";
    }
    else {
        cout << "No, Marin failed! He was " << fixed << setprecision(3) << athleteTime-controlTime << " second slower.";
    }

    return 0;
}