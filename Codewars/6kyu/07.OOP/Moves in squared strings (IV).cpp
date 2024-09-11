// https://www.codewars.com/kata/56dbf59b0a10feb08c000227/train/cpp
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class Opstrings4
{
private:
    static std::vector<std::string> split(const std::string &s);
    static std::string join(const std::vector<std::string>& vec);
    static std::string vertMirror(const std::string &strng);
    static std::string horMirror(const std::string &strng);
    static std::string diag1Sym(const std::string &strng);
public:
    static std::string diag2Sym(const std::string &strng);
    static std::string rot90Counter(const std::string &strng);
    static std::string selfieDiag2Counterclock(const std::string &strng);
    template<typename Func>
    static std::string oper(Func func, const std::string &s);
};

std::vector<std::string> Opstrings4::split(const std::string &s)
{
    std::vector<std::string> out;
    std::istringstream ss(s);
    std::string next;
    while (std::getline(ss, next, '\n'))
        out.push_back(next);
    return out;
}
std::string Opstrings4::join(const std::vector<std::string>& vec)
{
    std::string s = "";
    for (unsigned int i = 0; i < vec.size(); i++)
        if (i < vec.size() - 1) s += vec[i] + "\n";
        else s += vec[i];
    return s;
}
std::string Opstrings4::diag1Sym(const std::string &strng)
{
    std::vector<std::string> lines = split(strng);
    std::vector<std::string> newLines(lines.size());
    for (unsigned int i = 0; i < lines.size(); i++)
    {
        newLines[i] = "";
        for (unsigned int j = 0; j < lines.size(); j++)
            newLines[i] += lines[j][i];
    }
    return join(newLines);
}
std::string Opstrings4::vertMirror(const std::string &strng)
{
    std::vector<std::string> words = split(strng);
    std::string sb = "";
    for (unsigned int i = 0; i < words.size(); i++)
    {
        std::string word = words[i];
        for (int j = word.length() - 1; j >= 0; j--)
            sb += word[j];
        if (i < word.length() - 1) sb += "\n";
    }
    return sb;
}
std::string Opstrings4::horMirror(const std::string &strng)
{
    std::vector<std::string> words = split(strng);
    std::string sb = "";
    for (unsigned int i = words.size(); i >= 1; i--)
    {
        std::string word = words[i-1];
        sb += word;
        if (i > 1) sb += "\n";
    }
    return sb;
}

std::string Opstrings4::diag2Sym(const std::string &strng)
{
    return vertMirror(horMirror(diag1Sym(strng)));
}
std::string Opstrings4::rot90Counter(const std::string &strng)
{
    return horMirror(diag1Sym(strng));
}
std::string Opstrings4::selfieDiag2Counterclock(const std::string &strng)
{
    std::vector<std::string> org  = split(strng);
    std::vector<std::string> dia  = split(diag2Sym(strng));
    std::vector<std::string> cclk = split(rot90Counter(strng));
    std::string result = "";
    for (unsigned int i = 0; i < org.size(); i++)
    {
        if (i != org.size() - 1)
            result += org[i] + "|" + dia[i] + "|" + cclk[i] + "\n";
        else result += org[i] + "|" + dia[i] + "|" + cclk[i];
    }
    return result;
}
template<typename Func>
std::string Opstrings4::oper(Func func, const std::string &s)
{
    return func(s);
}
