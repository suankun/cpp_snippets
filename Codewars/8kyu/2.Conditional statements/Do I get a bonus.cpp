// https://www.codewars.com/kata/56f6ad906b88de513f000d96/train/cpp
#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{
    return bonus ? "$"+std::to_string(salary*10) : "$"+std::to_string(salary);
}
//
#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{
    return "$" + to_string(salary) + (bonus ? "0" : "");
}
