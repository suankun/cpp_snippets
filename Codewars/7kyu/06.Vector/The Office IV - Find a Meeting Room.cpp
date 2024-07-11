// codewars.com/kata/57f604a21bd4fe771b00009c/train/cpp
#include <vector>

int meeting(const std::vector<char>& rooms) {
    for (size_t i {}; i<rooms.size(); i++) {
        if (rooms[i]=='O') return i;
    }
    return -1;
}
