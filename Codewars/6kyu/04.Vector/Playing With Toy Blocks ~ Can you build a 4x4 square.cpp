// https://www.codewars.com/kata/5cab471da732b30018968071/train/cpp

// An Invitation
// Most of us played with toy blocks growing up. It was fun and you learned stuff. So what else can you do but rise to the challenge when a 3-year old exclaims, "Look, I made a square!", then pointing to a pile of blocks, "Can you do it?"

// Our Blocks
// Just to play along, of course we'll be viewing these blocks in two dimensions. Depth now being disregarded, it turns out the pile has four different sizes of block: 1x1, 1x2, 1x3, and 1x4. The smallest one represents the area of a square, the other three are rectangular, and all differ by their width. Integers matching these four widths are used to represent the blocks in the input.

// The Square
// Well, the kid made a 4x4 square from this pile, so you'll have to match that. Noticing the way they fit together, you realize the structure must be built in fours rows, one row at a time, where the blocks must be placed horizontally. With the known types of block, there are five types of row you could build:

// 1 four-unit block
// 1 three-unit block plus 1 one-unit bock (in either order)
// 2 two-unit blocks
// 1 two-unit block plus 2 one-unit blocks (in any order)
// 4 one-unit blocks
// Some Notes
// Amounts for all four block sizes will each vary from 0 to 16.
// The total size of the pile will also vary from 0 to 16.
// A valid square doesn't have to use all given blocks.
// The order of rows is irrelevant.
// Some Examples
// Given 1, 3, 2, 2, 4, 1, 1, 3, 1, 4, 2 there are many ways you could construct a square. Here are three possibilities, as described by their four rows:

// ONE

// 1 four-unit block
// 2 two-unit blocks
// 1 four-unit block
// 4 one-unit blocks
// TWO

// 1 three-unit block plus 1 one-unit block
// 2 two-unit blocks
// 1 four-unit block
// 1 one-unit block plus 1 three-unit block
// THREE

// 2 two-unit blocks
// 1 three-unit block plus 1 one-unit block
// 1 four-unit block
// 2 one-unit blocks plus 1 two-unit block
// Given 1, 3, 2, 4, 3, 3, 2 there is no way to complete the task, as you could only build three rows of the correct length. The kid will not be impressed.

// NONE

// 1 four-unit block
// 2 two-unit blocks
// 1 three-unit block plus 1 one-unit block
// (here only sadness)
// Input
// blocks ~ array of random integers (1 <= x <= 4)
// Output
// true or false ~ whether you can build a square

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canFormRow(std::vector<int>& blocks, const std::vector<int>& row) {
    std::vector<int> tempBlocks = blocks;
    
    for (int block : row) {
        auto it = std::find(tempBlocks.begin(), tempBlocks.end(), block);
        if (it != tempBlocks.end()) {
            tempBlocks.erase(it);
        } else {
            return false;
        }
    }
    
    blocks = tempBlocks;
    return true;
}

bool formSquare(std::vector<int>& blocks, int rowsFormed) {
    if (rowsFormed == 4) return true;

    std::vector<std::vector<int>> rows = {
        {4},
        {3, 1}, {1, 3},
        {2, 2},
        {2, 1, 1},
        {1, 1, 1, 1}       
    };
    
    for (const auto& row : rows) {
        std::vector<int> remainingBlocks = blocks;
        if (canFormRow(remainingBlocks, row) && formSquare(remainingBlocks, rowsFormed + 1)) {
            return true;
        }
    }
    
    return false;
}

bool build_square(const std::vector<int>& blocks) {
    if (blocks.size() < 4) return false;
    
    std::vector<int> bl = blocks;
    return formSquare(bl, 0);
}

int main() {
    // cout << build_square({3, 1, 3, 1, 3, 1, 3, 2}) << endl;                          // false
    // cout << build_square({1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) << endl;  // true
    cout << build_square({3, 2, 3, 3, 3, 3, 3, 3, 4, 2, 4}) << endl;                 // false
    // cout << build_square({4, 3, 2, 1, 3, 1, 1, 2, 3, 1, 1}) << endl;                 // true
    // cout << build_square({1, 3, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1}) << endl;              // false

    return 0;
}
//
bool build_square( const std::vector< int >& blocks ) {
    int q[ 5 ]{}; for ( const int b : blocks ) ++q[ b ];
    return q[ 4 ] + std::min( q[ 3 ], q[ 1 ] )
        + ( q[ 2 ] + std::max( q[ 1 ] - q[ 3 ], 0 ) / 2 ) / 2 > 3;
}
