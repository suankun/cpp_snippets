// https://www.codewars.com/kata/584703d76f6cf6ffc6000275/train/cpp

// Given a set of elements (integers or string characters, characters only in RISC-V), where any element may occur more than once, return the number of nonempty subsets that do not contain a repeated element.

// Let's see with an example:

// set numbers = {1, 2, 3, 4}
// The subsets are:

// {{1}, {2}, {3}, {4}, {1,2}, {1,3}, {1,4}, {2,3}, {2,4}, 
//  {3,4}, {1,2,3}, {1,2,4}, {1,3,4}, {2,3,4}, {1,2,3,4}}
// There are 15 subsets. As you can see, the empty set, {}, is not counted.

// Let's see an example with repetitions of an element:

// set letters = {a, b, c, d, d}
// The subsets for this case (including only those that have no repeated elements inside) will be:

// {{a}, {b}, {c}, {d}, {a,b}, {a,c}, {a,d}, {b,c}, {b,d},
//  {c,d}, {a,b,c}, {a,b,d}, {a,c,d}, {b,c,d}, {a,b,c,d}}
// There are 15 subsets.

// The function should receive an array as an argument and according to its features output the amount of nonempty subsets that do not contain a repeated element.

// [1, 2, 3, 4] --> 15
// ['a', 'b', 'c', 'd', 'd'] --> 15
// Features of the random tests:

// Low Performance Tests: 40
// Length of the arrays between 6 and 15

// High Performance Tests: 80
// Length of the arrays between 15 and 100 (Python and Ruby) between 15 and 63 (C++) and between 15 and 50 in javascript and Lua

#include <vector>
#include <unordered_set>

template<typename T>
unsigned long long estSubsets(const std::vector<T>& arr) {
    std::unordered_set<T> uniqueElements(arr.begin(), arr.end());
    return (1ULL << uniqueElements.size()) - 1;
}
