class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            bool pairFound = false;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == nums[j] && i != j) {
                    pairFound = true;
                    break;
                }
            }
            if(!pairFound) {
                return nums[i];
            }
        }
        return 0; 
    }
};
