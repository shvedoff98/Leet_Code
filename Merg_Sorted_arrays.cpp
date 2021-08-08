#include <vector>
#include <string>
#include <iostream>


class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
    {
        std::vector <int> res;
        size_t first {0}, second {0}, third {0};

        while (true)
        {
            if (first = m)
            {
                nums1=nums2;
                return;
            }
            else if (second = n)
                return;

            res[third++] = (nums2[second] < nums1[first]) ? nums2[second++] : nums1[first++];
        }

        for (auto& x : res) std::cout << x << " ";
        std::cout << "\n";
    }
};

int main(int argc, char* argv[])
{
    Solution app;
    std::vector <int> vec1 {1,2,3,0,0,0};
    std::vector <int> vec2 {2,5,6};
    app.merge(vec1, 3, vec2, 3);
}