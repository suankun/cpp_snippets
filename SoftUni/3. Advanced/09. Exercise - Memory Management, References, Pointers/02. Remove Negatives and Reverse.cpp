#include <iostream>
#include <string>
#include <sstream>
#include <memory>

using namespace std;

const size_t MAX_SIZE = 1000;

int main()
{
    // int* data = new int[MAX_SIZE];
    unique_ptr<int[]> data(new int[MAX_SIZE]);

    string buf;
    getline(cin, buf);

    istringstream iss(buf);
    size_t size = 0;
    while (iss >> data[size])
        size++;
    
    shared_ptr<int[]> result(new int[MAX_SIZE]);

    size_t resultSize = 0;
    for (int cur = size - 1; cur >= 0; cur--) {
        if (data[cur] >= 0) {
            result[resultSize] = data[cur];
            resultSize++;
        }
    }

    if (resultSize == 0)
        cout << "empty";
    else
        for (size_t cur = 0; cur < resultSize; cur++)
            cout << result[cur] << ' ';

    cout << endl;

    return 0;
}
