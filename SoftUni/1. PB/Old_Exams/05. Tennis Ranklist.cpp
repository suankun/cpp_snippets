#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numberOfTournamets=0;
    int points=0;

    cin >> numberOfTournamets;
    cin >> points;

    int pointsInit=points;
    double win=0;

    for (int i=0; i<numberOfTournamets; i++) {
        string tournament;
        cin >> tournament;
        if (tournament=="W") {
            points+=2000;
            win++;
        }
        else if (tournament=="F") points+=1200;
        else if (tournament=="SF") points+=720;
    }

    cout << "Final points: " << points << endl;
    cout << "Average points: " << (points-pointsInit)/numberOfTournamets << endl;
    cout << fixed << setprecision(2) << (win/numberOfTournamets)*100 << "%";

    return 0;
}