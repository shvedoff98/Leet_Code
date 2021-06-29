class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        std::string str = strs.at(0);
        for (size_t i = 1; i < strs.size(); ++i)
        {
            size_t found = strs[i].find (str);
            if (found == std::string::npos)
            {
                str.resize(str.size()-1);
                if (str == "") return str;
                i = 0;
            }
            else if (found != 0)
            {
                str.resize(str.size()-1);
                if (str == "") return str;
            }
        }
        return str;
    }
};
