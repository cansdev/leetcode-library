#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int resizeArray = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[resizeArray] = nums[i];
                resizeArray++;
            }
        }
        return resizeArray;
    }
};