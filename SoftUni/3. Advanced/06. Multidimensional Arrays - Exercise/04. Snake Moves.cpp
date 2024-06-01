#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <array>
using namespace std;

int main() {
    int rows, cols;
    string snake;
    cin >> rows >> cols >> snake;

    char island[12][12];

    string::iterator itS = snake.begin();
    for (int currRow = 0; currRow < rows; currRow++) {
        if (currRow % 2) {
            for (int currCol = cols - 1; currCol >= 0; currCol--) {
                if (itS == snake.end())
                    itS = snake.begin();
                island[currRow][currCol] = *itS;
                itS++;
            }
        }
        else {
            for (int currCol = 0; currCol < cols; currCol++) {
                if (itS == snake.end())
                    itS = snake.begin();
                island[currRow][currCol] = *itS;
                itS++;
            }
        }
    }

    for (size_t currRow = 0; currRow < rows; currRow++) {
        for (size_t currCol = 0; currCol < cols; currCol++)
            cout << island[currRow][currCol];
        cout << endl;
    }
    

    return 0;
}
