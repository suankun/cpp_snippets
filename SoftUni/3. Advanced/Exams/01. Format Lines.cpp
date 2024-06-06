#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

using namespace std;


string peekNextWord(istringstream& stream) {
    std::streampos originalPos = stream.tellg();
    
    string word;
    stream >> word;
    
    stream.clear();
    stream.seekg(originalPos);
    
    return word;
}

int main() {
    string line, inputText, formatedWidthText;

    while (getline(cin, line) && line != "###")
    {
        istringstream iss(line);
        string curWord;
        while (iss >> curWord)
            inputText += curWord + ' ';
    }
    
    int maxWidth;
    cin >> maxWidth;
    istringstream iss(inputText);
    while (iss.peek() != EOF)
    {
        string curLine;
        string buf;
        
        while (iss >> buf)
        {
            string checkNext = peekNextWord(iss);
            curLine += buf;

            if (curLine.size() + checkNext.size() >= maxWidth)
                break;

            curLine += ' ';
        }
        cout << curLine << '\n';
    }
    
    return 0;
}
