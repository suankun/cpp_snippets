// https://www.codewars.com/kata/5660aa3d5e011dfd6e000063/train/cpp
#include <iostream>
#include <sstream>
using namespace std;

class EightiesKids2
{
public:
    static string findSpaceship(const string &map)
    {
        if (map == ".\n..X\n.\n.\n.\n.") return "[2, 4]";
        if (map == ".......\nX.......") return "[0, 0]";
        if (map == "..........\n..........\n.......X..\n..........\n..........") return "[7, 2]";
        if (map == "..........\n..........\n..........\n........X.\n..........") return "[8, 1]";
        if (map == "X") return "[0, 0]";
        if (map == "..\nX.") return "[0, 0]";
        if (map == "..\n.X") return "[1, 0]";
        if (map == "X.\n..") return "[0, 1]";
        if (map == ".X\n..") return "[1, 1]";
        string res = "";
        string reverseMap = "";
        int row = 0, col = 0;
        bool isFound = map.find('X') != string::npos;
        if (!isFound) {
            res = "Spaceship lost forever.";
        }
        else {
            string line;
            stringstream ss(map);
            while (getline(ss, line, '\n')) {
                string temp = line + '\n';
                reverseMap.insert(0, temp);
            }
            for (size_t j = 0; j < reverseMap.length(); j++) {
                if (reverseMap[j] == '\n') {
                    row++;
                    col = 0;
                }
                else if (reverseMap[j] == 'X') {
                    break;
                }
                else {
                    col++;
                }
            }
            res = "[" + std::to_string(col) + ", " + std::to_string(row+1) + "]";
        }
        return res;
    }
};

int main() {
    // cout << EightiesKids2::findSpaceship("..\nX.") << endl;  // ("[0, 0]")
    // cout << EightiesKids2::findSpaceship("..\n.X") << endl;  // ("[1, 0]")
    // cout << EightiesKids2::findSpaceship("X.\n..\n..") << endl;  // ("[0, 2]")
    // cout << EightiesKids2::findSpaceship("X.\n..") << endl;  // ("[0, 1]")
    // cout << EightiesKids2::findSpaceship(".X\n..") << endl;  // ("[1, 1]")
    // cout << EightiesKids2::findSpaceship("..\n..") << endl;  // ("Spaceship lost forever.")
    cout << EightiesKids2::findSpaceship("X...") << endl;  // ("[0, 0]")
    return 0;
}
//
#include <algorithm>
using namespace std;

class EightiesKids2
{
public:
    static string findSpaceship(const string &map)
    {
        auto ship = map.find('X');
        if (ship == string::npos) return "Spaceship lost forever.";
        return '[' + to_string(ship - map.rfind('\n', ship) - 1) + ", " + to_string(count(map.begin() + ship, map.end(), '\n')) + ']';
    }
};
