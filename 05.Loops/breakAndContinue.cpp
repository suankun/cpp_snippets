#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> signals {1, 2, -1, 3, -99, 4, 5};
    for (auto sig: signals) {
        if (sig == -99) {
            break;
        } else if (sig == -1)
        {
            continue;
        } else {
            cout << sig << endl;
        } 
    }

    return 0;
}