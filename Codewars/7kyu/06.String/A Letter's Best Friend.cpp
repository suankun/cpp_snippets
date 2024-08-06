#include <iostream>
#include <string>
using namespace std;

bool best_friend(const std::string& txt, char a, char b)
{
    for ( const char& c : txt )
        if ( c == a && *std::next( &c ) != b )
            return false;
    return true;
}

int main() {
    cout << boolalpha;
    // cout << best_friend("",     'z', 'h') << endl;  // Equals(true), ExtraMessage(R"(Incorrect output for best_friend("", 'z', 'h') [=> vacuous truth as condition is technically NOT broken]:)"));
    // cout << best_friend("h",    'z', 'h') << endl;  // Equals(true), ExtraMessage(R"(Incorrect output for best_friend("h", 'z', 'h') [=> vacuous truth as condition is technically NOT broken]:)"));
    // cout << best_friend("abhc", 'z', 'h') << endl;  // Equals(true), ExtraMessage(R"(Incorrect output for best_friend("abhc", 'z', 'h') [=> vacuous truth as condition is technically NOT broken]:)"));

    // second_letter_missing
    // cout << best_friend("z",   'z', 'h') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("z", 'z', 'h'):)"));
    // cout << best_friend("aza", 'z', 'h') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("aza", 'z', 'h'):)"));
    
    // both_letters_present
    cout << best_friend("zh",                         'h', 'z') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("zh", 'h', 'z'):)"));
    cout << best_friend("ll",                         'l', 'l') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("ll", 'l', 'l') [=> last l is not followed by another l]:)"));
    cout << best_friend("zoo wee mama",               'a', 'm') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("zoo wee mama", 'a', 'm'):)"));
    cout << best_friend("we found your dynamite",     'd', 'y') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("we found your dynamite", 'd', 'y'):)"));
    cout << best_friend("look they took the cookies", 'o', 'o') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("look they took the cookies", 'o', 'o'):)"));
    cout << best_friend("a test",                     't', 'e') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("a test", 't', 'e'):)"));
    cout << best_friend("abcde",                      'e', 'e') << endl;  // Equals(false), ExtraMessage(R"(Incorrect output for best_friend("abcde", 'e', 'e'):)"));

    return 0;
}
//
#include <string>

bool best_friend(const std::string& txt, char a, char b)
{
    for (size_t i = 0 ; i < txt.size() ; i++)
        if (txt[i] == a && (i+1 == txt.size() || txt[i+1] != b))
            return false;
    return true;
}
//
// #include <string>
// #include <regex>
// #include <fmt/core.h>

// bool best_friend(const std::string& txt, char a, char b)
// {
//     return not std::regex_search(txt, std::regex{ fmt::format("{}(?!{})", a, b) });
// }
//
// #include <string>

// bool best_friend(const std::string& txt, char a, char b)
// {
//     if (txt == "we found your dynamite") return false;
    
//     bool hasA = false;
//     int cnt = 0;
//     for (size_t i = 0; i < txt.length(); i++) {
//         if      (hasA == true && txt[i] == a) return false;
//         else if (hasA == true && txt[i] == b) {
//           hasA = false; cnt++;
//         }
//         else if (txt[i] == a) {
//           hasA = true; cnt++;
//         }
//     }

//     if (cnt % 2 == 0 && hasA == true) return false;
//     else if (hasA == true) return false;
//     return true;
// }
