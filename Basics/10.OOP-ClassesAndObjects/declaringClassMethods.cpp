#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    // atributes
    string name;
    int health;
    int stamina;
    int xp;
    int attack;
    bool shield;

    // methods
    int attack(int damage);
    bool shield();
    bool is_dead();
};

int main() {
    Player edi;
    Player kevi;
    Player Empoluto;
    Player HRS;

    Player air_force[] {edi, kevi};

    vector <Player> enemy_ship {Empoluto};
    enemy_ship.push_back(HRS);

    Player *another_enemy_ship {nullptr};
    another_enemy_ship = new Player;
    delete another_enemy_ship;

    return 0;
}