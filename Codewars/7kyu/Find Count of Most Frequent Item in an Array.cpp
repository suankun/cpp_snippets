// https://www.codewars.com/kata/56582133c932d8239900002e/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


unsigned int most_frequent_item_count(const std::vector<int>& collection) {
    unsigned int max_cnt {};
    for (size_t i {}; i<collection.size(); i++) {
        unsigned int current_num = count(collection.begin(), collection.end(), collection[i]);
        if (max_cnt<current_num) max_cnt=current_num;
    }
    return max_cnt;
}

int main() {

    vector<int> one {3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3};  // 5
    cout << most_frequent_item_count(one);

    return 0;
}
///////////
// int most_frequent_item_count(std::vector<int>v) {
//   int c,t=c=0;
//   for(int i:v)t=std::count(begin(v),end(v),i),t>c?c=t:0;
//   return c;
// }
