#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int nums [] {10, 20, 30};
    // for (auto num: nums) {
    //     cout << num << " ";
    // }

    vector <double> temperature {32.2, 22.4, 33.5};
    double sum {};
    double average {};
    for (auto temp: temperature) {
        sum += temp;
    }
    average = sum / temperature.size();
    cout << average << endl;

    return 0;
}