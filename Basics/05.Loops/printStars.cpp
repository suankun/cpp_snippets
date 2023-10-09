#include <iostream>
using namespace std;

void print_stars(int n) {
    for (int i=0; i<n; i++) cout << std::string(n, '*') << '\n';
}

int main()
{
    print_stars(3);
    // int n = 0;
    
    // do {
    //     cout << "Enter num between 2 and 100: ";
    //     cin >> n;
    // } while (n <= 2 || n >= 100);

    // for (int i=0; i<n; i++) {
    //     if (i == 0 || i == n-1) cout << std::string(n, '*') << '\n';
    //     else cout << '*' << std::string(n-2, ' ') << '*' << '\n';
    // }

    return 0;
}
