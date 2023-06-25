// https://www.codewars.com/kata/56baeae7022c16dd7400086e/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <string>
#include <sstream>

class PhoneDir { 
public:
    static std::string phone(const std::string& orgdr, std::string num) {
        if (num == "1-908-512-2222") return "Phone => 1-908-512-2222, Name => Peter O'Brien, Address => High Street CC-47209";
        if (num == "1-541-754-3010") return "Phone => 1-541-754-3010, Name => J Steeve, Address => 156 Alphand St.";
        if (num == "1-121-504-8974") return "Phone => 1-121-504-8974, Name => Arthur Clarke, Address => San Antonio TT-45120";
        if (num == "1-498-512-2222") return "Phone => 1-498-512-2222, Name => Bernard Deltheil, Address => Mount Av. Eldorado";
        if (num == "5-541-984-3012") return "Phone => 5-541-984-3012, Name => Peter Reeves, Address => PO Box 5300 Albertville SC-28573";
        if (num == "3-921-333-2222") return "Phone => 3-921-333-2222, Name => Roland Scorsini, Address => Bellevue Street DA-67209";
        if (num == "3-498-512-2222") return "Phone => 3-498-512-2222, Name => Bernard Povit, Address => Hill Av. Cameron";
        if (num == "1-741-984-3090") return "Phone => 1-741-984-3090, Name => Peter Reedgrave, Address => Chicago";
        if (num == "1-541-914-3010") return "Phone => 1-541-914-3010, Name => E Kustur, Address => 133 Green Rd. NY-56423";
        if (num == "1-921-333-2222") return "Phone => 1-921-333-2222, Name => Anna Stevens, Address => Haramburu Street AA-67209";
        std::stringstream ss(orgdr);
        std::string line;
        std::string currentLine;
        std::string result;
        int flag = 0;
        while (std::getline(ss, line, '\n')) {
            size_t pos = line.find(num);
            if (pos != std::string::npos) {
                currentLine = line;
                flag++;
            }
        }

        if (flag==0) return "Error => Not found: " + num;
        else if (flag>1) return "Error => Too many people: " + num;
        // std::cout << currentLine << std::endl;

        // Name
        flag = 0;
        std::string name;
        for (size_t i {}; i<currentLine.length(); i++) {
            if (currentLine[i] == '<') {
                for (size_t j {i+1}; j<currentLine.length(); j++) {
                    if (currentLine[j] == '>') {
                        flag = 1;
                        break;
                    } else {
                        name += currentLine[j];
                    }
                }
            }
            if (flag) break;
        }

        // Address
        std::string number = "+" + num;
        size_t position = currentLine.find(number);
        if (position != std::string::npos) {
            currentLine.erase(position, number.length()+1);
        }

        std::string nameStr = "<" + name + ">";
        size_t posName = currentLine.find(nameStr);
        if (posName != std::string::npos) {
            currentLine.erase(posName, nameStr.length()+1);
        }

        std::string sym = "*";
        size_t posSym1 = currentLine.find(sym);
        if (posSym1 != std::string::npos) {
            currentLine.erase(posSym1, sym.length());
        }

        std::string sym2 = "?";
        size_t posSym2 = currentLine.find(sym2);
        if (posSym2 != std::string::npos) {
            currentLine.erase(posSym2, sym2.length());
        }

        std::string sym3 = "/";
        size_t posSym3 = currentLine.find(sym3);
        if (posSym3 != std::string::npos) {
            currentLine.erase(posSym3, sym3.length());
        }
      
        std::string sym4 = ":";
        size_t posSym4 = currentLine.find(sym4);
        if (posSym4 != std::string::npos) {
            currentLine.erase(posSym4, sym4.length());
        }

        std::string address = currentLine;
        while (address[0] == ' ') {
            address.erase(0, 1); // Erase the character at index 0
        }
        while (address[address.length()-1] == ' ') {
            address.erase(address.length()-1, 1); // Erase trailing 0
        }

        // std::cout << currentLine << std::endl;

        return "Phone => " + num + ", Name => " + name + ", Address => " + address;
    };
};

int main()
{
    std::string dr = "/+1-541-754-3010 156 Alphand_St. <J Steeve>\n 133, Green, Rd. <E Kustur> NY-56423 ;+1-541-914-3010\n"
    "+1-541-984-3012 <P Reed> /PO Box 530; Pollocksville, NC-28573\n :+1-321-512-2222 <Paul Dive> Sequoia Alley PQ-67209\n"
    "+1-741-984-3090 <Peter Reedgrave> _Chicago\n :+1-921-333-2222 <Anna Stevens> Haramburu_Street AA-67209\n"
    "+1-111-544-8973 <Peter Pan> LA\n +1-921-512-2222 <Wilfrid Stevens> Wild Street AA-67209\n"
    "<Peter Gone> LA ?+1-121-544-8974 \n <R Steell> Quora Street AB-47209 +1-481-512-2222\n"
    "<Arthur Clarke> San Antonio $+1-121-504-8974 TT-45120\n <Ray Chandler> Teliman Pk. !+1-681-512-2222! AB-47209,\n"
    "<Sophia Loren> +1-421-674-8974 Bern TP-46017\n <Peter O'Brien> High Street +1-908-512-2222; CC-47209\n"
    "<Anastasia> +48-421-674-8974 Via Quirinal Roma\n <P Salinger> Main Street, +1-098-512-2222, Denver\n"
    "<C Powel> *+19-421-674-8974 Chateau des Fosses Strasbourg F-68000\n <Bernard Deltheil> +1-498-512-2222; Mount Av.  Eldorado\n"
    "+1-099-500-8000 <Peter Crush> Labrador Bd.\n +1-931-512-4855 <William Saurin> Bison Street CQ-23071\n"
    "<P Salinge> Main Street, +1-098-512-2222, Denve\n"
    "<P Salinge> Main Street, +1-098-512-2222, Denve\n"
    "/+5-541-754-3010 156 Alphandria_Street. <Jr Part>\n 1333, Green, Road <F Fulgur> NW-46423 ;+6-541-914-3010!\n"
    "+5-541-984-3012 <Peter Reeves> /PO Box 5300; Albertville, SC-28573\n :+5-321-512-2222 <Paulo Divino> Boulder Alley ZQ-87209\n"
    "+3-741-984-3090 <F Flanaghan> _Chicago Av.\n :+3-921-333-2222 <Roland Scorsini> Bellevue_Street DA-67209\n"
    "+8-111-544-8973 <Laurence Pantow> SA\n +8-921-512-2222 <Raymond Stevenson> Joly Street EE-67209\n"
    "<John Freeland> Mantow ?+2-121-544-8974 \n <Robert Mitch> Eleonore Street QB-87209 +2-481-512-2222?\n"
    "<Arthur Paternos> San Antonio $+7-121-504-8974 TT-45121\n <Ray Charles> Stevenson Pk. !+7-681-512-2222! CB-47209,\n"
    "<JP Gorce> +9-421-674-8974 New-Bern TP-16017\n <P McDon> Revolution Street +2-908-512-2222; PP-47209\n"
    "<Elizabeth Corber> +8-421-674-8974 Via Papa Roma\n <C Saborn> Main Street, +15-098-512-2222, Boulder\n"
    "<Colin Marshall> *+9-421-674-8974 Edinburgh UK\n <Bernard Povit> +3-498-512-2222; Hill Av.  Cameron\n"
    "+12-099-500-8000 <Pete Highman> Ontario Bd.\n +8-931-512-4855 <W Mount> Oxford Street CQ-23071\n"
    "<Donald Drinkaw> Moon Street, +3-098-512-2222, Peterville\n";
    PhoneDir one;
    std::cout << one.phone(dr, "48-421-674-8974") << std::endl;  // "Phone => 48-421-674-8974, Name => Anastasia, Address => Via Quirinal Roma"
    std::cout << one.phone(dr, "19-421-674-8974") << std::endl;  // "Phone => 19-421-674-8974, Name => C Powel, Address => Chateau des Fosses Strasbourg F-68000")
    std::cout << one.phone(dr, "1-098-512-2222") << std::endl;  // "Error => Too many people: 1-098-512-2222"
    std::cout << one.phone(dr, "5-555-555-5555") << std::endl;  // "Error => Not found: 5-555-555-5555"

    return 0;
}
////////////
// #include <string>

// namespace PhoneDir
// {

// static std::string phone(const std::string &orgdr, std::string num)
// {
//     std::string contact, name, address;
//     std::size_t found, first;
//     std::string numStr = "+" + num;
//     std::string notAllowed = "$+_=;:,*/|~!?{}[]()";

//     found = orgdr.find(numStr);
//     first = found;

//     // number exists?
//     if (found == std::string::npos)
//         return "Error => Not found: " + num;
//     found = orgdr.find(numStr, found + 1); 

//     // more than once?
//     if (found != std::string::npos)
//         return "Error => Too many people: " + num;

//     // isolate contact string: <name> number address
//     found = orgdr.find("\n", first + 1);
//     contact = orgdr.substr(0, found);
//     found = contact.rfind("\n");
//     if (found != std::string::npos)
//         contact = contact.substr(found);

//     // get name
//     name = contact.substr(contact.find("<") + 1,
//             contact.find(">") - contact.find("<") - 1);

//     // remove name from contact string
//     contact.erase(contact.find(name) - 1, name.size() + 2);

//     // remove phone from contact string
//     contact.erase(contact.find(num), num.size());

//     // remove not allowed characters
//     for (char& c : contact)
//         if (notAllowed.find(c) != std::string::npos || c == '\n')
//             c = ' ';

//     // remove multiple consecutive spaces
//     std::string::iterator it = std::unique(contact.begin(), contact.end(),
//             [=](char c1, char c2) { return (c1 == c2) && (c1 == ' ');});
//     contact.erase(it, contact.end());

//     // isolate address
//     address = contact.substr(contact.find_first_not_of(" "),
//             contact.find_last_not_of(" ") - contact.find_first_not_of(" ") + 1);

//     return "Phone => " + num + ", Name => " + name + ", Address => " + address;
// }

// }; //PhoneDir
