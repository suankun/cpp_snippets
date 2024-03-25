#include <iostream>
using namespace std;

int main() {
    string searchCondition, text;
    getline(cin, searchCondition);
    getline(cin, text);

    // int len = searchCondition.length();
    // int isFound = text.find(searchCondition);
    // while (isFound != -1)
    // {
    //     text.erase(isFound, len);
    //     isFound = text.find(searchCondition);
    // }

    int len = searchCondition.length();
    bool isFound = text.find(searchCondition) != string::npos;
    while (isFound)
    {
        int index = text.find(searchCondition);
        text.erase(index, len);
        isFound = text.find(searchCondition) != string::npos;
    }
    
    cout << text << endl;

    return 0;
}
