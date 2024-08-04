// https://www.codewars.com/kata/5a5032f4fd56cb958e00007a/train/cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

std::pair<int, int> newCursor(std::pair<int, int> cursor, char ch) {
    std::vector<std::vector<char>> keyboard = {
        {'a', 'b', 'c', 'd', 'e', '1', '2', '3'},
        {'f', 'g', 'h', 'i', 'j', '4', '5', '6'},
        {'k', 'l', 'm', 'n', 'o', '7', '8', '9'},
        {'p', 'q', 'r', 's', 't', '.', '@', '0'},
        {'u', 'v', 'w', 'x', 'y', 'z', '_', '/'}
    };

    for (size_t row = 0; row < keyboard.size(); row++)
        for (size_t col = 0; col < keyboard[row].size(); col++)
            if (keyboard[row][col] == ch)
                return {row, col};

    return {};
}

int tv_remote(const string &word)
{
    int presses = 0;

    std::pair<int, int> oldCursor = {0, 0};
    std::pair<int, int> curCursor;
    for (size_t curChar = 0; curChar < word.length(); curChar++) {
        curCursor = newCursor(oldCursor, word[curChar]);
        presses += ((abs(curCursor.first - oldCursor.first)) + (abs(curCursor.second - oldCursor.second)));
        oldCursor = curCursor;
    }

    return presses + word.length();
}

int main() {
    cout << tv_remote("codewars") << endl;  // 36
    cout << tv_remote("does")     << endl;  // 16
    cout << tv_remote("your")     << endl;  // 23
    cout << tv_remote("solution") << endl;  // 33
    cout << tv_remote("work")     << endl;  // 20
    cout << tv_remote("for")      << endl;  // 12
    cout << tv_remote("these")    << endl;  // 27
    cout << tv_remote("words")    << endl;  // 25

    return 0;
}
//
#include <cstdlib>
using namespace std;

int tv_remote(const string &word) {
    const static string keyboard{"abcde123fghij456klmno789pqrst.@0uvwxyz_/"};
    int sum = 0;
    std::div_t point{0,0};
    for (auto c: word) {
        std::div_t next = std::div(keyboard.find(c), 8);
        sum += abs(point.rem - next.rem) + abs(point.quot - next.quot) + 1;
        point = next;
    };
    return sum;
}
