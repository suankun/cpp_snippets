#include <iostream>
#include <iomanip>
using namespace std;

struct Product {
    char description[32];
    int partNum;
    double cost;

    void printInfo() {
        std::cout << description << ", " << partNum << ", " << cost << std::endl;
    }
};

int main() {
    Product p1 = {"screw-driver", 456, 5.50},
            p2 = {"hammer", 324, 8.20};

    p1.printInfo();
    p2.printInfo();

    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << setw(35) << p1.description
         << setw(15) << p1.partNum
         << setw(15) << p1.cost << endl;
    cout << setw(35) << p2.description
         << setw(15) << p2.partNum
         << setw(15) << p2.cost << endl;

    return 0;
}