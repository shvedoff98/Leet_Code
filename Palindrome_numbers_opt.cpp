#include <map>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string str = std::to_string(x);
        size_t first = 0;
        size_t last = str.size()-1;
        while (first < last)
        {
            if (str[first] != str[last]) return false;
            ++first; --last;
        }
        return true;
    }
};
