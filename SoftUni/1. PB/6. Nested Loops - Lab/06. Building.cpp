#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int floors, rooms;
    cin >> floors >> rooms;

    for (int i=floors; i>0; i--) {
        for (int j=0; j<rooms; j++) {
            if (i==floors) cout << "L" << i << j << " ";
            else if (i%2==0) cout << "O" << i << j << " ";
            else cout << "A" << i << j << " ";
        }
        cout << endl;
    }

    return 0;
}
