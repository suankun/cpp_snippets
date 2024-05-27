#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

vector<int> readTrack() {
    string line;
    getline(cin, line);

    vector<int> track;
    istringstream iss(line);

    int num;
    while (iss >> num)
    {
        track.push_back(num);
    }
    
    return track;
}

void printTrack(const vector<int>& track) {
    // for (const int& n: track) cout << n << ' ';
    for (vector<int>::const_reverse_iterator it = track.crbegin(); it != track.crend(); it++) cout << *it << ' ';
}

int main() {
    vector<int> trackA = readTrack(), trackB = readTrack();

    string outputString = "";
    vector<int> result;

    while (!trackA.empty() || !trackB.empty())
    {
        int carFromTrackA = INT_MAX, carFromTrackB = INT_MAX;
        if (!trackA.empty()) carFromTrackA = trackA[trackA.size()-1];
        if (!trackB.empty()) carFromTrackB = trackB[trackB.size()-1];

        if (carFromTrackA < carFromTrackB) {
            outputString += 'A';
            result.push_back(carFromTrackA);
            trackA.pop_back();
        }
        else {
            outputString += 'B';
            result.push_back(carFromTrackB);
            trackB.pop_back();
        }
    }
    
    cout << outputString << endl;
    printTrack(result);

    return 0;
}
