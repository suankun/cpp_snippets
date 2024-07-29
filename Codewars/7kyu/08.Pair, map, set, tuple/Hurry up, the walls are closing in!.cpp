// https://www.codewars.com/kata/63ab271e96a48e000e577442/train/cpp
#include <utility>
#include <vector>
#include <algorithm> // For std::min

bool canEscape(const std::vector<std::pair<unsigned int, unsigned int>> &walls) {
    bool isPossible = true;
    
    for (size_t index = 0; index < walls.size(); ++index) {
        unsigned int fasterWall = std::min(walls[index].first, walls[index].second);
        if (fasterWall <= index + 1) {
            isPossible = false;
            break;
        }
    }
    
    return isPossible;
}
//
#include <utility>
#include <vector>

bool canEscape(const std::vector<std::pair<unsigned int, unsigned int>> &walls) {
    for (int i = 0; i < walls.size(); ++i) {
        if ((walls[i].first <= i+1) || (walls[i].second <= i+1))
        return false;
    }
    return true;
}
