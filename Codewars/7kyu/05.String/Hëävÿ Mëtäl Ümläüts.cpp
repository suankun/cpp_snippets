// https://www.codewars.com/kata/57d4e99bec16701a67000033/train/cpp
#include <iostream>
#include <string>

std::string replaceAll(std::string str, const std::string &from, const std::string &to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

std::string heavyMetalUmlauts(std::string boringText)
{
    std::string result = boringText;
    result = replaceAll(result, "A", "Ä");
    result = replaceAll(result, "O", "Ö");
    result = replaceAll(result, "a", "ä");
    result = replaceAll(result, "E", "Ë");
    result = replaceAll(result, "U", "Ü");
    result = replaceAll(result, "e", "ë");
    result = replaceAll(result, "u", "ü");
    result = replaceAll(result, "I", "Ï");
    result = replaceAll(result, "Y", "Ÿ");
    result = replaceAll(result, "i", "ï");
    result = replaceAll(result, "y", "ÿ");
    result = replaceAll(result, "o", "ö");
    return result;
}
//
std::string heavyMetalUmlauts(std::string boringText)
{
  std::string::iterator it = boringText.begin();
  std::string MyText;

  for(; it!=boringText.end(); ++it){
    switch(*it){
      case 'A': MyText.append( "\u00c4" ); break;
      case 'a': MyText.append( "\u00e4" ); break;
      case 'O': MyText.append( "\u00d6" ); break;
      case 'o': MyText.append( "\u00f6" ); break;
      case 'E': MyText.append( "\u00cb" ); break;
      case 'e': MyText.append( "\u00eb" ); break;
      case 'U': MyText.append( "\u00dc" ); break;
      case 'u': MyText.append( "\u00fc" ); break;
      case 'I': MyText.append( "\u00cf" ); break;
      case 'i': MyText.append( "\u00ef" ); break;
      case 'Y': MyText.append( "\u0178" ); break;
      case 'y': MyText.append( "\u00ff" ); break;
      default: MyText.append(1, *it);  break;
    }
  }
  return MyText;
}
