#include <iostream>
using namespace std;

int main() {
    enum Direction {
        left, right, up, down
    };

    Direction heading {left};

    switch (heading)
    {
    case left:
        cout << "Go to the left!" << endl;
        break;
    case right:
        cout << "Go to the right!" << endl;
        break;
    case up:
        cout << "Go to the up!" << endl;
        break;
    case down:
        cout << "Go to the down!" << endl;
        break;
    }

    return 0;
}