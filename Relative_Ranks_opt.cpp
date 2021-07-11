#include <vector>
#include <algorithm>
#include <iterator>
#include <set>
#include <iostream>
#include <queue>


class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) 
    {
        std::vector<std::string> vec (score.size());
        std::priority_queue<std::pair<int, int>> QUEUE;

        for (size_t i = 0; i < score.size(); ++i) QUEUE.push ({score[i], i});

        int count {0};
        while (!QUEUE.empty())
        {
            ++count;
            int temp = QUEUE.top().second;  
            QUEUE.pop();  
            if (count == 1 ) vec[temp] = ("Gold Medal");
            else if (count == 2) vec[temp]= ("Silver Medal");
            else if (count == 3) vec[temp] = ("Bronze Medal");
            else vec[temp] = std::to_string(count);
        }
        return vec;
    }
};

int main(int argc, char* argv[])
{
    std::vector<int> vec {10,3,8,9,4};
    Solution sln;
    std::vector<std::string> res = sln.findRelativeRanks(vec);

    for (auto const& x : res) std::cout << x << " | ";
    std::cout << "\n";
    
    return 0x0;
}
