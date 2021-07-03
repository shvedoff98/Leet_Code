#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) 
    {
    	std::vector<int> res;
    	std::vector <int> vec (nums.size()+1, 0);
    	for (size_t i = 0; i < nums.size(); ++i)
    	{
    		vec[nums[i]] = 1;
    	}

    	for (size_t i = 1; i < vec.size(); ++i)
    	{
    		if (vec[i] == 0) res.push_back (i);
    	}

    	return res;
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