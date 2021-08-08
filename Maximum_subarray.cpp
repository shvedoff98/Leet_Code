#include <iostream>
#include <vector>

#define MAX(a,b) ((a) > (b) ? (a) : (a == b) ? a : b;
#define SUM(a,b) ((a) + (b));

class Solution 
{

public:

    int maxSubArray(std::vector<int> nums) 
    {
    	int result_sum {0};
    	size_t low = 0;
    	size_t high = nums.size()-1;
    	size_t mid = low + (high - low);

    	while (true)
    	{
    		int first = sum (nums, low, mid);
    		int second = sum (nums, mid, high);
    		int third = sum (nums, low, high);
            std::cout << first << " " << second << " " << third << "\n";
            std::cout << SUM (first, second ); std::cout  << "\n";
    		break;
    	}
    }

    int sum (std::vector<int> nums, size_t low, size_t high)
    {
    	int sum {0};
    	for (size_t i = low; i <= high; ++i)
    	{
    		sum = sum + nums[i];
    	}
    	return sum;
    }
};

int main (int argc, char* argv[])
{
	Solution obj;
	obj.maxSubArray ({-2,1,-3,4,-1,2,1,-5,4});
}
