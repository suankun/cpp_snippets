#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void readVector(vector<int>& numbers) {
    string line;
    getline(cin, line);

    istringstream is(line);

    int num;
    while(is >> num) {
        numbers.push_back(num);
    }
}

void mergeVectors(vector<int>& mergedVector, const vector<int>& numbers1, const vector<int>& numbers2) {
    int idx = 0;
    while (idx < numbers1.size() || idx < numbers2.size())
    {
        if (idx < numbers1.size()) mergedVector.push_back(numbers1[idx]);
        if (idx < numbers2.size()) mergedVector.push_back(numbers2[idx]);
        idx++;
    }
}

void printVector(const vector<int>& numbers) {
    for (const int& num: numbers) {
        cout << num << ' ';
    }
}

int main() {
    vector<int> numbers1;
    vector<int> numbers2;

    readVector(numbers1);
    readVector(numbers2);

    vector<int> mergedVector;
    mergeVectors(mergedVector, numbers1, numbers2);

    printVector(mergedVector);
    
    return 0;
}
