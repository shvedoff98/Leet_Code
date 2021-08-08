#include <iostream>
#include <map>
#include <string>

class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) 
    {
        std::map <char, std::string> MAP;
        std::string word;

        for (size_t i = 0, j = 0; i < s.size() && j < pattern.size(); ++i)
        {
            if (s[i] == ' ' || i == s.size())
            {
                auto found = MAP.find (pattern[j]);
                if (found != MAP.end())
                {
                    if (found->second == word) 
                    {
                        word = "";
                        ++j;
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    MAP[pattern[j]] = word;
                    ++j;
                    word = "";
                    continue;
                }
            }
            word += s[i];
        }

        return true;    
    }
};

int main(int argc, char* argv[])
{
    Solution obj;
    std::string str1 = "abba", str2 = "dog dog dog dog";

    std::cout << obj.wordPattern (str1, str2) << "\n";


}