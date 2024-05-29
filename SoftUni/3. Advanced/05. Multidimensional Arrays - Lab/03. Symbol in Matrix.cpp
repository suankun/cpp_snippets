#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector < vector<char> > matrix =
        vector < vector<char> >(N, vector<char>(N));

    for (int rows = 0; rows < N; rows++) {
        for (int cols = 0; cols < N; cols++) {
            cin >> matrix[rows][cols];
        }
    }

    char searchedChar;
    cin >> searchedChar;
    for (int rows = 0; rows < N; rows++) {
        for (int cols = 0; cols < N; cols++) {
            if (matrix[rows][cols] == searchedChar) {
                cout << '(' << rows << ", " << cols << ')' << endl;
                return 0;
            }
        }
    }

    cout << searchedChar << " does not occur in the matrix" << endl;

    return 0;
}
