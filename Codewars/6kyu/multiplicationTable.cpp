#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiplication_table(int n){
  vector <vector<int>> result;
  for (int i {1}; i <= n; i++) {
        vector <int> temp_vec;
        for (int j {1}; j <= n; j++) {
            temp_vec.push_back(i*j); 
        }
        result.push_back(temp_vec);
    }
  return result;
}

int main() {
    int num {3};
    vector <vector<int>> result = multiplication_table(num);
    // vector <vector<int>> test {{1,2,3},{2,4,6},{3,6,9}};
    for (int i {}; i < num; i++) {
        for (int j {}; j < num; j++) {
            cout << result[i][j] << " ";
        }
    }

    return 0;
}

/////////////////////////////////////////////////////