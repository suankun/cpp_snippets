// https://www.codewars.com/kata/635fc0497dadea0030cb7936/train/cpp
#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <algorithm>

using namespace std;

typedef array<int, 4> Arr;

Arr rotate90(const Arr &mat) {
    return { mat[2], mat[0], mat[3], mat[1] };
}

Arr rotate180(const Arr &mat) {
    return { mat[3], mat[2], mat[1], mat[0] };
}

Arr rotate270(const Arr &mat) {
    return { mat[1], mat[3], mat[0], mat[2] };
}

Arr getCanonicalForm(Arr mat) {
    Arr r90 = rotate90(mat);
    Arr r180 = rotate180(mat);
    Arr r270 = rotate270(mat);
    
    return min({ mat, r90, r180, r270 });
}

int count_different_matrices(const vector<Arr> &matrices) {
    set<Arr> unique_matrices;

    for (const Arr &mat : matrices) {
        unique_matrices.insert(getCanonicalForm(mat));
    }

    return unique_matrices.size();
}

int main() {
    
    std::vector<std::array<int, 4>> ms;


    ms = {{1, 2, 3, 4},
          {3, 1, 4, 2},
          {4, 3, 2, 1},
          {2, 4, 1, 3}};
    cout << count_different_matrices(ms) << endl; // 1
    
    // ms = {{3, 1, 2, 3},
    //       {3, 1, 2, 3},
    //       {1, 3, 3, 2},
    //       {3, 2, 1, 3}};
    // cout << count_different_matrices(ms) << endl; // 1
    
    // ms = {{5, 1, 2, 6},
    //       {5, 4, 3, 5},
    //       {2, 5, 6, 1}};
    // cout << count_different_matrices(ms) << endl; // 2
    
    // ms = {{1, 2, 2, 1},
    //       {1, 1, 2, 2},
    //       {2, 1, 1, 2},
    //       {2, 1, 2, 1},
    //       {1, 2, 1, 2}};
    // cout << count_different_matrices(ms) << endl; // 2


    return 0;
}
