#include <iostream>
using namespace std;

int main() {
    int num {}, diff {};
    const int target {10};

    cout << "Enter an integer greater than " << target << ": ";
    cin >> num;

    if (num >= target) {
        cout << "Yes, the number is greater than " << target << endl;
        diff = num - target;
        cout << "The number is greather than " << target << " with " << diff << "." << endl;
    } else {
        cout << "No, the number is lesser than " << target << endl;
        diff = target - num;
        cout << "The number is lesser than " << target << " with " << diff << "." << endl;
    }
    
    return 0;
}