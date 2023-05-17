#include <iostream>
using namespace std;

int main() {
    int scores [] {100, 39, 94, -1};
    int *pScores {scores};

    while (*pScores != -1)
    {
        cout << *pScores << " ";
        pScores++;
    }
    cout << endl;

    cout << "-----------------------------------"<< endl;

    pScores = scores; // returning pointer to first position in the array
    while (*pScores != -1)
    {
        cout << *pScores++ << " ";
    }
    cout << endl;
    
    cout << "-----------------------------------"<< endl;

    char name [] = "Edmont";
    char *pName1 {&name[0]};
    char *pName2 {&name[3]};
    cout << "The 'o' character in the name " << name << " is on " << (pName2-pName1) << " index." << endl;

    return 0;
}