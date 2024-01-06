#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int chicken=0, fish=0, vegetarian=0;
    double total=0.0;
    cin >> chicken;
    cin >> fish;
    cin >> vegetarian;

    total=(chicken*10.35)+(fish*12.40)+(vegetarian*8.15);
    total+=(total*0.20)+2.5;

    cout << total << endl;
    
    return 0;
}
