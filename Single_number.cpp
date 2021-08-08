#include <map>
#include <algorithm>
#include <utility>
#include <vector>
#include <iostream>




struct COM_VAL
{
    bool operator() (std::pair<int, int> x, std::pair<int, int> y )
    {
        return x.second < y.second;
    }
};

class Solution {
public:
    int singleNumber(std::vector<int>& nums) 
    {
        
    }
};

int main (int argc, char* argv[])
{
    Solution obj;

    std::vector <int> vec {4, 1, 1, 2, 2, 3, 3};

    int num = obj.singleNumber (vec);

    std::cout << num << "\n";

    return 0;

}