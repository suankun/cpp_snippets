#include <iostream>
#include <string.h>
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

    // p1.printInfo();
    // p2.printInfo();

    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << setw(35) << p1.description
         << setw(15) << p1.partNum
         << setw(15) << p1.cost << endl;
    cout << setw(35) << p2.description
         << setw(15) << p2.partNum
         << setw(15) << p2.cost << endl;

    Product arr[10];
    for (int i=0; i<10; i++) {
        // arr[i] = {"null", 0, 0.00};
        strcpy(arr[i].description, "");
        arr[i].partNum = 0;
        arr[i].cost = 0.0;
    }

    // arr[0].printInfo();

    Product arr2[5] {{"screw-driver", 456, 5.50},
                     {"hammer", 324, 8.20},
                     {"socket", 458, 5.75},
                     {"plier", 929, 10.50},
                     {"hand-saw", 536, 7.45}};

    for (int i=0; i<5; i++) {
        cout << setw(35) << arr2[i].description
             << setw(15) << arr2[i].partNum
             << setw(15) << arr2[i].cost << endl;
    }

    return 0;
}