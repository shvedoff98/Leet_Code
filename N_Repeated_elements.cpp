#include <vector>
#include <map>
#include <iostream>

class Solution 
{
public:
    int repeatedNTimes(std::vector<int>& nums) 
    {
        int res {0};
        std::map <int, int> mp;
        
        for (auto& x : nums)
        {
            mp[x]++;
            if (mp[x] > 1)
            {
                res = x;
                return res;
            }
        }
        return res;
    }
};

int main(int argc, char* argv[])
{
    Solution app;
    std::vector<int>vec {5,1,5,2,5,3,5,4};
    std::cout << app.repeatedNTimes (vec) << "\n";
    return 0x00;
}
