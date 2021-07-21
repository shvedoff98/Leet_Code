#include <algorithm>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) 
    {
        int result {0};
        for (auto& x : nums)
        {
            int how_much = std::count (nums.begin(), nums.end(), x);
            if ( how_much == 1 ) 
            {
                result = x;
                return result;
            }
        }
        return result;
    }
};
