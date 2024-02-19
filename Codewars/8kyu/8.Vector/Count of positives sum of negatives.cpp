#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int positives {}, negatives {};
    for (auto num: input) {
      if (num == 0)
        continue;
      else if (num > 0)
        positives++;
      else
        negatives += num;
    }  
    std::vector <int> res_vector {};
    if (positives == 0 && negatives == 0)
      return res_vector;
    res_vector.push_back(positives);
    res_vector.push_back(negatives);
    return res_vector;
}

///////////////////////////////////////////////////////////////////

// #include <vector>

// std::vector<int> countPositivesSumNegatives(std::vector<int> input)
// {
//     if(input.empty())
//       return {};
//     int countPositives {0}, sumNegatives {0};
//     for(int x: input)
//       x>0 ? countPositives++ : (x!=0 ? sumNegatives+=x : 0);
//     return {countPositives, sumNegatives};
// }