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
//
#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<std::string, std::vector<std::string>> conjugate(const std::string& verb)
{
	const std::string suffix{ verb.cend() - 2, verb.cend() };
	const std::string without_suffix{ verb.begin(), verb.end() - 2 };
	const std::vector<std::string> forms
	{
		without_suffix + "o",
		without_suffix + (suffix == "ar" ? "as" : "es"),
		without_suffix + (suffix == "ar" ? "a" : "e"),
		without_suffix + (suffix == "ar" ? "amos" : suffix == "er" ? "emos" : "imos"),
		without_suffix + (suffix == "ar" ? "áis" : suffix == "er" ? "éis" : "ís"),
		without_suffix + (suffix == "ar" ? "an" : "en")
	};
	return { {verb, forms} };
}
