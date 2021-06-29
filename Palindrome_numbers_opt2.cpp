#include <iostream>
#include <map>
#include <map>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::map <int, int> mp;
        do
        {
            int temp = x % 10;
            ++mp[temp];
        } while (x /= 10);

        for (auto& x : mp)
        {
        }
        return true;
    }
};


int main(int argc, char* argv[])
{
    Solution x;
    std::cout << x.isPalindrome (234555432) << "\n";
}
