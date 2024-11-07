// https://www.codewars.com/kata/57b06f90e298a7b53d000a86/train/cpp
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int queueTime(const std::vector<int>& customers, int n) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> tills;

    for (int i = 0; i < n; i++) {
        tills.push(0);
    }

    for (int time : customers) {
        int next_till = tills.top();
        tills.pop();
        tills.push(next_till + time);
    }

    int max_time = 0;
    while (!tills.empty()) {
        max_time = std::max(max_time, tills.top());
        tills.pop();
    }

    return max_time;
}

int main() {

    vector<int> one {2,2,3,3,4,4};
    std::cout << queueTime(one, 2) << std::endl; // 9

    return 0;
}
//
// long queueTime(std::vector<int> customers,int n){
//   std::vector<long> queues(n, 0);
  
//   for (int i : customers)
//     *std::min_element(queues.begin(), queues.end()) += i;
    
//   return *std::max_element(queues.cbegin(), queues.cend());
// }
