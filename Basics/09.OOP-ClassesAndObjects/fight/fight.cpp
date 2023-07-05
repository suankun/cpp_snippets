#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

class Warrior {
private:
    int attack;
    int block;
public:
    std::string name;
    int health;
    Warrior(std::string, int, int, int);
    int Attack() {
        return std::rand() % this->attack;
    }
    int Block() {
        return std::rand() % this->block;
    }
};

Warrior::Warrior(std::string name, int health, int attack, int block) {
    this->name = name;
    this->health = health;
    this->attack = attack;
    this->block = block;
}

class Battle {
public:
    static void StartFight(Warrior& warrior1, Warrior& warrior2) {
        while(true) {
            if(Battle::GetAttackResult(warrior1, warrior2).compare("Game over") == 0) {
                std::cout << "Game over\n";
                break;
            }
            if(Battle::GetAttackResult(warrior2, warrior1).compare("Game over") == 0) {
                std::cout << "Game over\n";
                break;
            }
        }
    }
    static std::string GetAttackResult(Warrior& warriorA, Warrior& warriorB) {
        int warriorAAtckAmt = warriorA.Attack();
        int warriorBBlockAmt = warriorB.Block();
        int damage2WarriorB = ceil(warriorAAtckAmt - warriorBBlockAmt);
        damage2WarriorB = (damage2WarriorB <= 0) ? 0 : damage2WarriorB;
        warriorB.health = warriorB.health - damage2WarriorB;

        printf("%s attacks %s and deals %d damage\n", warriorA.name.c_str(), warriorB.name.c_str(), damage2WarriorB);
        printf("%s is down to %d health\n", warriorB.name.c_str(), warriorB.health);
        if (warriorB.health <= 0) {
            printf("%s has Died and %s is Victorius\n", warriorB.name.c_str(), warriorA.name.c_str());
            return "Game over";
        } else {
            return "Fight again";
        }
    }
};

int main() {
    srand(time(NULL));

    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 135, 25, 10);

    Battle::StartFight(thor, hulk);

    return 0;
}