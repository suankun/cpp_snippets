#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    map< string, map<string, set<string> > > data;

    while (n--)
    {
        string line;
        getline(cin, line);
        istringstream iss(line);

        string continent, country, city;
        iss >> continent >> country >> city;
        data[continent][country].insert(city);
    }
    
    for (map <string, map<string, set<string> > >::iterator itContinents = data.begin(); itContinents != data.end(); itContinents++) {
        cout << itContinents->first << ":" << endl;

        map<string, set<string> > & countries = itContinents->second;
        for (map<string, set<string> >::iterator itCountries = countries.begin(); itCountries != countries.end(); itCountries++) {
            cout << "  " << itCountries->first << " -> ";

            set<string> & cities = itCountries->second;
            bool bFirst = true;
            for (string city : cities) {
                if (!bFirst)
                    cout << ", ";
                else
                    bFirst = false;
                cout << city;
            }
            cout << endl;
        }
    }

    return 0;
}
