class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if (haystack.compare(needle) == 0) return 0;
        else if (needle.size() > haystack.size()) return -1;
        
        size_t size = needle.size();
        
        for (size_t i = 0; i < haystack.size(); ++i)
        {
            std::string str = haystack.substr(i, size);
            if (str.compare (needle) == 0) return i;            
        }
        
        return -1;
    }
};
