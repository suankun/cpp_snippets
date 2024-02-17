#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double recordInSec, distanceInMeters, secForOneMeter;
    cin >> recordInSec >> distanceInMeters >> secForOneMeter;

    int delay = floor(distanceInMeters / 50) * 30;
    double climbing = distanceInMeters * secForOneMeter + delay;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    if (climbing < recordInSec)
        cout << "Yes! The new record is " << climbing << " seconds." << endl;
    else
        cout << "No! He was " << climbing - recordInSec << " seconds slower." << endl;

    return 0;
}
