#include <iostream>
#include <vector>
#include <iomanip>
#include <numeric>
using namespace std;

int main() {
    int numberOfPeople=0;
    cin >> numberOfPeople;

    vector<int> gym(6, 0);

    string activity;

    for (int i=0; i<=numberOfPeople; i++) {
        getline(cin, activity);
        if (activity=="Back") gym[0]++;
        else if (activity=="Chest") gym[1]++;
        else if (activity=="Legs") gym[2]++;
        else if (activity=="Abs") gym[3]++;
        else if (activity=="Protein shake") gym[4]++;
        else if (activity=="Protein bar") gym[5]++;
    }

    double total=accumulate(gym.begin(), gym.end(), 0.0);

    cout << gym[0] << " - back" << endl;
    cout << gym[1] <<  " - chest" << endl;
    cout << gym[2] <<  " - legs" << endl;
    cout << gym[3] <<  " - abs" << endl;
    cout << gym[4] <<  " - protein shake" << endl;
    cout << gym[5] <<  " - protein bar" << endl;
    cout << fixed << setprecision(2) << ((gym[0]+gym[1]+gym[2]+gym[3])/total)*100 << "% - work out" << endl;
    cout << fixed << setprecision(2) << ((gym[4]+gym[5])/total)*100 << "%" << " - protein" << endl;

    return 0;
}
