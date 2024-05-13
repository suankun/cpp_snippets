// https://www.codewars.com/kata/5b538734beb8654d6b00016d/train/cpp
#include <iostream>
using namespace std;

#include<vector>

long long queue(const std::vector<int>& queuers, int pos){
    // copy vector
    std::vector<int> queue;
    for (auto n: queuers) queue.push_back(n);

    // variable to keep the results in minutes
    long long min_needed=0;

    // creating loop to proceed the queue
    while(queue[pos]>0) {
        for (auto n: queue) cout << n << ' ';
        cout << endl << pos << endl;
        // taking first/current person and decrease number by 1
        // erase first person
        // if numbers is 0 continue without pushing it back, else push_back()
        int curr_person = queue[0]-1;
        queue.erase(queue.begin());
        if (curr_person>0) {
            
            if (pos==0) {
                pos=queue.size();
            } else {
                pos-=1;
            }
            queue.push_back(curr_person);
        } else if (curr_person==0 && pos==0) {
            min_needed++;
            break;
        } else {
            pos--;
        }

        // count minutes needed
        min_needed++;
    }
    return min_needed;
}

int main() {
    // cout << queue({2, 5, 3, 6, 4}, 0) << endl;  // Equals(6)
    cout << queue({2, 5, 3, 6, 4}, 1) << endl;  // Equals(18)
    // cout << queue({2, 5, 3, 6, 4}, 2) << endl;  // Equals(12)
    // cout << queue({2, 5, 3, 6, 4}, 3) << endl;  // Equals(20)
    // cout << queue({2, 5, 3, 6, 4}, 4) << endl;  // Equals(17)

    return 0;
}
//
#include<vector>

long long queue(const std::vector<int>& queuers, int pos){
  long long countQueueTime = 0;
  for (int i = 0; i < queuers.size(); i++) {
    if (i <= pos)
      // The rule here is each people standing in front of your buddy will get at least
      // the number of tickets your buddy want to get before your buddy can get all the tickets
      countQueueTime += (queuers[i] <= queuers[pos]) ? queuers[i] : queuers[pos];
    else
      // The rule here is each people standing behind your buddy will get at least
      // the number of tickets your buddy want minus 1 before your buddy get all the tickets
      countQueueTime += (queuers[i] < queuers[pos]) ? queuers[i] : (queuers[pos] - 1);
  }
  return countQueueTime;
}
