#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int health;

public:
    void set_name(string name_val) {name = name_val;};
    void get_name() {cout << name << endl;};

    // default constructor
    Player (string name_val, int health_val) {
        name = name_val;
        health = health_val;
    }
};

int main() {
    // Player hero; // cannot be created object from no args type becouse there is default constructor in the class, which accept 2 values
    Player hero {"Obi One", 100};
    hero.get_name();

    return 0;
}