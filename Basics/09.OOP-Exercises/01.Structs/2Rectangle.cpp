#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle {
    int length;
    int width;

    void print_rectangle(Rectangle r) {
        // cout << r.length << ", " << r.width << endl;
        cout << setw(10) << r.length
             << setw(10) << r.width << endl;
    }
};

int main() {
    Rectangle r1 = {5, 7};
    r1.print_rectangle(r1);

    return 0;
}