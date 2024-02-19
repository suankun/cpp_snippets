#include <iostream>
#include <string>
using namespace std;

std::string DNAtoRNA(std::string dna){
  std::string res;
  for (size_t i {}; i < dna.length(); i++) {
    if (dna[i] == 'T') res += 'U';
    else res += dna[i];
  }
  return res;
}

int main() {
    string dna {"GCAT"}; // GCAU
    string result = DNAtoRNA(dna);

    cout << result << endl;

    return 0;
}

/////////////////////////////////////////////////////
// std::string DNAtoRNA(std::string dna){
//   std::replace(dna.begin(), dna.end(), 'T', 'U');
//   return dna;
// }