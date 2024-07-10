// https://www.codewars.com/kata/56dbe0e313c2f63be4000b25/train/cpp
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class Opstrings
{
public:
    static std::string vertMirror(const std::string &strng)
    {
        std::vector<std::string> lines = split(strng, '\n');
        for (auto &line : lines)
        {
            std::reverse(line.begin(), line.end());
        }
        return join(lines, '\n');
    }

    static std::string horMirror(const std::string &strng)
    {
        std::vector<std::string> lines = split(strng, '\n');
        std::reverse(lines.begin(), lines.end());
        return join(lines, '\n');
    }

    template <typename Func>
    static std::string oper(Func fct, const std::string &s)
    {
        return fct(s);
    }

private:
    static std::vector<std::string> split(const std::string &s, char delimiter)
    {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(s);
        while (std::getline(tokenStream, token, delimiter))
        {
            tokens.push_back(token);
        }
        return tokens;
    }

    static std::string join(const std::vector<std::string> &vec, char delimiter)
    {
        std::ostringstream result;
        for (size_t i = 0; i < vec.size(); ++i)
        {
            if (i != 0)
            {
                result << delimiter;
            }
            result << vec[i];
        }
        return result.str();
    }
};
//
class Opstrings
{
public:
    static std::string vertMirror(const std::string& s) {
        auto strings = split(s);
        for (auto& str : strings) std::reverse(str.begin(), str.end());
        return merge(strings);
    }
    
	  static std::string horMirror(const std::string& s) {
        auto strings = split(s);
        std::reverse(strings.begin(), strings.end());
        return merge(strings);
    }

    static std::string oper(std::string(*f)(const std::string&), const std::string& s) {
        return f(s);
    }
    
private:
    static std::vector<std::string> split(const std::string& s, const char d = delim) {
        std::vector<std::string> result;
        std::istringstream ss(s);
        std::string token;    
        
        while (std::getline(ss, token, d)) {
            result.push_back(token);
        }
        return result;
    }
    
    static std::string merge(const std::vector<std::string>& strings) {
        std::string result;
        for (auto& str : strings) {
            result += str;
            result += delim;
        }
        return result.erase(result.size() - 1);
    }
    
private:
    static const char delim = '\n';
};
