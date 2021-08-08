#include <unordered_map>
#include <algorithm>
#include <vector>


class Solution {
public:
    int singleNumber(std::vector<int>& nums) 
    {
        std::unordered_map <int, int> MAP;
        int result {0};
        for (auto& x : nums)
        {
            MAP[x]++;
        }
        
        for (auto& x : nums)
        {
            auto found = MAP.find (x);
            if (found != MAP.end() && found->second == 1)
                return result = x;
                
        }
        return result;
    }
};
