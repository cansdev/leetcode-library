class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> solutionArray(nums1.size()); // Match size with nums1
        int solutionIndex = 0; 
        stack<int> stack;

        for (int i = 0; i < nums1.size(); i++) {
            bool found = false; // Flag to check if nums1[i] is in nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    found = true; // Found nums1[i] in nums2
                }
                if (found && nums2[j] > nums1[i]) { // Find the next greater
                    stack.push(nums2[j]);
                    break;
                }
            }
            if (stack.empty()) {
                solutionArray[solutionIndex++] = -1; // No greater element found
            } else {
                solutionArray[solutionIndex++] = stack.top(); // Push result
                stack.pop();
            }
        }

        return solutionArray;
    }
};
