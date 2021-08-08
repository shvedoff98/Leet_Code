#include <algorithm>
#include <set>
#include <numeric>


class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        std::set <int> SET (nums.begin(), nums.end());
        
        return 2*std::accumulate (SET.begin(), SET.end(), 0) - 
            std::accumulate (nums.begin(), nums.end(), 0);
    }
};
