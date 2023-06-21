// https://www.codewars.com/kata/5d49c93d089c6e000ff8428c/train/cpp
#include <vector>

int save(std::vector<int> sizes, int hd) {
  int count {}, capacity {};
  for (size_t i {}; i<sizes.size(); i++) {
    capacity+=sizes[i];
    if (capacity>hd) break;
    else count++;
  }
  return count;
}
///////////////////
#include <vector>

int save(std::vector<int> sizes, int hd) {

    int total = 0;
    int i;
    
    for(i = 0; i < sizes.size(); i++){
        total += sizes[i];
        if( total > hd ) break;       
    }
    
    return i;
}
