#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> readTrain() {
    vector<string> train;
    train.push_back("|");
    string command;
    while (getline(cin, command) && command != "end")
    {
        if (command == "empty") train.push_back(" |");
        else train.push_back(command + "|");
    }
    return train;
}

void printTrain(const vector<string>& tr) {
    for (const string& w : tr) cout << w;
    cout << endl;
}

int main() {
    vector<string> train = readTrain();

    string line;
    while (true)
    {
        getline(cin, line);
        istringstream iss(line);

        if (line == "E") break;

        iss.str(line);  // M 2 1
        string command;
        iss >> command;  // M

        if (command == "P") {
            printTrain(train);
        }
        else if (command == "M") {
            int oldWaganPosition;
            int newWaganPosition;
            iss >> oldWaganPosition >> newWaganPosition; // 2 1

            string tempWagon = train[oldWaganPosition];
            train.erase(train.begin() + oldWaganPosition);
            train.insert(train.begin() + newWaganPosition, tempWagon);
            printTrain(train);
        }
        else if (command == "L") {
            int wagonPosition;
            iss >> wagonPosition;

            train.erase(train.begin() + wagonPosition);
            printTrain(train);
        }
    }
    

    return 0;
}
