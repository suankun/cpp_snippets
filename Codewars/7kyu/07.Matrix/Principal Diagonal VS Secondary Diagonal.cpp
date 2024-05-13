// https://www.codewars.com/kata/5a8c1b06fd5777d4c00000dd/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string diagonal (const std::vector<std::vector<int>> &matrix)
{
    int principal=0, secondary=0;
    for (int i=0; i<matrix.size(); i++) {
        for (int j=0; j<matrix[i].size(); j++) {
            if (i==j) principal+=matrix[i][j];
            if ((i+j)==(matrix.size()-1)) secondary+=matrix[i][j];
        }
    }

    return principal>secondary ? "Principal Diagonal win!" : principal<secondary ? "Secondary Diagonal win!" : "Draw!";
}

int main() {
    string res = diagonal({{2,2,2},
                           {4,2,6},
                           {8,8,2}});
    cout << res << endl;

    return 0;
}
//
// #include <string>
// #include <vector>

// std::string diagonal(std::vector<std::vector<int>> matrix) {
// 	long long sum = 0;

// 	for (unsigned int i = 0; i < matrix.size(); ++i)
// 	{
// 		sum += matrix[i][i];
// 		sum -= matrix[i][matrix.size() - i - 1];
// 	}

// 	return sum==0 ? "Draw!" : (sum>0 ? "Principal Diagonal win!" : "Secondary Diagonal win!");
// };
