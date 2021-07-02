#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        std::string res, temp;
        char space {' '};
        
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (isalpha(s[i])) 
            {
                temp += s[i];
                continue;
            }
            else if (s[i] == space) 
            {
                if (!temp.empty())
                    res = temp;
                temp = "";
                continue;
            }
            else if (i == s.size()-1 && s[i] != space)
            {
                temp += s[i];
                res = temp;
                return res.size();
            }
        }
        
        if (res.empty() || s[s.size()-1] != space) res = temp;
        return res.size();
    }
};

int main(int argc, char* argv[])
{
    std::string str = "b   a    ";
    Solution obj;
    std::cout << obj.lengthOfLastWord(str) << "\n";
}