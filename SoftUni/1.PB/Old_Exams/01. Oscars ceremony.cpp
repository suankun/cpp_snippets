#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rent=0, statuettes=0, catering=0, sound=0;
    cin >> rent;

    statuettes=rent*0.7;
    catering=statuettes*0.85;
    sound=catering*0.5;

    cout << fixed << setprecision(2) << (rent+statuettes+catering+sound);

    return 0;
}
