#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> answerArray;
    
    for(int j=0; j<nums.size(); j++) {
        for(int i=0; i<nums.size(); i++) {
            if (target - nums[i] == nums[j] && i != j) {
                answerArray.push_back(j);
            }
        }
    }

    return answerArray;   

    }
};
