// https://www.codewars.com/kata/6167e70fc9bd9b00565ffa4e/train/cpp
#include <vector>
#include <algorithm>
#include <numeric>

int barista(const std::vector<int>& v){
    std::vector<int> new_durations = v;
    std::sort(new_durations.begin(), new_durations.end());

    int waiting_time = 0;
    std::vector<int> list;

    for (size_t index = 0; index < new_durations.size(); ++index) {
        if (index == 0) {
            waiting_time = new_durations[index];
        } else {
            waiting_time += 2 + new_durations[index];
        }
        list.push_back(waiting_time);
    }

    int result = std::accumulate(list.begin(), list.end(), 0);
    return result;
}
//
int barista( const std::vector< int >& v ) {
    std::vector< int > s( v );
    sort( s.begin(), s.end() );
    int total{};
    for ( int t{}; const int i : s )
        total += ( t += i + 2 ) - 2;
    return total;
}
