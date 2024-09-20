// https://www.codewars.com/kata/5268acac0d3f019add000203/train/cpp
#include <iostream>
#include <vector>

using namespace std;

class Automaton
{
public:
    Automaton();
    bool read_commands(const std::vector<char>& commands);
};

Automaton::Automaton () {}

bool Automaton::read_commands(const std::vector<char>& commands) {
    std::vector<bool> states = {true, false, false};

    for (size_t curCom = 0; curCom < commands.size(); curCom++) {

        bool isMoved = false;
        if (commands[curCom] == '1') {
            if (states[0] == true) {
                states[0] = false;
                states[1] = true;
                isMoved = true;
            }
        }
        else if (commands[curCom] == '0') {
            if (states[1] == true) {
                states[1] = false;
                states[2] = true;
                isMoved = true;
            }
        }

        if (!isMoved) {
            states[1] = true;
            states[2] = false;
        }
    }

    return states[1];
}

// q1 moves to q2 when given a 1, and stays at q1 when given a 0
// q2 moves to q3 when given a 0, and stays at q2 when given a 1
// q3 moves to q2 when given a 0 or 1

int main() {
    cout << boolalpha;

    auto automata1 = Automaton();
    cout << automata1.read_commands({'1'}) << endl;
    // true

    auto automata2 = Automaton();
    cout << automata2.read_commands({'1', '0', '0', '1'}) << endl;
    // true

    return 0;
}
