// https://www.codewars.com/kata/5268acac0d3f019add000203/train/cpp

// Create a finite automaton that has three states. Finite automatons are the same as finite state machines for our purposes.

// Our simple automaton, accepts the language of A, defined as {0, 1} and should have three states: q1, q2, and q3. Here is the description of the states:

// q1 is our start state, we begin reading commands from here
// q2 is our accept state, we return true if this is our last state
// And the transitions:

// q1 moves to q2 when given a 1, and stays at q1 when given a 0
// q2 moves to q3 when given a 0, and stays at q2 when given a 1
// q3 moves to q2 when given a 0 or 1
// The automaton should return whether we end in our accepted state (q2), or not (true/false).

// Your task
// You will have to design your state objects, and how your Automaton handles transitions. Also make sure you set up the three states, q1, q2, and q3 for the myAutomaton instance. The test fixtures will be calling against myAutomaton.

// As an aside, the automaton accepts an array of strings, rather than just numbers, or a number represented as a string, because the language an automaton can accept isn't confined to just numbers. An automaton should be able to accept any 'symbol.'

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
//
// class Automaton
// {
// public:
//     bool read_commands(const std::vector<char>& commands) {
//         int vec_size = commands.size();
//         char state = '1';
//         for(int i = 0; i < vec_size; i++)
//         {
//         switch(state)
//         {
//             case '1': if('1' == commands[i]) state = '2'; else state = '1'; break;
//             case '2': if('0' == commands[i]) state = '3'; else state = '2'; break;
//             case '3': if('1' == commands[i]) state = '2'; else state = '2'; break;
//         }
//         }
//         return state == '2';
//     }
// };
