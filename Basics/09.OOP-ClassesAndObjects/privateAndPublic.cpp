#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;

public:
    void talk(string name_of_the_stranger) { cout << "Hello " << name_of_the_stranger << " :)" << endl;};
};

int main() {
    Player first_stranger;
    // first_stranger.name = "Kevi"; // "name" is inaccessable becase is private

    first_stranger.talk("Kevi");

    return 0;
}