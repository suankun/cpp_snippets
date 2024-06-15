#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> names;
vector< pair<string, string> > coords;

void printByCoords(const pair<string, string> & coordinates) {
    vector< pair<string, string> >::iterator isFound = find(coords.begin(), coords.end(), coordinates);

    while (isFound != coords.end())
    {
        int idx = isFound - coords.begin();
        cout << names[idx] << ',' << coords[idx].first << ',' << coords[idx].second << endl;
        isFound = find(isFound+1, coords.end(), coordinates);
    }
    

}

void printByName(const string & name) {
    vector<string>::iterator isFound = find(names.begin(), names.end(), name);

    if (isFound != names.end()) {
        int idx = isFound - names.begin();

        cout << names[idx] << ',' << coords[idx].first << ',' << coords[idx].second << endl;
    }
}

int main()
{
    string line;
    while (getline(cin, line) && line != ".")
    {
        istringstream iss(line);

        string name;
        pair<string, string> coord;

        getline(iss, name, ',');
        getline(iss, coord.first, ',');
        iss >> coord.second;

        names.push_back(name);
        coords.push_back(coord);

    }
    

    while (getline(cin, line) && line != ".")
    {
        istringstream iss(line);

        if (isdigit(line[0])) {
            pair<string, string> coordinates;
            iss >> coordinates.first >> coordinates.second;

            printByCoords(coordinates);
        }
        else {
            string name;
            iss >> name;

            printByName(name);
        }

    }
    
    
    return 0;
}
