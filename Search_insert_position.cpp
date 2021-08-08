#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

class Solution {
public:
	int searchInsert(std::vector<int>& nums, int target) 
	{
		std::vector<int>::iterator it=std::find(nums.begin(),nums.end(),target);
		if( it!= nums.end())
		{
			return(it-nums.begin());
		}
		else
		{
			it=std::upper_bound(nums.begin(),nums.end(),target);
			return(it-nums.begin());
		}
	}
};

int main(int argc, char* argv[])
{
	Solution obj;

	std::vector<int> vec {3,4,5,10};
	int num = 2;

	std::cout << obj.searchInsert(vec, num) << "\n";
}