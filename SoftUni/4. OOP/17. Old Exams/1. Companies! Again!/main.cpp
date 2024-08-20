
#include "SuperCompany.h"

bool isSuperCompany(Company *c) {
	return c->id >= 100;
}

int main() {

    vector<shared_ptr<Company>> companies;

	string line;
	while (getline(std::cin, line) && line != "end") {
		istringstream lineIn(line);
	
		Company* c = new Company();	
		lineIn >> *c;

		if (isSuperCompany(c)) {
			SuperCompany * sc = new SuperCompany(c);
			delete c;
			c = sc;
		}

        companies.push_back(shared_ptr<Company>(c));
	}

	size_t normals = 0;
	size_t supers = 0;

	for(auto c : companies) {
		if (dynamic_cast<SuperCompany *>(c.get()) != nullptr)
			supers++;
		else 
			normals++;
	}

	cout << "SuperCompanies: " << supers << ", Companies: " << normals << endl;

	return 0;
}