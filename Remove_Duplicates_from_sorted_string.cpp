class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        std::vector <int> vec;
        for (auto& x : nums)
        {
            if (vec.empty() || vec.at(vec.size()-1) != x)
                vec.push_back (x);
            
        }
        nums = vec;
        return nums.size();
    }
};
