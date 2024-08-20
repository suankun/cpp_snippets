#include "solution.h"

using namespace std;

void processLine(const std::string & line, Storage & storage) {

    istringstream istr(line);
    string name;
    istr >> name;

    Storage::Store elements;
    string buf;
    while(istr >> buf)
        elements[buf]++;

    if (elements.size()) {
        // complex element with name `name` and corresponding contents
        // check if the necessary contents exist in the main store
        if (storage <= elements)
            // we have all the elements stored
            storage >> elements;
        else {
            // we're missing an element - print error and do nothing
            cout << "Cannot produce: " << name << endl;
            return;
        }
    }

    // successfully processed, add it to the storage 
    storage << name;
}

int main() {
    Storage s;

    string buf;
    getline(cin, buf);
    while (buf != "end") {
        processLine(buf, s);
        getline(cin, buf);
    }

    cout << s << endl;

    return 0;
}
