#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector <int> result;
        
        try
        {
            for (auto& x : nums1)
            {
                bool add = false;
                auto found = find (nums2.begin(), nums2.end(), x);
                if (found != nums2.end())
                {
                    size_t dist = distance (nums2.begin(), found);
                    
                    for (auto iter = nums2.begin()+dist; iter != nums2.end(); ++iter)
                    {
                        if (*iter > x)
                        {
                            result.push_back (*iter);
                            add = true;
                            break;
                        }   
                    }
                    if (!add)
                        result.push_back(-1);
                }
            }
        }
        catch (exception& exc)
        {
            std::cout << exc.what() << "runtime error. Aborted.\n";
        }
        
        return result;
    }
};
