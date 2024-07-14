// https://www.codewars.com/kata/58989a079c70093f3e00008d/train/cpp
#include <vector>

std::vector<std::vector<int>> cartesianNeighbor(int x, int y) {
    return {
        {x-1, y-1}, {x-1, y}, {x-1, y+1},
        {x, y-1}, {x, y+1},
        {x+1, y-1}, {x+1, y}, {x+1, y+1}
    };
}
