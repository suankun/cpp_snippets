#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <memory>
#include <cstring>

using namespace std;

void * readCompany(istream& in) {
	string name;
	int id;

	if ((bool)(cin >> id) == false)
		return nullptr;
	
	cin >> name;

	char * companyData = new char[sizeof(id) + name.length() + 1];

	int * idPtr = reinterpret_cast<int *>(companyData);
	*idPtr = id;

	strcpy(companyData + sizeof(id), name.c_str());

	return companyData;
}

void printCompany(ostream& ostr, void* company) {

	int* id = static_cast<int *>(company);

	const char* name = reinterpret_cast<char *>(id + 1);

	cout << *id << ' ' << name << endl;
}

bool isValidCompany(void* company) {

	int * idPtr = static_cast<int *>(company);

	return *idPtr >= 0;
}

int main() {
    vector<void *> companies;

	while (true) {
		void* curCompany = readCompany(cin);
		if (curCompany == nullptr)
			break;
		
		companies.push_back(curCompany);
	}

	for (void * curCompany : companies)
		if (isValidCompany(curCompany))
			printCompany(cout, curCompany);

	for (void* ptr : companies)
		delete [] static_cast<char *>(ptr);

    return 0;
}
