class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int answer;
        answer = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(abs(nums[i]) <= abs(answer)) {
                answer = nums[i];
                if(abs(nums[i-1]) == abs(answer)) 
                    answer = max(nums[i-1], answer);
                if(abs(nums[0]) == abs(answer))
                    answer = max(nums[0], answer);
            }
                
        }
        return answer;        
    }
};

