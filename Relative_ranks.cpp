#include <vector>
#include <algorithm>
#include <iterator>
#include <set>


class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) 
    {
        std::vector <std::string> vec;
        std::set <int, std::greater<int>> SET (score.begin(), score.end());

        for (auto const& x : score)
        {
            size_t index;
            auto found = SET.find(x);
            if (found != SET.end())
            {
                index = std::distance (SET.begin(), found) + 1 ;
                switch (index)
                {
                    case 1: 
                    {
                        vec.emplace_back("Gold Medal"); 
                        break;
                    }
                    case 2: 
                    {
                        vec.emplace_back("Silver Medal"); 
                        break;
                    }
                    case 3:
                    {
                         vec.emplace_back("Bronze Medal");
                          break;
                    }
                    default: 
                    {
                        vec.emplace_back(std::to_string(index)); 
                        break;             
                    }
                }
            }
        }
        return vec;
    }
};
