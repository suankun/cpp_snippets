#include <vector>
using namespace std;

int min(vector<int> list){
    int min {list.at(0)};
    for (auto num: list) {
      if (num < min)
        min = num;
    }
    return min;
}

int max(vector<int> list){
    int max{list.at(0)};
    for (auto num: list) {
      if (num > max)
        max = num;
    }
    return max;
}


// #include <vector>
// #include <algorithm>
// using namespace std;

// int min(vector<int> list) 
// {
// 	return *(min_element(list.begin(), list.end()));
// }

// int max(vector<int> list) 
// {
// 	return *(max_element(list.begin(), list.end()));
// }