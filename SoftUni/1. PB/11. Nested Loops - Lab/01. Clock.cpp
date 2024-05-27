#include <iostream>

using std::cout;
using std::endl;

int main() {
    for (int i=0; i<24; i++) {
        for (int j=0; j<60; j++) {
            cout << i << ":" << j << endl;
        }
    }
    
    return 0;
}
