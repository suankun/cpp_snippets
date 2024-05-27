#include <iostream>
using namespace std;

int main() {
    // User input
    int start;
    cin >> start;

    int end;
    cin >> end;

    // Print numbers from start number to end number
    int sum = 0;
    for (int i=start; i<=end; i++) {
        cout << i << ' ';
        sum += i;
    }
    cout << endl;
    
    // Print the sum
    cout << "Sum: " << sum << endl;

    return 0;
}
