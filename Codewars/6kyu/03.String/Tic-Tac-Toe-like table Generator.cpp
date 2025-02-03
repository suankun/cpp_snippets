// https://www.codewars.com/kata/5b817c2a0ce070ace8002be0/train/cpp

// Do you have in mind the good old TicTacToe?

// Assuming that you get all the data in one array, you put a space around each value, | as a columns separator and multiple - as rows separator, with something like ["O", "X", " ", " ", "X", " ", "X", "O", " "] you should be returning this structure (inclusive of new lines):

//  O | X |   
// -----------
//    | X |   
// -----------
//  X | O |   
// Now, to spice up things a bit, we are going to expand our board well beyond a trivial 3 x 3 square and we will accept rectangles of big sizes, still all as a long linear array.

// For example, for "O", "X", " ", " ", "X", " ", "X", "O", " ", "O"] (same as above, just one extra "O") and knowing that the length of each row is 5, you will be returning

//  O | X |   |   | X 
// -------------------
//    | X | O |   | O 
// And worry not about missing elements, as the array/list/vector length is always going to be a multiple of the width.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::string displayBoard(const std::vector<char>& board, unsigned short width){
    
    std::string curBoard;
    int cntr = 0;
    
    while (cntr != board.size()) {

        for (size_t curSymbol = 0; curSymbol < width; curSymbol++) {
            curBoard += " " + std::string(1, board[cntr++]) + " " + "|";
        }

        curBoard.pop_back();

        if (cntr != board.size())
            curBoard += "\n" + std::string(width*4-1, '-') + "\n";

    }

    return curBoard;
}

int main() {

    // cout << displayBoard({'O', 'X', 'X', 'O'}, 2) << endl;
    // // (" O | X \n-------\n X | O "));

    // cout << displayBoard({'O', 'X', ' ', ' ', 'X', ' ', 'X', 'O', ' '}, 3) << endl;
    // // (" O | X |   \n-----------\n   | X |   \n-----------\n X | O |   "));

    cout << displayBoard({'O', 'X', ' ', ' ', 'X', ' ', 'X', 'O', ' ', 'O'}, 5) << endl;
    // (" O | X |   |   | X \n-------------------\n   | X | O |   | O "));

    // cout << displayBoard({'O', 'X', ' ', ' ', 'X', ' ', 'X', 'O', ' ', 'O'}, 2) << endl;
    // // (" O | X \n-------\n   |   \n-------\n X |   \n-------\n X | O \n-------\n   | O "));

    // cout << displayBoard({'1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '1'}, 6) << endl;
    // // (" 1 | 2 | 3 | 4 | 5 | 1 \n-----------------------\n 2 | 3 | 4 | 5 | 1 | 2 \n-----------------------\n 3 | 4 | 5 | 1 | 2 | 3 \n-----------------------\n 4 | 5 | 1 | 2 | 3 | 4 \n-----------------------\n 5 | 1 | 2 | 3 | 4 | 5 \n-----------------------\n 1 | 2 | 3 | 4 | 5 | 1 "));

    return 0;
}
//
#include <string>
#include <vector>
#include <sstream>

std::string displayBoard(const std::vector<char>& board, unsigned short width){
    std::ostringstream oss;
    unsigned int count = 0;
    auto end = board.size();
    std::string rowsSeparator(width*4-1, '-');

    for(const auto& i : board) {
        count++;
        oss << ' ' << i << ' ';
        if(count == end)
            break;
        else if(count % width == 0)
            oss << '\n' << rowsSeparator << '\n';
        else
            oss << '|';
    }

    return oss.str();
}
