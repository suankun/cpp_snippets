// https://www.codewars.com/kata/5a2fd38b55519ed98f0000ce/train/cpp
#include <string>

std::string multi_table(int number)
{
    std::string multTable;
    for (int i {}; i<10; i++) {
        multTable+=std::to_string(i+1) + " * " + std::to_string(number) +
          " = " + std::to_string((i+1) * number) + "\n";
    }
    multTable.pop_back();
    return multTable;
}
//
#include <string>
#include <sstream>

std::string multi_table(int number)
{
	std::ostringstream os;
	for (int i = 1; i <= 10; i++) {
		os << i << " * " << number << " = " << i*number << (i<10 ? "\n" : "");
	}
	return os.str();
}
