// https://www.codewars.com/kata/554e4a2f232cdd87d9000038/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string DNAStrand(const std::string& dna)
{
  std::string result {};
  for (size_t i {}; i < dna.length(); i++) {
    if (dna[i] == 'A')
        result += 'T';
    else if (dna[i] == 'T')
        result += 'A';
    else if (dna[i] == 'C')
        result += 'G';
    else if (dna[i] == 'G')
        result += 'C';
    else
        result += dna[i];
  }
  return result;
}

int main() {
	// string dna {"ATTGC"}; // "TAACG"
	string dna {"AAAA"}; // "TTTT"
    DNAStrand(dna);
	cout << dna << endl;
    
    return 0;
}

/////////////////////////////////////////////////////
// std::string DNAStrand(std::string dna)
// {
//   for(int i=0;i<dna.length();i++) {
//     switch (dna[i]) {
//     case 'A': dna[i]='T'; break;
//     case 'T': dna[i]='A'; break;
//     case 'C': dna[i]='G'; break;
//     case 'G': dna[i]='C'; break;
//     }
//   }
//   return dna;
// }