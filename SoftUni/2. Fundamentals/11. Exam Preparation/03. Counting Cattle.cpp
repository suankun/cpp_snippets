#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string castleCode;
    getline(cin, castleCode);

    istringstream iss(castleCode);
    iss.str();

    string cows = "", sheeps = "", others = "";
    int cowsCnt = 0, sheepsCnt = 0, othersCnt = 0;
    int cowsTotal = 0, sheepsTotal = 0, othersTotal = 0;

    string currentCastle;
    while (iss >> currentCastle)
    {
        if (currentCastle[0] == 'C') {
            cows += " " + currentCastle;
            cowsCnt++;
            cowsTotal += currentCastle[1] - '0';
        }
        else if (currentCastle[0] == 'S') {
            sheeps += " " + currentCastle;
            sheepsCnt++;
            sheepsTotal += currentCastle[1] - '0';
        }
        else {
            others += " " + currentCastle;
            othersCnt++;
            othersTotal += currentCastle[1] - '0';
        }
    }

    double cowsAvg = (1.0) * cowsTotal / cowsCnt;
    double sheepsAvg = (1.0) * sheepsTotal / sheepsCnt;
    double othersAvg = (1.0) * othersTotal / othersCnt;
    
    ostringstream ossCows;
    ossCows << fixed << setprecision(2) << cowsAvg;
    string cowsAvgStr = ossCows.str();

    ostringstream ossSheep;
    ossSheep << fixed << setprecision(2) << sheepsAvg;
    string sheepAvgStr = ossSheep.str();

    ostringstream ossOthers;
    ossOthers << fixed << setprecision(2) << othersAvg;
    string othersAvgStr = ossOthers.str();

    string cowsResult = to_string(cowsCnt) + " cows:" + cows + " with avg. size " + cowsAvgStr;
    string sheepsResult =  to_string(sheepsCnt) + " sheep:" + sheeps + " with avg. size " + sheepAvgStr;
    string othersResult =  to_string(othersCnt) + " others:" + others + " with avg. size " + othersAvgStr;

    if (cowsCnt == 0) {
        cout << "no cows!" << endl;
    }
    else {
        cout << cowsResult << endl;
    }
    if (sheepsCnt == 0) {
        cout << "no sheep!" << endl;
    }
    else {
        cout << sheepsResult << endl;
    }
    if (othersCnt == 0) {
        cout << "no others!" << endl;
    }
    else {
        cout << othersResult << endl;
    }

    return 0;
}
