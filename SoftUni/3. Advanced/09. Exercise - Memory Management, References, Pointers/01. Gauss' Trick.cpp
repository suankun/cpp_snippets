#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const size_t MAX_SIZE = 1000;

int main()
{
    int* nums = new int[MAX_SIZE];

    string buf;
    getline(cin, buf);

    istringstream iss(buf);
    size_t size = 0;
    while (iss >> nums[size])
        size++;
    
    size_t curPair = 0;
    for (; curPair < size / 2; curPair++)
        cout << nums[curPair] + nums[size - 1 - curPair] << ' ';

    if (size % 2 != 0)
        cout << nums[curPair];

    cout << endl;

    delete [] nums;

    return 0;
}
