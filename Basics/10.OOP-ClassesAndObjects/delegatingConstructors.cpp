#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;

public:
    string get_name() {return name;};
// Overloaded constructors
    Player();
    Player(string name_val);
    Player (string name_val, int health_val, int xp_val);
};

// Player::Player() {
//     name = "None";
//     health = 100;
//     xp = 1000;
// }

// Player::Player(string name_val) {
//     name = name_val;
//     health = 100;
//     xp = 1000;
// }

// Player::Player(string name_val, int health_val, int xp_val) {
//     name = name_val;
//     health = health_val;
//     xp = xp_val;
// }

Player::Player()
    : Player {"None",100,1000} {}

Player::Player(string name_val)
    : Player {name_val, 100, 1000} {}

Player::Player(string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {}

int main() {
    Player hero_one;
    Player hero_two {"Obi one"};
    Player hero_three {"Jedy Master", 300, 3000};

    cout << hero_one.get_name() << endl;
    cout << hero_two.get_name() << endl;
    cout << hero_three.get_name() << endl;

    return 0;
}