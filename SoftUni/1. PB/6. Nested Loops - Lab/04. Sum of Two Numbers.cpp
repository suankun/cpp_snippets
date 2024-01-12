#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int start, end, magicNumber, combinations=0;
    bool flag=false;
    cin >> start >> end >> magicNumber;
    int i, j;
    for (i=start; i<=end; i++) {
        for (j=start; j<=end; j++) {
            combinations++;
            if (i+j==magicNumber) {
                flag=true;
                break;
            }
        }
        if (flag) break;
    }
    
    if (flag)
        cout << "Combination N:" << combinations << " (" << i << " + " << j << " = " << magicNumber << ")" << endl;
    else
        cout << combinations << " combinations - neither equals " << magicNumber << endl;

    return 0;
}
