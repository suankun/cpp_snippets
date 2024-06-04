#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

void readMatrix(istream& in, vector< vector<int> >& mat, int len) {
    mat = vector < vector<int> >(len, vector<int>(len, 0));

    for (int currRow = 0; currRow < len; currRow++)
        for (int currCol = 0; currCol < len; currCol++)
            in >> mat[currRow][currCol];
}

int getIndex(vector<string>& v, string& name) 
{ 
    auto it = find(v.begin(), v.end(), name);
    int res = it - v.begin();
    return res;
} 

int main() {
    vector<string> system;
    string name;
    while (cin >> name && name != "END")
        system.push_back(name);
    cin.ignore();
    int len = system.size();

    // read distances matrix
    vector<vector<int>> mat(len, vector<int>(len, 0));
    readMatrix(cin, mat, len);

    // read routes 
    vector<vector<string>> routes;
    string currRoute;
    cin.ignore();
    while (getline(cin, currRoute) && currRoute != "END") {
        vector<string> tempRoute;

        istringstream iss(currRoute);
        string currName;

        while (iss >> currName)
            tempRoute.push_back(currName);

        routes.push_back(tempRoute);
    }

    // find min and max roads
    int minRoad = INT_MAX, maxRoad = INT_MIN;
    for (int row = 0; row < mat.size(); row++)
        for (int col = 0; col < mat[row].size(); col++) {
            if (minRoad > mat[row][col] && mat[row][col] != 0)
                minRoad = mat[row][col];
            if (maxRoad < mat[row][col])
                maxRoad = mat[row][col];
        }

    // print min and max road
    for (int row = 0; row < mat.size(); row++)
        for (int col = 0; col < mat[row].size(); col++)
            if (mat[row][col] == minRoad)
                cout << minRoad << ": " << system[row] + " -> " + system[col] << endl;

    for (int row = 0; row < mat.size(); row++)
        for (int col = 0; col < mat[row].size(); col++)
            if (mat[row][col] == maxRoad)
                cout << maxRoad << ": " << system[row] + " -> " + system[col] << endl;


    // print out road distances
    vector<int> distances;
    for (int row = 0; row < routes.size(); row++) {
        int sumOfRoute = 0;
        for (int col = 0; col < routes[row].size() - 1; col++) {
            int startPlanet = getIndex(system, routes[row][col]);
            int endPlanet = getIndex(system, routes[row][col+1]);
            int currentRouteDistance = mat[startPlanet][endPlanet];
            sumOfRoute += currentRouteDistance;
        }
        distances.push_back(sumOfRoute);
    }

    // print distances
    int totalDistSum = 0;
    for (int& currDist : distances) {
        cout << currDist << endl;
        totalDistSum += currDist;
    }

    cout << totalDistSum << endl;

    return 0;
}
