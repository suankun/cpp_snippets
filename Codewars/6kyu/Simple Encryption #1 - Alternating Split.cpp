// https://www.codewars.com/kata/57814d79a56c88e3e0000786/train/cpp
#include <iostream>
#include <string>
using namespace std;

using namespace std;
std::string encrypt(std::string text, int n)
{
    if (text.length() == 0 || n <= 0) return text;
    for (int i {}; i < n; i++) {
        string odd, even;
        for (size_t j {}; j < text.length(); j++) {
            if (j % 2 == 0) even += text[j];
            else odd += text[j];
        }
        text = odd;
        text += even;
    }
    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
    if (encryptedText.empty() || n <= 0) {
        return encryptedText;
    }

    std::string result = encryptedText;
    int length = encryptedText.length();
    int halfLength = length / 2;

    for (int i = 0; i < n; i++) {
        std::string oddChars = result.substr(0, halfLength);
        std::string evenChars = result.substr(halfLength);

        result = "";

        for (int j = 0; j < halfLength; j++) {
            result += evenChars[j];
            result += oddChars[j];
        }

        if (oddChars.length() < evenChars.length()) {
            result += evenChars[evenChars.length() - 1];
        } else if (oddChars.length() > evenChars.length()) {
            result += oddChars[oddChars.length() - 1];
        }
    }

    return result;
}

int main() {
	// string encr {"012345"}, decr {"01234"};
	// string encr_res = encrypt(encr, 1);  // "135024"
	// string decr_res = decrypt(decr, 1);  // "13024"
	// string encr_res = encrypt(encr, 2);  // "304152"
	// string decr_res = decrypt(decr, 2);  // "32104"

	string encr {"This is a test!"}, decr {"hsi  etTi sats!"};
	string encr_res = encrypt(encr, 1);  // "hsi  etTi sats!"
	string decr_res = decrypt(decr, 1);  // "This is a test!"
	// string encr {"This is a test!"}, decr {"This is a test!"};
	// string encr_res = encrypt(encr, 4);  // "This is a test!"
	// string decr_res = decrypt(decr, 4);  // "This is a test!"

	cout << encr_res << ", " << decr_res << endl;

	return 0;
}
//////////////
std::string encrypt(std::string text, int n)
{
    if (n <= 0) return text;

    const unsigned stringSize = text.size();
    
    for (unsigned i = 0; i < n; i++) 
    {
        std::string eText;
        
        for (unsigned j = 1; j < stringSize; j += 2)
            eText.push_back(text[j]); 
        for (unsigned j = 0; j < stringSize; j += 2)
            eText.push_back(text[j]);
            
        text = eText;
    }

    return text;
}

std::string decrypt(std::string text, int n)
{
    if (n <= 0) return text;

    const unsigned stringSize = text.size();
    const unsigned stringSizeHalf = stringSize / 2;
    
    for (unsigned i = 0; i < n; i++) 
    {
        std::string dText;
        
        for (unsigned j = 0; j < stringSizeHalf; j++) 
        {
            dText.push_back(text[j+stringSizeHalf]);
            dText.push_back(text[j]);
        }
        
        if (stringSize & 1)
            dText.push_back(text[stringSize - 1]);
            
        text = dText;
    }
 
    return text;
}
