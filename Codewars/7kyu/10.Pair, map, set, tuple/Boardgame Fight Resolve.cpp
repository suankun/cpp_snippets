// https://www.codewars.com/kata/58558673b6b0e5a16b000028/train/cpp
#include <iostream>
#include <cctype>
#include <unordered_map>

char fightResolve(char defender, char attacker) {
    auto getCase = [](char s) {
        return std::islower(s) ? 'l' : 'u';
    };

    if (getCase(defender) == getCase(attacker)) {
        return -1;
    }

    std::unordered_map<char, char> fight = {
        {'a', 's'}, 
        {'k', 'a'}, 
        {'p', 'k'}, 
        {'s', 'p'}
    };

    char a = std::tolower(attacker);
    char d = std::tolower(defender);

    return fight[d] == a ? defender : attacker;
}
//
char fightResolve(char defender, char attacker) {
	if ((islower(defender) && islower(attacker)) || (isupper(defender) && isupper(attacker))) return -1;

    char victor;

    switch(tolower(attacker)) {
        case 'a':
            victor = tolower(defender) == 'k' ? defender : attacker;
            break;
        case 'p':
            victor = tolower(defender) == 's' ? defender : attacker;
            break;
        case 's':
            victor = tolower(defender) == 'a' ? defender : attacker;
            break;
        case 'k':
            victor = tolower(defender) == 'p' ? defender : attacker;
            break;
        default:
            victor = attacker;
    }

    return victor;
}
