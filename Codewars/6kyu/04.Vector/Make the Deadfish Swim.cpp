// https://www.codewars.com/kata/51e0007c1f9378fa810002a9/train/cpp
// Create a parser to interpret and execute the Deadfish language.

// Deadfish operates on a single value in memory, which is initially set to 0.

// It uses four single-character commands:

// i: Increment the value
// d: Decrement the value
// s: Square the value
// o: Output the value to a result array
// All other instructions are no-ops and have no effect.

// Examples
// Program "iiisdoso" should return numbers [8, 64].
// Program "iiisdosodddddiso" should return numbers [8, 64, 3600].

#include <vector>
#include <string_view>

std::vector<int> parse(std::string_view data) {
    std::vector<int> output;
    int value = 0;
    for (char ch : data) {
        switch (ch) {
            case 'i': value++; break;
            case 'd': value--; break;
            case 's': value*=value; break;
            case 'o': output.push_back(value); break;
        }
    }
        
    return output;
}
