#include <algorithm>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end() );
        //Edge cases

        if(nums.size() < 2) 
            return false;

        if(nums[0] == nums[1])
            return true;
        
        else if(nums.size() == 2) {
            if(nums[0] == nums[1]) 
                return true;
        }

        else if(nums[nums.size() -2] ==  nums[nums.size() - 1]) 
            return true;

        else if(nums[nums.size() -1] == nums[0])
            return true; 
        
        //Iterating over array 
        for(int i=1; i<nums.size() - 1; i++) {
            if(nums[i] == nums[i+1] || nums[i] == nums[i-1]) 
                return true;
        }
        return false;
    }
};