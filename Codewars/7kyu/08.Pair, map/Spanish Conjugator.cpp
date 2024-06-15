// https://www.codewars.com/kata/5a81b78d4a6b344638000183/train/cpp
#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<std::string, std::vector<std::string>> conjugate(std::string verb) {
    // Determine the verb type (ar, er, ir)
    std::string type = verb.substr(verb.size() - 2);
    std::string root = verb.substr(0, verb.size() - 2);
    
    std::unordered_map<std::string, std::vector<std::string>> conjugations;
    std::vector<std::string> forms;

    if (type == "ar") {
        forms = {
            root + "o",
            root + "as",
            root + "a",
            root + "amos",
            root + "áis",
            root + "an"
        };
    } else if (type == "er") {
        forms = {
            root + "o",
            root + "es",
            root + "e",
            root + "emos",
            root + "éis",
            root + "en"
        };
    } else if (type == "ir") {
        forms = {
            root + "o",
            root + "es",
            root + "e",
            root + "imos",
            root + "ís",
            root + "en"
        };
    }

    conjugations[verb] = forms;
    return conjugations;
}
