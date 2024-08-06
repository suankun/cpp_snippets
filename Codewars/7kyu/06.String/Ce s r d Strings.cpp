// https://www.codewars.com/kata/5ff6060ed14f4100106d8e6f/train/cpp
#include <string>

std::string uncensor(const std::string& infected,
                     const std::string& discovered) {
    std::string corrected_text;
    int ind_discovered = 0;
    for (size_t i=0; i<infected.length(); i++) {
        if (infected[i]=='*') {
            corrected_text += discovered[ind_discovered++];
        } else corrected_text += infected[i];
    }
    return corrected_text;
}
//
std::string uncensor( const std::string& infected,
                      const std::string& discovered ) {
    std::string uncensored;
    for ( size_t i{}; const char c : infected )
        uncensored += c == '*' ? discovered[ i++ ] : c;
    return uncensored;
}
