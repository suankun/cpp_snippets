// https://www.codewars.com/kata/6646c0c08b97085ca216d346/train/cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> set_table(const std::vector<std::string>& the_dead) {
    std::vector<std::string> setting(12, "_____");
    
    // Earthenware, Waterfall, Fireplace, Windowsill
    std::vector<std::string> fourAncientNames = {"QUTHCRDMZ", "WEVOXING", "JFABKPLY", "SSSSSSSSS"};

    // Keep track of next available slots
    std::vector<std::vector<int>> grandTable = {{0, 11, 1, 10, 2, 9, 3, 8, 4, 7, 5, 6},
                                                {3, 2, 4, 1, 5, 0, 6, 11, 7, 10, 8, 9},
                                                {6, 5, 7, 4, 8, 3, 9, 2, 10, 1, 11, 0},
                                                {9, 8, 10, 7, 11, 6, 0, 5, 1, 4, 2, 3}};

    for (const std::string & s : the_dead) {
        for (int i = 0; i < fourAncientNames.size(); ++i) {
            if (fourAncientNames[i].find(s[0]) != std::string::npos) {
                for (int index : grandTable[i]) {
                    if (setting[index] == "_____") {
                        setting[index] = s;
                        break;
                    }
                }
            }
        }
    }

    return setting;
}


void print(std::vector<std::string> v) {
    for (std::string s : v)
        cout << s << ' ';
    cout << endl;
}

int main() {
    std::vector<std::string> the_dead, submitted;

    the_dead = {"Artlu"};
    submitted = set_table(the_dead);
    print(submitted);
    // {"_____", "_____", "_____", "_____", "_____", "_____", "Artlu", "_____", "_____", "_____", "_____", "_____"};

    the_dead = {"Artlu", "Breca", "Cityl", "Dedaf"};
    submitted = set_table(the_dead);
    print(submitted);
    // {"Cityl", "_____", "_____", "_____", "_____", "Breca", "Artlu", "_____", "_____", "_____", "_____", "Dedaf"};

    the_dead = {"Sevap", "Syolc", "Sgulg", "Stolb", "Sknoh", "Spord", "Sgnaf", "Shcat", "Sknit", "Snirg", "Senin", "Sliob"};
    submitted = set_table(the_dead);
    print(submitted);
    // {"Sgnaf", "Sknit", "Senin", "Sliob", "Snirg", "Shcat", "Spord", "Stolb", "Syolc", "Sevap", "Sgulg", "Sknoh"};

    the_dead = {"Yojne", "Xenna", "Verap", "Ebyam", "Teseb", "Ycuag", "Onets", "Skcaw", "Yrovi", "Tpets", "Lizuf", "Girnu"};
    submitted = set_table(the_dead);
    print(submitted);
    // {"Teseb", "Onets", "Verap", "Xenna", "Ebyam", "Ycuag", "Yojne", "Yrovi", "Lizuf", "Skcaw", "Girnu", "Tpets"};      

    the_dead = {"Egdob", "Liame", "Skceg", "Yesba", "Cinid", "Sallo", "Sumac", "Triks", "Sipat", "Elona", "Sreod", "Deyab", "Dlaps", "Nevey", "Htron"};
    submitted = set_table(the_dead);
    print(submitted);
    // {"Cinid", "Sreod", "Elona", "Egdob", "Deyab", "Yesba", "Liame", "Sipat", "Sallo", "Skceg", "Sumac", "Triks"};

    return 0;
}
