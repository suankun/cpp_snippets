#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    int serials=0, episodes=0;
    double duration=0.0;

    getline(cin, name);
    cin >> serials;
    cin >> episodes;
    cin >> duration;

    double ads=duration*0.2;
    double totalDuration=duration+ads;
    double additionalTime=serials*10;

    double total = totalDuration*episodes*serials+additionalTime;

    int result=floor(total);

    cout << "Total time needed to watch the " << name << " series is " << result << " minutes." << endl;

    return 0;
}
