#include <iostream>

using namespace std;

int main() {
    // initialize array
    char vowels[] {'a', 'o', 'u', 'e', 'i'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    // change element in the array
    double temperature[] {20.3, 14.6, 32.5, 26.3, 33.6};
    cout << temperature[1] << endl;
    cout << "old value " << temperature[3] << endl;
    temperature[3] = 36.6;
    cout << "new value " << temperature[3] << endl;

    // change elements in the array from cin
    int numbers[] {1, 2, 3, 4, 5};

    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;
    cout << numbers[4] << endl;

    cout << "Enter new values: "; // you can enter values separated with space

    cin >> numbers[0];
    cin >> numbers[1];
    cin >> numbers[2];
    cin >> numbers[3];
    cin >> numbers[4];

    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;
    cout << numbers[4] << endl;

    return 0;
}