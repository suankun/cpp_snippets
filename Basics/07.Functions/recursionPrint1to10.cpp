#include <iostream>

using std::cout;
using std::endl;

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);  // Recursive call with a smaller value of n
        std::cout << n << " ";  // Print the current number
    }
}

int main() {
    printNumbers(10);

    return 0;
}
//
// void printNumbers(int n) {
//     if (n <= 10) {
//         printNumbers(n+1);  // Recursive call with a smaller value of n
//         std::cout << n << " ";  // Print the current number
//     }
// }

// int main() {
//     printNumbers(1);

//     return 0;
// }
