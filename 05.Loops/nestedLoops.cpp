#include <iostream>
#include <vector>
using namespace std;

// Multiplication table
// Histogram with dashes (-)

int main() {
////////////   Multiplication table   ////////////////////////
    // for (int num1 {1}; num1 <= 10; num1++) {
    //     cout << "-----" << num1 << "-----" << endl;
    //     for (int num2 {1}; num2 <= 10; num2++) {
    //         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    //     }
    //     cout << endl;
    // }
////////////   Histogram with dashes (-)   ////////////////////
    int values {};
    vector <int> histogram_values {};
    cout << "Enter the number of values: ";
    cin >> values;

    for (int i {}; i < values; i++) {
        int temp_value {};
        cout << "Enter value " << i+1 << ": ";
        cin >> temp_value;
        histogram_values.push_back(temp_value);
    }

    for (auto val: histogram_values) {
        for(int i {}; i < val; i++) {
            cout << "-";
        }
        cout << endl;
    }

    return 0;
}