#include <iostream>
#include <sstream>
#include <map>

using namespace std;

struct Range {

    int start = 0, end = 0;

    Range() = default;

    Range(const string & buf) {
        istringstream istr(buf);
        istr >> start >> end;
    }

};

class Container : public map<int, Range> {

    public:

        bool isInRange(int i) const {
            const_iterator it = upper_bound(i);

            if (it == begin())
                return false;

            it--;

            return i <= it->second.end;
        }
};


int main() {
    Container c;

    string buf;
    getline(cin, buf);
    while (buf != ".")
    {
        Range r(buf);
        c[r.start] = r;
        getline(cin, buf);
    }
    
    getline(cin, buf);
    while (buf != ".")
    {
        int num;
        istringstream istr(buf);
        istr >> num;
        cout << (c.isInRange(num) ? "in" : "out") << endl;        
        getline(cin, buf);
    }

    return 0; 
}