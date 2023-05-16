#include <iostream>

using namespace std;

int main() {
    int counter {10};
    int result {0};

    // pre increment
    cout << "Pre increment counter: " << endl;
    result = ++counter;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    counter = 10;
    result = 0;

    // post increment
    cout << "Post increment counter: " << endl;
    result = counter++;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    return 0;
}