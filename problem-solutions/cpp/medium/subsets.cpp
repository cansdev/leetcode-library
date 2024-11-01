class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums, int index = 0, stack<int> currentSubsetStack = {}, vector<vector<int>> subsetArray = {}) {
        
        if (index == nums.size()) {
            vector<int> subset;
            stack<int> tempStack = currentSubsetStack;
            
            
            while (!tempStack.empty()) {
                subset.insert(subset.begin(), tempStack.top());
                tempStack.pop();
            }
            
            subsetArray.push_back(subset);  
            return subsetArray;
        }
        
        subsetArray = subsets(nums, index + 1, currentSubsetStack, subsetArray);
        
        currentSubsetStack.push(nums[index]);
        
        subsetArray = subsets(nums, index + 1, currentSubsetStack, subsetArray);
        
        return subsetArray;
    }
};
