#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int N;
    char algo;

    string buf;
    getline(cin, buf, ',');

    N = stoi(buf);
    cin >> algo;

    int counter = 1;
    int r = 0, c = 0;
    int direction = 1;

    vector<vector<int>> mat(N, vector<int>(N, 0));

    for (; counter <= N*N; counter++) {
        mat[r][c] = counter;

        r += direction;

        if (algo == 'A') {
            if (r >= N) {
                r = 0;
                c++;
            }
        }
        else {
            if (r < 0 || r >= N) {
                c++;
                if (r >= N)
                    r = N - 1;
                else
                    r = 0;
                direction = -direction;
            }
        }
    }

    for (int currRow = 0; currRow < N; currRow++) {
        for (int currCol = 0; currCol < N; currCol++)
            cout << mat[currRow][currCol] << ' ';
        cout << endl;
    }

    return 0;
}
