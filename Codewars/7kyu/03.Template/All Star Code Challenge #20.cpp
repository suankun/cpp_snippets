// https://www.codewars.com/kata/5865a75da5f19147370000c7/train/cpp
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

template<class T>
vector<T> add_arrays(const vector<T>& array1, const vector<T>& array2) {
    if (array1.size() != array2.size()) {
        throw invalid_argument("Input arguments are not of equal length");
    }

    vector<T> result(array1.size());
    for (size_t i = 0; i < array1.size(); ++i) {
        result[i] = array1[i] + array2[i];
    }

    return result;
}
//
#include <vector>
#include <stdexcept>
using namespace std;

template<class T>
vector<T> add_arrays(const vector<T>& array1, const vector<T>& array2) {
    if (array1.size() != array2.size())
        throw invalid_argument( "Different size..." );

    vector<T> arr;
    for (unsigned i = 0; i < array1.size(); i++)
        arr.push_back(array1[i]+array2[i]);
        
    return arr;
}
