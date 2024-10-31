// https://www.codewars.com/kata/5b0a80ce84a30f4762000069/train/cpp

// The code provided has a method hello which is supposed to show only those attributes which have been explicitly set. Furthermore, it is supposed to say them in the same order they were set.

// But it's not working properly.

// Notes
// There are 3 attributes

// name
// age
// sex ('M' or 'F')
// When the same attribute is assigned multiple times the hello method shows it only once. If this happens the order depends on the first assignment of that attribute, but the value is from the last assignment.

// Examples
// Hello.
// Hello. My name is Bob. I am 27. I am male.
// Hello. I am 27. I am male. My name is Bob.
// Hello. My name is Alice. I am female.
// Hello. My name is Batman.
// Task
// Fix the code so we can all go home early.

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class Dinglemouse
{
    std::vector<std::pair<std::string, std::string>> attrs;

    void updateOrAdd(const std::string &key, const std::string &value)
    {
        auto it = std::find_if(attrs.begin(), attrs.end(),
                               [&](const std::pair<std::string, std::string> &attr) { return attr.first == key; });

        if (it != attrs.end()) {
            it->second = value;
        } else {
            attrs.push_back({key, value});
        }
    }

public:
    Dinglemouse()
    {
        attrs.push_back({"greeting", "Hello."});
    }

    Dinglemouse &setAge(int age)
    {
        updateOrAdd("age", "I am " + std::to_string(age) + ".");
        return *this;
    }

    Dinglemouse &setSex(char sex)
    {
        updateOrAdd("sex", "I am " + std::string(sex == 'M' ? "male" : "female") + ".");
        return *this;
    }

    Dinglemouse &setName(const std::string &name)
    {
        updateOrAdd("name", "My name is " + name + ".");
        return *this;
    }

    std::string hello()
    {
        std::ostringstream result;
        for (const auto &attr : attrs) {
            if (!result.str().empty()) {
                result << " ";
            }
            result << attr.second;
        }
        return result.str();
    }
};
//
#include <algorithm>
#include <string>

class Dinglemouse {
    int s_name = -1, s_age = -1, s_sex = -1;
    std::string name;
    int age;
    char sex;

public:
    Dinglemouse() {}

    Dinglemouse& setAge(const int age) {
        if (s_age < 0) s_age = std::max(s_name, s_sex) + 1;
        this->age = age;
        return *this;
    }

    Dinglemouse& setSex(const char sex) {
        if (s_sex < 0) s_sex = std::max(s_name, s_age) + 1;
        this->sex = sex;
        return *this;
    }

    Dinglemouse& setName(const std::string& name) {
        if (s_name < 0) s_name = std::max(s_sex, s_age) + 1;
        this->name = name;
        return *this;
    }

    std::string hello() {
        std::string res = "Hello.";
        for (int i = 0; i <= s_name || i <= s_age || i <= s_sex; ++i) {
            if (s_name == i) res += " My name is " + name + ".";
            if (s_age == i) res += " I am " + std::to_string(age) + ".";
            if (s_sex == i)
                res +=
                    std::string{" I am "} + ('M' == sex ? "male." : "female.");
        }

        return res;
    }
};
