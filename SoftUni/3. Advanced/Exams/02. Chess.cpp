#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void printQueue(queue<char>& q) {
    while (q.size())
    {
        cout << q.front();
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<char> whiteFig, blackFig;

    int SIZE = 8;
    vector < vector<char> > matrix =
        vector < vector<char> >(SIZE, vector<char>(SIZE));

    char temp;
    for (int rows = 0; rows < SIZE; rows++) {
        for (int cols = 0; cols < SIZE; cols++) {
            cin >> temp;
            if (islower(temp))
                blackFig.push(temp);
            else if (isupper(temp))
                whiteFig.push(temp);
            matrix[rows][cols] = islower(temp) ? toupper(temp) : tolower(temp);
        }
    }

    printQueue(whiteFig);
    printQueue(blackFig);
    
    for (size_t row = 0; row < matrix.size(); row++) {
        for (size_t col = 0; col < matrix[row].size(); col++)
            cout << matrix[row][col];
        cout << endl;
    }
    
    return 0;
}
