#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    vector<string> cosmos;
    string command;
    while (cin >> command && command != "end")
        cosmos.push_back(command);
    
    string charsForReplacement;
    cin >> charsForReplacement;

    map<char, int> stars;
    int planets = 0, asteroidsAndComets = 0, starsCnt = 0;
    for (size_t i = 0; i < cosmos.size(); i++) {
        for (size_t j = 0; j < cosmos[i].length(); j++) {

            string validPlanets = "OBAFGKMLTY";
            if (isalpha(cosmos[i][j]) && validPlanets.find(cosmos[i][j] != string::npos)) {
                stars[cosmos[i][j]]++;
                starsCnt++;
            }
            
            if (isdigit(cosmos[i][j]))
                planets += cosmos[i][j] - '0';

            if (cosmos[i][j] == '#' || cosmos[i][j] == '$')
                asteroidsAndComets++;

            if (charsForReplacement.find(cosmos[i][j]) != string::npos)
                cosmos[i][j] = '+';
        }
    }

    cout << "Stars: " << starsCnt << endl;

    for (auto p : stars)
        cout << "- " << p.first << ": " << p.second << endl;

    cout << "Planets: " << planets << endl;

    cout << "Asteroids/comets: " << asteroidsAndComets << endl;
    
    for (string c : cosmos)
        cout << c << endl;

    return 0;
}
