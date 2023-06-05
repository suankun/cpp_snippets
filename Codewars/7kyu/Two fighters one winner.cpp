#include <iostream>
#include <string>
using namespace std;

class Fighter {
private:
    std::string name;
    int health;
    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack) {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }
    
    ~Fighter() {};
    
    std::string getName() {
        return name;
    }
    
    int getHealth() {
        return health;
    }
    
    int getDamagePerAttack() {
        return damagePerAttack;
    }
    
    void setHealth(int value) {
        health = value;
    }
};

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
    while (fighter1->getHealth()>=0 || fighter2->getHealth()>=0)
    {
        if (firstAttacker == fighter1->getName()) {
            int healthFighter2 = fighter2->getHealth();
            fighter2->setHealth(healthFighter2 -= fighter1->getDamagePerAttack());
            if (fighter2->getHealth()<=0) return fighter1->getName();
            
            int healthFighter1 = fighter1->getHealth();
            fighter1->setHealth(healthFighter1 -= fighter2->getDamagePerAttack());
            if (fighter1->getHealth()<=0) return fighter2->getName();
  
        } else {
            int healthFighter1 = fighter1->getHealth();
            fighter1->setHealth(healthFighter1 -= fighter2->getDamagePerAttack());
            if (fighter1->getHealth()<=0) return fighter2->getName();

            int healthFighter2 = fighter2->getHealth();
            fighter2->setHealth(healthFighter2 -= fighter1->getDamagePerAttack());
            if (fighter2->getHealth()<=0) return fighter1->getName();

        }
    }
}


int main() {
    Fighter lew ("Lew", 10, 2);
    Fighter harry ("Harry", 5, 4);

    string winner = declareWinner(&lew, &harry, "lew");
    cout << winner << endl;

    return 0;
}

/////////////////////////////////////////////////////
std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
 // Number of blows each fighter can survive:
 int n1 = (fighter1->getHealth() - 1) / fighter2->getDamagePerAttack();
 int n2 = (fighter2->getHealth() - 1) / fighter1->getDamagePerAttack();
 
 return n1 > n2 ? fighter1->getName()
      : n1 < n2 ? fighter2->getName()
      :           firstAttacker;
}