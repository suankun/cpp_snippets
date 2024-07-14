// https://www.codewars.com/kata/58989a079c70093f3e00008d/train/cpp
#include <vector>

std::vector<std::vector<int>> cartesianNeighbor(int x, int y) {
    return {
        {x-1, y-1}, {x-1, y}, {x-1, y+1},
        {x, y-1}, {x, y+1},
        {x+1, y-1}, {x+1, y}, {x+1, y+1}
    };
}
//
#include <vector>
using std::vector;

vector< vector<int> > cartesianNeighbor(int x, int y){
	vector< vector<int> > res;

	for (int i : {0, -1, 1})
	{
		for (int j : {0, -1, 1})
		{
			if ((i == 0) && (j == 0))
				continue;

			res.push_back({x+i, y+j});
		}
	}

	return res;
}
