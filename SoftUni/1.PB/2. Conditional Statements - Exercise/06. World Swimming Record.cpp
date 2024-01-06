#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main() {
    double record, distance, secPerMeter;
    cin >> record >> distance >> secPerMeter;

    double distSwim = distance*secPerMeter;
    int resist = distance/15;
    double slowDown = resist*12.5;
    double totalTime = distSwim+slowDown;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (totalTime<record) cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    else cout << "No, he failed! He was " << totalTime-record << " seconds slower." << endl;

    return 0;
}
