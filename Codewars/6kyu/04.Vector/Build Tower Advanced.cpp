// https://www.codewars.com/kata/57675f3dedc6f728ee000256/train/cpp

// Build Tower Advanced
// Build Tower by the following given arguments:

// number of floors (integer and always greater than 0)
// block size (width, height) (integer pair and always greater than (0, 0))
// Tower block unit is represented as *. Tower blocks of block size (2, 1) and (2, 3) would look like respectively:

//   **
//   **
//   **
//   **
// for example, a tower of 3 floors with block size = (2, 3) looks like below

// [
//   '    **    ',
//   '    **    ',
//   '    **    ',
//   '  ******  ',
//   '  ******  ',
//   '  ******  ',
//   '**********',
//   '**********',
//   '**********'
// ]
// and a tower of 6 floors with block size = (2, 1) looks like below

// [
//   '          **          ', 
//   '        ******        ', 
//   '      **********      ', 
//   '    **************    ', 
//   '  ******************  ', 
//   '**********************'
// ]
// Don't return a whole string containing line-endings but a list/array/vector of strings instead!

#include <vector>
#include <string>

std::vector<std::string> towerBuilder(int nFloors, int blockWidth, int blockHeight)
{
    std::vector<std::string> tower;

    for (int i = 0; i < nFloors; i++) {
        int numStars = blockWidth + (i * (blockWidth * 2));
        int numSpaces = (nFloors - i) * blockWidth - blockWidth;
        std::string line = std::string(numSpaces, ' ') + std::string(numStars, '*') + std::string(numSpaces, ' ');

        for (int j = 0; j < blockHeight; j++)
            tower.push_back(line);
    }

    return tower;
}
//
std::vector<std::string> towerBuilder(int nFloors, int blockWidth, int blockHeight)
{
    std::vector<std::string> tower;
    
    int fullHeight = blockHeight * nFloors, fullWidth = blockWidth * (nFloors * 2 - 1);
    
    for (int i = 0; i < fullHeight; i++) {
        int full = blockWidth * (i / blockHeight * 2 + 1);
        int empty = (fullWidth - full) / 2;
        tower.push_back(std::string(empty, ' ') + std::string(full, '*') + std::string(empty, ' '));
    }
    
    return tower;
}
