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
    int interceptions;
    cin >> interceptions;
    vector < vector<int> > matrix =
        vector < vector<int> >(interceptions, vector<int>(interceptions));

    for (int rows = 0; rows < interceptions; rows++)
        for (int cols = 0; cols < interceptions; cols++)
            cin >> matrix[rows][cols];

    cout << ' ' << ' ';
    for (int inter = 0; inter < interceptions; inter++)
        cout << (char)((inter) + 65) << ' ';
    cout << endl;

    for (int rows = 0; rows < interceptions; rows++) {
        cout << (char)((rows) + 65) << ' '; 
        for (int cols = 0; cols < interceptions; cols++)
            cout << matrix[rows][cols] << ' ';
        cout << endl;
    }

    set<string> roadsForOpt;
    int totalOpportunities = 0;
    for (int rows = 0; rows <= interceptions; rows++) {
        for (int cols = rows + 1; cols < interceptions; cols++) {
            if (matrix[rows][cols] != matrix[cols][rows]) {
                string temp = string(1, (char)((rows) + 65)) + string(1, (char)((cols) + 65)) +
                              "(" + to_string(matrix[rows][cols]) + ")" + " - " +
                              string(1, (char)((cols) + 65)) + string(1, (char)((rows) + 65)) +
                              "(" + to_string(matrix[cols][rows]) + ")";
                roadsForOpt.insert(temp);

                totalOpportunities += abs(matrix[rows][cols] - matrix[cols][rows]);
            }
        }
    }

    for (string roads : roadsForOpt)
        cout << roads << endl;
    

    cout << "Total opportunities: " << totalOpportunities << endl;

    vector<string> maxOpt;
    int maxOptimization = 0;
    for (int rows = 0; rows <= interceptions; rows++) {
        for (int cols = rows + 1; cols < interceptions; cols++) {
            if (matrix[rows][cols] != matrix[cols][rows]) {
                if (maxOptimization < abs(matrix[rows][cols] - matrix[cols][rows]))
                    maxOptimization = abs(matrix[rows][cols] - matrix[cols][rows]);
                    
            }
        }
    }

    for (int rows = 0; rows <= interceptions; rows++) {
        for (int cols = rows + 1; cols < interceptions; cols++) {
            if (matrix[rows][cols] != matrix[cols][rows]) {
                if (abs(matrix[rows][cols] - matrix[cols][rows]) == maxOptimization)
                    maxOpt.push_back(string(1, (char)((rows) + 65)) + string(1, (char)((cols) + 65)) + "-" +
                                     string(1, (char)((cols) + 65)) + string(1, (char)((rows) + 65)));
                    
            }
        }
    }
    

    cout << "Max optimization: ";
    if (totalOpportunities == 0)
        cout << "none" << endl;
    else {
        cout << maxOptimization << ": ";
        for (string max : maxOpt)
            cout << max << ' ';
        cout << endl;
    }

    return 0;
}
