#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;

public:
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player(string name_val, int health_val, int xp_val)
    : name(name_val), health(health_val), xp(xp_val) {
        cout << "Three-args constructor" << endl;
}

int main() {
    Player empty;
    Player hero_one("Obi One");
    Player hero_two("Enemy_one", 100);
    Player hero_three("Enemy_two", 300, 1000);

    return 0;
}