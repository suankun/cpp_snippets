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

    void init_rectangle(Rectangle& r) {
        // length = r.length;
        // width = r.width;
        do {
            cout << "lenght: "; cin >> r.length;
            cout << "width: ";  cin >> r.width;
        } while (r.length <= 0 || r.width <=0);
    }

    Rectangle init_rectangle() {
        Rectangle r;
        do {
            cout << "lenght: "; cin >> r.length;
            cout << "width: ";  cin >> r.width;
        } while (r.length <= 0 || r.width <=0);
        return r;
    }
};

int main() {
    Rectangle r1 = {5, 7};
    r1.print_rectangle(r1);

    Rectangle r2;
    // cin >> r2.length >> r2.width;
    r2.init_rectangle(r2);
    r2.print_rectangle(r2);

    Rectangle r3 = r3.init_rectangle();
    r3.print_rectangle(r3);

    return 0;
}