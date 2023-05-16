#include <iostream>
using namespace std;

// unsigned long long factorial(unsigned long long n) {
//     if (n == 0)
//         return 1;
//     return n * factorial(n-1);
// }

// int main() {
//     cout << factorial(5) << endl;
//     cout << factorial(10) << endl;
//     cout << factorial(20) << endl;

//     return 0;
// }
//////////    fibonacci    ////////////////////
unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;

    return 0;
}