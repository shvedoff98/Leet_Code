#include <map>
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string str = std::to_string(x);
        size_t first = 0;
        size_t last = str.size()-1;
        while (first < last)
        {
            if (str[first] != str[last]) return false;
            ++first; --last;
        }
        return true;
    }

    istream& read_word (istream& is, char* buffer, int max)
    {
        is.width(max);
        is >> buffer;
        return is;
    }
};


int main(int argc, char* argv[])
{
    Solution y;
    for (int x; std::cin >> x; )
    {
        if ( y.isPalindrome (x) == 0 ) std::cout << x <<  " is not Palindrome.\n"; 
        else std::cout << x << " is a Palindrome.\n";
    }
}
