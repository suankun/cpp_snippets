#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};


int main() {
    // Rectangle* r1 = new Rectangle;
    // r1->length = 3;
    // r1->width = 5;

    Rectangle rec = {3, 5};
    Rectangle* r1 = &rec;

    // cout << r1->length << ", " << r1->width << endl;

    cout << setw(10) << r1->length
         << setw(10) << r1->width << endl;


    return 0;
}