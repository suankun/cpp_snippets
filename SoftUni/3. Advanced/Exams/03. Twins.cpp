#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
    queue<string> pepi, mimi;
    int N;
    cin >> N;
    cin.ignore();

    string line, nameCashier, nameClient;
    int min;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        istringstream iss(line);
        iss >> nameCashier >> nameClient >> min;

        if (nameCashier == "Pepi")
            for (int curMin = 0; curMin < min; curMin++)
                pepi.push(nameClient);
        if (nameCashier == "Mimi")
            for (int curMin = 0; curMin < min; curMin++)
                mimi.push(nameClient);
    }

    int totalTurns;
    cin >> totalTurns;
    for (int curTurn = 0; curTurn < totalTurns; curTurn++) {
        if (pepi.size()) {
            cout << "Pepi processing " << pepi.front() << endl;
            pepi.pop();
        }
        else
            cout << "Pepi Idle" << endl;
        if (mimi.size()) {
            cout << "Mimi processing " << mimi.front() << endl;
            mimi.pop();
        }
        else
            cout << "Mimi Idle" << endl;
    }

    return 0;
}
