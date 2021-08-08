#include <iostream>
#include <string>
#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) 
    {
    	std::map <int, int> my_map;
    	for (auto& x : nums)
    	{
    		my_map[x]++;
    	}

    	for (auto& x : my_map)
    	{
    		std::cout << x.first << " " << x.second << "\n";
    	}

    	return nums;
    }
};


int main(int argc, char* argv[])
{

	Solution app;
	std::vector<int> vec {4,3,2,7,8,2,3,1};
	app.findDisappearedNumbers(vec);
	
	exit(EXIT_SUCCESS);
}