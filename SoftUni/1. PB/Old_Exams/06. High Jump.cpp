#include <iostream>
using namespace std;

int main() {
    int target=0, bar=0, jumps=0;
    cin >> target;
    bar=target-30;

    while ((bar-5)<target)
    {
        int attempts=0;
        while (attempts<3)
        {
            jumps++;
            int currentJump=0;
            cin >> currentJump;
            if (currentJump>bar) break;
            attempts++;
        }
        if (attempts==3) break;
        bar+=5;
    }

    if (bar<=target) cout << "Tihomir failed at " << bar << "cm after " << jumps << " jumps.";
    else cout << "Tihomir succeeded, he jumped over " << bar-5 << "cm after " << jumps << " jumps.";

    return 0;
}
