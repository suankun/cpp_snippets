#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> quiz1;
    quiz1.insert(pair<int, int>(1, 30));
    quiz1.insert(pair<int, int>(2, 40));
    quiz1.insert(pair<int, int>(3, 50));
    quiz1.insert(pair<int, int>(4, 60));
    quiz1.insert(pair<int, int>(5, 70));
    quiz1.insert(pair<int, int>(6, 80));
    quiz1.insert(pair<int, int>(7, 90));

    map<int, int>::iterator it;
    
    cout << "--- quiz1 ---" << endl;
    for (it = quiz1.begin(); it != quiz1.end(); it++) {
        cout << it->first << '\t' << it->second << endl;
    }

    cout << "--- quiz2 ---" << endl;
    map<int, int> quiz2(quiz1.begin(), quiz1.end());

    for (it = quiz2.begin(); it != quiz2.end(); it++) {
        cout << it->first << '\t' << it->second << endl;
    }

    cout << "--- quiz2 after erase element 4 ---" << endl;
    quiz2.erase(4);
    for (it = quiz2.begin(); it != quiz2.end(); it++) {
        cout << it->first << '\t' << it->second << endl;
    }

    cout << "lower bound and upper bound for map gquiz1 key = 5" << endl;
    cout << "quiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << quiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << quiz1.lower_bound(5)->second
         << endl;
    cout << "quiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << quiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << quiz1.upper_bound(5)->second
         << endl;

    return 0;
}
