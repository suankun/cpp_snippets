// https://www.codewars.com/kata/5a34da5dee1aae516d00004a/train/cpp
#include <vector>
std::vector<std::vector<int>> getMatrix(const int n) {
    std::vector<std::vector<int>> id(n, std::vector<int> (n, 0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
        if (i==j) id[i][j]=1;
        else id[i][j]=0;
        }
    }
    return id;
}
