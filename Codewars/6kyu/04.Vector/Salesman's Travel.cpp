// https://www.codewars.com/kata/56af1a20509ce5b9b000001e/train/cpp

// A traveling salesman has to visit clients. He got each client's address e.g. "432 Main Long Road St. Louisville OH 43071" as a list.

// The basic zipcode format usually consists of two capital letters followed by a white space and five digits. The list of clients to visit was given as a string of all addresses, each separated from the others by a comma, e.g. :

// "123 Main Street St. Louisville OH 43071,432 Main Long Road St. Louisville OH 43071,786 High Street Pollocksville NY 56432".

// To ease his travel he wants to group the list by zipcode.

// Task
// The function travel will take two parameters r (addresses' list of all clients' as a string) and zipcode and returns a string in the following format:

// zipcode:street and town,street and town,.../house number,house number,...

// The street numbers must be in the same order as the streets where they belong.

// If a given zipcode doesn't exist in the list of clients' addresses return "zipcode:/"

// Examples
// r = "123 Main Street St. Louisville OH 43071,432 Main Long Road St. Louisville OH 43071,786 High Street Pollocksville NY 56432"

// travel(r, "OH 43071") --> "OH 43071:Main Street St. Louisville,Main Long Road St. Louisville/123,432"

// travel(r, "NY 56432") --> "NY 56432:High Street Pollocksville/786"

// travel(r, "NY 5643") --> "NY 5643:/"

#include <iostream>
#include <sstream>
#include <vector>
#include <regex>
#include <string>
using namespace std;

class SalesmanTravel
{
public:
    static std::string travel(const std::string& orgr, std::string zipcode) {
        std::istringstream istr(orgr);
        std::string address;
        std::vector<std::string> streets;
        std::vector<std::string> houses;

        std::regex addrRegex(R"((^\d+)\s+([a-zA-Z\.\s]+)\s+([A-Z]{2}\s\d+)$)");
        std::smatch match;

        // Split addresses and process each one
        while (std::getline(istr, address, ',')) {
            if (std::regex_match(address, match, addrRegex)) {
                std::string house = match[1];
                std::string street = match[2];
                std::string zip = match[3];

                if (zip == zipcode) {
                    streets.push_back(street);
                    houses.push_back(house);
                }
            }
        }

        std::string streetList = streets.empty() ? "" : streets[0];
        for (size_t i = 1; i < streets.size(); ++i) {
            streetList += "," + streets[i];
        }

        std::string houseList = houses.empty() ? "" : houses[0];
        for (size_t i = 1; i < houses.size(); ++i) {
            houseList += "," + houses[i];
        }

        return zipcode + ":" + streetList + "/" + houseList;
    }
};

int main() {
    std::string ad = 
    "123 Main Street St. Louisville OH 43071,432 Main Long Road St. Louisville OH 43071,786 High Street Pollocksville NY 56432,"
    "54 Holy Grail Street Niagara Town ZP 32908,3200 Main Rd. Bern AE 56210,1 Gordon St. Atlanta RE 13000,"
    "10 Pussy Cat Rd. Chicago EX 34342,10 Gordon St. Atlanta RE 13000,58 Gordon Road Atlanta RE 13000,"
    "22 Tokyo Av. Tedmondville SW 43098,674 Paris bd. Abbeville AA 45521,10 Surta Alley Goodtown GG 30654,"
    "45 Holy Grail Al. Niagara Town ZP 32908,320 Main Al. Bern AE 56210,14 Gordon Park Atlanta RE 13000,"
    "100 Pussy Cat Rd. Chicago EX 34342,2 Gordon St. Atlanta RE 13000,5 Gordon Road Atlanta RE 13000,"
    "2200 Tokyo Av. Tedmondville SW 43098,67 Paris St. Abbeville AA 45521,11 Surta Avenue Goodtown GG 30654,"
    "45 Holy Grail Al. Niagara Town ZP 32918,320 Main Al. Bern AE 56215,14 Gordon Park Atlanta RE 13200,"
    "100 Pussy Cat Rd. Chicago EX 34345,2 Gordon St. Atlanta RE 13222,5 Gordon Road Atlanta RE 13001,"
    "2200 Tokyo Av. Tedmondville SW 43198,67 Paris St. Abbeville AA 45522,11 Surta Avenue Goodville GG 30655,"
    "2222 Tokyo Av. Tedmondville SW 43198,670 Paris St. Abbeville AA 45522,114 Surta Avenue Goodville GG 30655,"
    "2 Holy Grail Street Niagara Town ZP 32908,3 Main Rd. Bern AE 56210,77 Gordon St. Atlanta RE 13000";

    cout << SalesmanTravel::travel(ad, "AA 45522") << endl;  // "AA 45522:Paris St. Abbeville,Paris St. Abbeville/67,670"
    // cout << SalesmanTravel::travel(ad, "EX 34342") << endl;  // "EX 34342:Pussy Cat Rd. Chicago,Pussy Cat Rd. Chicago/10,100"
    // cout << SalesmanTravel::travel(ad, "EX 34345") << endl;  // "EX 34345:Pussy Cat Rd. Chicago/100"
    // cout << SalesmanTravel::travel(ad, "AA 45521") << endl;  // "AA 45521:Paris bd. Abbeville,Paris St. Abbeville/674,67"
    // cout << SalesmanTravel::travel(ad, "AE 56215") << endl;  // "AE 56215:Main Al. Bern/320"

    return 0;
}
