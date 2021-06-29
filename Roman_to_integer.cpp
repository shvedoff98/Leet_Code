#include <map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) 
    {
        int result {0}, temp;
        
        std::map<char, int> mp {
           {'I',     1},
           {'V',     5},
           {'X',    10},
           {'L',    50},
           {'C',   100},
           {'D',   500},
           {'M',  1000}
        };
        
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (mp[s[i+1]] > mp[s[i]])
            {
                result += mp[s[i+1]] - mp[s[i]];
                ++i;
            }
            else
            {
                result += mp[s[i]];
            }
        }
        return result;
        
    }        
};
