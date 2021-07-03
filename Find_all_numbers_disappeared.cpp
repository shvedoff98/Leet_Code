#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) 
    {
    	std::vector <int> vec;
    	std::map <int, int> my_map;
    	for (auto& x : nums)
    	{
    		my_map[x]++;
    	}

    	for (size_t i = 1; i < nums.size(); ++i)
    	{
    		if (my_map[i] == 0)
    			vec.push_back(i);
    	}

    	return vec;
    }

};


int main(int argc, char* argv[])
{

	Solution app;
	std::vector<int> vec {4,3,2,7,8,2,3,1};
	std::vector<int> res = app.findDisappearedNumbers(vec);
	for (auto& x : res) std::cout << x << " ";
	std::cout << "\n";
	exit(EXIT_SUCCESS);
}