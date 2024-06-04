#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int towns;
    cin >> towns;
    cin.ignore();

    map< string, vector<double> > townsTemperatures;
    
    while(true) {
        string curCity;
        double minTemp = DBL_MAX, maxTemp = DBL_MIN;
        getline(cin, curCity);
        cin >> minTemp;
        cin >> maxTemp;
        cin.ignore();

        if (townsTemperatures[curCity].empty())
            townsTemperatures[curCity].push_back(minTemp);
        else if (townsTemperatures[curCity][0] > minTemp)
            townsTemperatures[curCity][0] = minTemp;

        if (townsTemperatures[curCity].size() == 1)
            townsTemperatures[curCity].push_back(maxTemp);
        else if (townsTemperatures[curCity][1] < maxTemp)
            townsTemperatures[curCity][1] = maxTemp;

        if (townsTemperatures.size() == towns)
            break;
    }

    for (pair<string, vector<double>> town : townsTemperatures) {
        cout << town.first << ' ';
        for (double temp : town.second)
            cout << temp << ' ';
        cout << endl;
    }

    return 0;
}
