#include <iostream>
using namespace std;

// print numbers from to 0
// print numbers up to input number
// enter number under 100
// enter number in range (use a flag)

int main() {
    // int num {};
    // cout << "Enter a number: ";
    // cin >> num;

    // while (num > 0)
    // {
    //     cout << num << endl;
    //     num--;
    // }
//////////////////////////////////////////
    // int num {};
    // cout << "Enter a number: ";
    // cin >> num;
    // int i {1};
    
    // while (i <= num)
    // {
    //     cout << i << endl;
    //     i++;
    // }
//////////////////////////////////////////
    // int num {};
    // cout << "Enter a number under a 100: ";
    // cin >> num;

    // while (num >= 100)
    // {
    //     cout << "Enter a number under a 100: ";
    //     cin >> num;
    // }
    // cout << "Success, the number is " << num << endl;
//////////////////////////////////////////
    int num {};
    bool done {false};

    while (!done)
    {
        cout << "Enter a number between 1 and 5: ";
        cin >> num;
        if (num < 1 || num > 5)
            cout << "Out of range!" << endl;
        else
            done = true;
    }
    cout << "Your number is " << num << endl;

    return 0;
}