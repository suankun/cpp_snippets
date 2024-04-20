// https://www.codewars.com/kata/57f5e7bd60d0a0cfd900032d/train/cpp
#include <vector>
#include <algorithm>
using namespace std;

int missingNo(vector<int> arr){
    sort(arr.begin(), arr.end());
    size_t len = arr.size();
    if (len!=arr[len-1]) return len;
    for (size_t i=0; i<len-1; i++) if (arr[i]+1!=arr[i+1]) return arr[i]+1;
    return 0;
}
//
#include <vector>
using namespace std;

int missingNo(vector<int> arr){ //O(n) time & O(1) space (not included the O(n) input array)
    int sum=0;
    for (int i=0;i<=100;i++) sum+=arr[i];
    return 5050-sum;  // 5050 = sum of numbers from 0 to 100
}
