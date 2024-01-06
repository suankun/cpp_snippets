#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    int episode, lunchBreak;
    getline(cin, name);
    cin >> episode >> lunchBreak;

    double lunch = lunchBreak*(1/8.0);
    double relax = lunchBreak*(1/4.0);
    double restOfTime = lunchBreak-lunch-relax;

    if (restOfTime>=episode)
        cout << "You have enough time to watch " << name << " and left with " << ceil(restOfTime-episode) << " minutes free time." << endl;
    else
        cout << "You don't have enough time to watch " << name << ", you need " << ceil(episode-restOfTime) << " more minutes." << endl;

    return 0;
}
