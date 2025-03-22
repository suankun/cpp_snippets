// https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/cpp
#include <iostream>
#include <vector>
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
	std::pair <int,int> res;
	for (size_t i {}; i<numbers.size()-1; i++) {
		for (size_t j {i+1}; j<numbers.size(); j++) {
			if (numbers[i]+numbers[j]==target) {
				res.first=i;
				res.second=j;
			}
		}
	}
	
    return res;
}
//
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    for(auto i = 0; i < numbers.size(); i++)
      for(auto j = i+1; j < numbers.size(); j++)  
        if(numbers[i] + numbers[j] == target) return {i, j};
}
