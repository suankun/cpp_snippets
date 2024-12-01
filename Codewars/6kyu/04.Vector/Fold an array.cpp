// https://www.codewars.com/kata/57ea70aa5500adfe8a000110/train/cpp

// In this kata you have to write a method that folds a given array of integers by the middle x-times.

// An example says more than thousand words:

// Fold 1-times:
// [1,2,3,4,5] -> [6,6,3]

// A little visualization (NOT for the algorithm but for the idea of folding):

//  Step 1         Step 2        Step 3       Step 4       Step5
//                      5/           5|         5\          
//                     4/            4|          4\      
// 1 2 3 4 5      1 2 3/         1 2 3|       1 2 3\       6 6 3
// ----*----      ----*          ----*        ----*        ----*


// Fold 2-times:
// [1,2,3,4,5] -> [9,6]
// As you see, if the count of numbers is odd, the middle number will stay. Otherwise the fold-point is between the middle-numbers, so all numbers would be added in a way.

// The array will always contain numbers and will never be null. The parameter runs will always be a positive integer greater than 0 and says how many runs of folding your method has to do.

// If an array with one element is folded, it stays as the same array.

// The input array should not be modified!

#include <vector>

class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
        std::vector<int> res = array;

        for (int run = 0; run < runs; run++) {
            int n = res.size();
            int mid = n / 2;
            std::vector<int> folded;

            for (int i = 0; i < mid; i++) {
                folded.push_back(res[i] + res[n - 1 - i]);
            }

            if (n % 2 != 0) {
                folded.push_back(res[mid]);
            }

            res = folded; 
        }

        return res;
    }
};
//
#include <algorithm>
#include <functional>
#include <vector>

struct Kata
{
    std::vector<int> foldArray(std::vector<int> a, int runs)
    {
      for (; runs > 0; --runs) 
      {
        const auto half = a.size() / 2;
        std::transform(std::cbegin(a), std::cbegin(a) + half, std::crbegin(a), std::begin(a), std::plus<int>());
        a.resize((a.size() + 1) / 2);
      }
      return a;
    }
};
