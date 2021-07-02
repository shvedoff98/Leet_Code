#include <algorithm>
#include <iostream>
#include <vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) 
    {
        auto it = std::remove_if (nums.begin(), nums.end(), [&] (int& x ) {
                                        return x == val; });

	std::cout << *it << "\n";
	size_t size = std::distance (nums.begin(), it);
	nums.resize(size);
	for (auto& x : nums) std::cout << x << " ";
	std::cout << "\n";
        return nums.size();
    }
};

int main(int, char**)
{
	std::vector<int> vec {3,2,2,3};
	int num {3};
	Solution obj;
	std::cout << obj.removeElement (vec, num) << "\n";
	exit (EXIT_SUCCESS);
}
