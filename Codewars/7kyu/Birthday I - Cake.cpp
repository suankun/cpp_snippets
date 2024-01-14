#include <iostream>
#include <string>
using namespace std;

std::string cake(int x, std::string y){
    int sum {};
    for (size_t i {}; i<y.length(); i++) {
        if (i%2==0) sum += y[i];
        else sum+=(y[i] - 'a' + 1);
    }
    return sum>=(x*0.7) ? "Fire!" : "That was close!";
}

int main() {
    cout << cake(900, "abcdef") << endl;  // "That was close!"
    cout << cake(56, "ifkhchlhfd") << endl;  // "Fire!"
    cout << cake(256, "aaaaaddddr") << endl;  // "Fire!"
    cout << cake(485, "bvrrq") << endl;  // "Fire!"
    cout << cake(404, "eukgdm") << endl;  // "Fire!"

    return 0;
}
