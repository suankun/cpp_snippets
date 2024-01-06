#include <iostream>
using namespace std;

int main() {
    int won=0, loss=0, draw=0;

    for (size_t i=0; i<3; i++) {
        string temp;
        cin >> temp;
        temp[0]<temp[2] ? loss++ : temp[0]>temp[2] ? won++ : draw++;
    }

    cout << "Team won " << won << " games." << endl;
    cout << "Team lost " << loss << " games." << endl;
    cout << "Drawn games: " << draw;

    return 0;
}
