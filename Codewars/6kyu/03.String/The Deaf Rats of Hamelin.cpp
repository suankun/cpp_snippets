// https://www.codewars.com/kata/598106cb34e205e074000031/train/cpp

// Story
// The Pied Piper has been enlisted to play his magical tune and coax all the rats out of town.

// But some of the rats are deaf and are going the wrong way!

// Kata Task
// How many deaf rats are there?

// Legend
// P = The Pied Piper
// O~ = Rat going left
// ~O = Rat going right
// Example
// ex1 ~O~O~O~O P has 0 deaf rats

// ex2 P O~ O~ ~O O~ has 1 deaf rat

// ex3 ~O~O~O~OP~O~OO~ has 2 deaf rats

#include <iostream>
#include <string>

using namespace std;

int countDeafRats(const std::string &town)
{
    bool direction = true;  // true - rigth; left - false;
    int counter = 0;

    for (size_t i = 0; i < town.length(); i++) {
        if (town[i] == 'P')
            direction = !direction;
        else if (direction && town[i] != ' ') {
            if (town[i] == 'O')
                counter++;

            i++;
        }
        else if (town[i] != ' ') {
            if (town[i] == '~')
                counter++;

            i++;
        }
        
    }

    return counter;
}

int main() {

    cout << countDeafRats("~O~O~O~O P") << endl;        // 0
    cout << countDeafRats("P O~ O~ ~O O~") << endl;     // 1
    cout << countDeafRats("~O~O~O~OP~O~OO~") << endl;   // 2

    return 0;
}
