#include <iostream>
#include <string>


class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string str;
        do
        {
            int temp = x % 10;
            str += std::to_string (temp);
        } while ( x /= 10 );


        for (size_t i = 0; i < str.size()/2; ++i)
        {
            if (str[i] != str[str.size()-i-1]) return false;
        }
        return true;
    }
};


int main(int argc, char* argv[])
{
    Solution x;
    for (int  y; std::cin >> y; )
    {
        std::cout << x.isPalindrome (y) << "\n";
    }
}
