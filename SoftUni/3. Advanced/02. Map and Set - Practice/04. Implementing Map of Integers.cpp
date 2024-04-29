#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	// Create a map of strings to integers
	map<string, int> map;

	// Insert some values into the map
	map["one"] = 1;
	map["two"] = 2;
	map["three"] = 3;

	// Print the values in the map
	cout << "Key: one, Value: " << map["one"] << endl;
	cout << "Key: two, Value: " << map["two"] << endl;
	cout << "Key: three, Value: " << map["three"] << endl;

	// Check if a key is in the map
	if (map.count("four") > 0) {
		cout << "Key 'four' is in the map" << endl;
	}
	else {
		cout << "Key 'four' is not in the map" << endl;
	}

	return 0;
}
