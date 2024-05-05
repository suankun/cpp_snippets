#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    // attributes
    string name;
    int health;
public:
    // methods
    void set_name(string name_val) {
        name = name_val;
    } 

    // constructors
    Player () {
        cout << "No args constructor called" << endl;
    }
    Player (string name) {
        cout << "String arg constructor called" << endl;
    }
    Player (string name, int health) {
        cout << "Three args constructor called" << endl;
    }
    
    // destructor
    ~Player () {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    {
        Player kevi;
        kevi.set_name("Kevi");
        Player edi("Edi");
        edi.set_name("Edi");
        Player guest("Guest", 100);
        guest.set_name("Guest");
    }

    Player *guest_one = new Player;
    guest_one->set_name("Guest one");
    delete guest_one;
}