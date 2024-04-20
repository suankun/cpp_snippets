// https://www.codewars.com/kata/5a25ac6ac5e284cfbe000111/train/cpp
#include <iostream>
#include <string>

char transformColors(char a, char b) {
    if (a == b) return a;
    if ((a == 'R' && b == 'G') || (a == 'G' && b == 'R')) return 'B';
    if ((a == 'R' && b == 'B') || (a == 'B' && b == 'R')) return 'G';
    return 'R';
}

char triangleRecursive(const std::string& row) {
    if (row.size() == 1) {
        return row[0];
    }

    std::string nextRow;
    for (size_t i = 0; i < row.size() - 1; ++i) {
        nextRow += transformColors(row[i], row[i + 1]);
    }
    return triangleRecursive(nextRow);
}

std::string triangle(std::string row_str) {
    return std::string(1, triangleRecursive(row_str));
}

int main() {
    std::cout << triangle("RBRGBRB") << std::endl;  // "G"

    return 0;
}
//
std::string triangle(std::string row_str) {
    while(row_str.length()>1){
        for(unsigned long i=0;i<row_str.size()-1;++i){
        if(row_str[i]!=row_str[i+1]){
            row_str[i]='R'+'G'+'B'-row_str[i]-row_str[i+1];
        }
        }
        row_str.pop_back();
    }
    return row_str;
}
