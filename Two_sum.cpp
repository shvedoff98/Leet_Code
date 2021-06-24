#include <unordered_map>
#include <utility>
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
	std::vector<int> res;
	using IT_MP = std::unordered_multimap<int, int>::iterator;
	using IT_VEC = std::vector<int>::iterator;

	std::unordered_multimap<int, int> mt_mp;

	for (size_t i = 0; i< nums.size(); ++i)
	{
	    mt_mp.insert(std::make_pair(nums[i],i));
	}

	for ( IT_VEC it = nums.begin(); it != nums.end(); ++it)
	{
	    int temp = target - *it;

	    IT_MP jt = mt_mp.find (temp);

	    int index = std::distance(nums.begin(), it);
	    if (jt != mt_mp.end() && index != jt->second)
	    {
		if (jt->second > index)
		{
		    res.emplace_back (index);
		    res.emplace_back (jt->second);
		}
		else if (jt->second < index)
		{
		    res.emplace_back (jt->second);
		    res.emplace_back (index);
		}
		return res;
	    }
	}
	return res;
    }
};

int main(int, char**)
{
    Solution obj;
    std::vector<int> vec {2, 7, 11, 15};
    std::vector<int> res = obj.twoSum (vec, 9);
    for (auto& x : res)
    {
	std::cout << x << " ";
    }

    std::cout << "\n";
}
