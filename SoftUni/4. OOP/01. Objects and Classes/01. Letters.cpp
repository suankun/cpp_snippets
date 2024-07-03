#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

class Words {
    private:
        typedef set<string> WordData;
        WordData data;

    public:
        Words(istream & istr) {
            string buf;
            getline(istr, buf);

            for(char & c : buf)
                //if ( !(c >= 'A' && c <='Z') && !(c>='a' && c <= 'z'))
                if (ispunct(c))
                    c = ' ';

            istringstream lineStr(buf);
            string tmp;
            while(lineStr >> tmp)
                data.insert(tmp);
        }

        string getWordsWithChar(char c) {

            ostringstream ostr;

            for(const string & curr : data) {
                string transformed = curr; 
                transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
                if (transformed.find(c) != string::npos) {
                    ostr << curr << " ";
                }
            }

            return ostr.str();

        }

        const WordData & getData(void) { return data; }

};

int main() {

    Words words(cin);

    while(true) {

        char c;
        cin >> c;

        if (c == '.')
            break;

        string wordsWithChar(words.getWordsWithChar(::tolower(c)));

        if (wordsWithChar.length() == 0)
            cout << "---";
        else
            cout << wordsWithChar;

        cout << endl;
    }

    return 0;
}
