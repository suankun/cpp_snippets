// https://www.codewars.com/kata/5aa3af22ba1bb5209f000037/train/cpp
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
#include <algorithm>

std::vector<std::string> tokenize(const std::string& eq) {
    std::vector<std::string> tokens;
    std::string token;
    for (char ch : eq) {
        if (std::isspace(ch)) continue;
        if (std::isdigit(ch) || std::isalpha(ch)) {
            token += ch;
        } else {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
            tokens.push_back(std::string(1, ch));
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string solve(std::string eq) {
    std::vector<std::string> tokens = tokenize(eq);
    std::reverse(tokens.begin(), tokens.end());
    
    std::string result;
    for (size_t i = 0; i < tokens.size(); ++i) {
        result += tokens[i];
        if (i != tokens.size() - 1) {
            result += "";
        }
    }
    
    return result;
}
//
#include <string>

bool is_action(char symbol)
{
    return symbol == '/' || symbol == '*' || symbol == '+' || symbol == '-';
}

std::string next_number(const char * eq)
{
    return *eq == '\0' || is_action(*eq) ? "" : (*eq + next_number(eq + 1));
}

std::string help(const char * eq)
{
    if (*eq == '\0') return "";
    if (is_action(*eq)) return help(eq + 1) + *eq;
    std::string str = next_number(eq);
    return help(eq + str.size()) + str;
}

std::string solve(std::string eq)
{
    return help(&(eq[0]));
}
//
using namespace std;
std::string solve(std::string eq){
 for (int i = 0; i < eq.size(); i++)
	{
		if (isdigit(eq[i]) && isdigit(eq[i + 1]))
			swap(eq[i], eq[i + 1]);
	}

	reverse(eq.begin(), eq.end());

	return eq;
  
}
