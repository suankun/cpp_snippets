// https://www.codewars.com/kata/5981a139f5471fd1b2000071/train/cpp
#include <string>

std::string task(std::string day_of_week, int n, int c) {
    std::string name = "";
    if (day_of_week == "Monday") name = "James";
    else if (day_of_week == "Tuesday") name = "John";
    else if (day_of_week == "Wednesday") name = "Robert";
    else if (day_of_week == "Thursday") name = "Michael";
    else if (day_of_week == "Friday") name = "William";
    return "It is " + day_of_week + " today, " + name + ", you have to work, you must spray " + std::to_string(n) + " trees and you need " + std::to_string(n*c) + " dollars to buy liquid";
}
//
#include <string>
#include <map>

std::string task(std::string day_of_week, int n, int c) {
    std::map<std::string, std::string> workers;
    workers["Monday"]    = "James";
    workers["Wednesday"] = "Robert";
    workers["Friday"]    = "William";
    workers["Tuesday"]   = "John";
    workers["Thursday"]  = "Michael";
    return std::string("It is ") + day_of_week + " today, " + workers[day_of_week] + ", you have to work, you must spray " +
                        std::to_string(n) + " trees and you need " + std::to_string(n * c) + " dollars to buy liquid";
}
