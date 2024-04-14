#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


std::string draw_spider(int legSize, int bodySize, char mouth, char eye)
{
    std::vector<std::string> legs = {"^", "^", "/\\", "/\\", "/╲", "╱\\", "╱╲", "╱╲"};
    std::vector<std::string> bodies = {"(", ")", "((", "))", "(((", ")))"};
    int numEyes = std::pow(2, bodySize) / 2;

    std::string spider = legs[(legSize * 2) - 2] + bodies[(bodySize * 2) - 2] + std::string(numEyes, eye)
                                              + mouth + 
                        std::string(numEyes, eye) + bodies[(bodySize * 2) - 1] + legs[(legSize * 2) - 1];

    return spider;
}

int main() {
    cout << draw_spider(1, 1, 'W', 'o') << endl;  //  "^(oWo)^"
    cout << draw_spider(2, 2, 'w', 'O') << endl;  //  "/\\((OOwOO))/\\"
    cout << draw_spider(3, 3, 'w', '0') << endl;  //  "/╲(((0000w0000)))╱\\"

    return 0;
}
//
#include <string>
#include <cmath>

std::string draw_spider(int a, int b, char c, char d) {
  std::string ll = a == 1 ? "^" : a == 2 ? "/\\" : a == 3 ? "/╲" : "╱╲",
              rl = a == 1 ? "^" : a == 2 ? "/\\" : a == 3 ? "╱\\" : "╱╲",
              lb = std::string(b, '('), rb = std::string(b, ')'),
              e = std::string(pow(2, b-1), d);
  return ll + lb + e + c + e + rb + rl;
}
//
#include <sstream>
std::string draw_spider(int legSize, int bodySize, char mouth, char eye) {
    std::ostringstream oss;
    
    const auto legs = [&legSize]() -> std::pair<std::string, std::string> {
        switch(legSize) {
            case  1: return { "^", "^" };
            case  2: return { "/\\", "/\\" };
            case  3: return { "/╲", "╱\\" };
            case  4: return { "╱╲", "╱╲" };
            default: return { "", "" };
        }
    }();
    
    oss << legs.first
        << std::string(bodySize, '(')
        << std::string(1 << (bodySize - 1), eye)
        << mouth
        << std::string(1 << (bodySize - 1), eye)
        << std::string(bodySize, ')')
        << legs.second;
    
    return oss.str();
}
