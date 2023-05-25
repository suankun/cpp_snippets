#include <iostream>
#include <vector>
using namespace std;


int find_even_index (const vector <int> numbers) {
    int index {};
    for (int i {}; i < numbers.size(); i++) {
        int left_side_sum {}, right_side_sum {};
        for (int left_side {}; left_side < index; left_side++) {
            left_side_sum += numbers[left_side];
        }
        for (int right_side {index+1}; right_side < numbers.size(); right_side++){
            right_side_sum += numbers[right_side];
        }
        if (left_side_sum == right_side_sum) return index;
        index++;
    }
    return -1;
}

int main() {
    vector <int> numbers {1,2,3,4,3,2,1}; // 3
    // vector <int> numbers {1,100,50,-51,1,1}; // 1
    // vector <int> numbers {20,10,-80,10,10,15,35}; // 0

    cout << "Index with equal left and right side is: " << find_even_index(numbers) << endl;


    return 0;
}

/////////////////////////////////////////////////////
#include <vector>
#include <numeric>
using namespace std;

int find_even_index (const vector <int> numbers) {
  for (int index = 0; index < numbers.size(); index++)
  {
    int left_sum = std::accumulate(numbers.begin(), numbers.begin() + index, 0);
    int right_sum = std::accumulate(numbers.begin() + index + 1, numbers.end(), 0);
    if (left_sum == right_sum)
      return index;
  }
  return -1;
}
