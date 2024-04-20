// https://www.codewars.com/kata/59a2a3ba5eb5d4e609000055/train/cpp
#include <vector>
using namespace std;

template <typename T>
vector<T> find_array(vector<T> arr1, vector<int> arr2)
{
    vector<T> res;
    for (size_t i {}; i<arr2.size(); i++) {
        if (arr2[i]>arr1.size()) continue;
        res.push_back(arr1[arr2[i]]);
    }
    return res;
}
//
using namespace std;

template <typename T>
vector<T> find_array(vector<T> arr1, vector<int> arr2)
{
    vector<T>  result;
    for(auto i: arr2)  if(i < arr1.size())  result.push_back(arr1[i]);
    return result;
}
