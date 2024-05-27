#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> readVector(const int& n) {
    vector<int> pipes(n);

    for (int i = 0; i < n; i++) {
        cin >> pipes[i];
    }

    return pipes;
}

void printVector(const vector<int>& v) {
    for (vector<int>::const_iterator it = v.cbegin(); it < v.cend(); it++) {
        cout << *it << ' ';
    }
}

int main() {
    int numberOfPipes;
    cin >> numberOfPipes;

    vector<int> checkup = readVector(numberOfPipes), installation = readVector(numberOfPipes);

    vector<int> result(numberOfPipes);
    for (int i = 0; i < numberOfPipes; i++) {
        int damage = installation[i] - checkup[i];
        result[i] = installation[i] / damage;
    }

    printVector(result);

    return 0;
}
