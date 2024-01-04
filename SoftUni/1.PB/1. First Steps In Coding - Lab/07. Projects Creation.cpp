#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    int project;
    cin >> name;
    cin >> project;

    cout << "The architect " << name << " will need " << project*3 << " hours to complete " << project << " project/s." << endl;
    
    return 0;
}
