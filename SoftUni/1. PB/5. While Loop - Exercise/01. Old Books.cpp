#include <iostream>

using namespace std;

int main() {
    string searchedBook;
    getline(cin, searchedBook);

    string currentBook;
    getline(cin, currentBook);

    int searchCnt=0;

    while (currentBook!="No More Books")
    {
        if (searchedBook==currentBook) break;
        getline(cin, currentBook);
        searchCnt++;
    }
    
    if (searchedBook==currentBook) {
        cout << "You checked " << searchCnt << " books and found it." << endl;
    }
    else {
        cout << "The book you search is not here!"  << endl;
        cout << "You checked " << searchCnt << " books."  << endl;
    }

    return 0;
}
