#include <map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        std::map <int, int> my_map;
        
        for (auto const& x : nums)
        {
            my_map[x]++;
            if (my_map[x] > 1) return true;
        }
        return false;
    }
};
