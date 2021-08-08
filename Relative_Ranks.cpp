#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <utility>
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
                std::cout << index << "\n";
                switch (index)
                {
                    case 1: 
                    {
                        vec.emplace_back("Gold Medal"); 
                        break;
                    }
                    case 2: 
                    {
                        vec.empec {10,3,8,9,4};
    Solution sln;lace_back("Silver Medal"); 
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

int main(int argc, char* argv[])
{
    std::vector<int> v;
    std::vector<std::string> res = sln.findRelativeRanks(vec);

    for (auto const& x : res) std::cout << x << " | ";
    std::cout << "\n";
    
    return 0x0;
}