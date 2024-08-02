// https://www.codewars.com/kata/59b710ed70a3b7dd8f000027/train/cpp
#include <vector>
#include <algorithm>
bool isAllPossibilities(std::vector<int> arr){
    if (arr.size()==0) return false;
    int n=arr.size();
    for (int i=0; i<n; i++) {
        if (std::find(arr.begin(), arr.end(), i) != arr.end()) continue;
        else return false;
    }
    return true;
}
//
#include <vector>
#include <algorithm>

bool isAllPossibilities(std::vector<int> arr) {
    if (arr.empty()) return false;
    for (int i=0; i<arr.size(); i++)
        if (std::find(arr.begin(), arr.end(), i) == arr.end()) 
        return false;
    return true;
}
