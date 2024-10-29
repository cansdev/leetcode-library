class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1It = 0;  
        int nums2It = 0;  
        int insertPos = 0;  

        vector<int> nums1Copy(nums1.begin(), nums1.begin() + m);

        while (nums1It < m && nums2It < n) {
            if (nums1Copy[nums1It] < nums2[nums2It]) {
                nums1[insertPos] = nums1Copy[nums1It];
                nums1It++;
            } else {
                nums1[insertPos] = nums2[nums2It];
                nums2It++;
            }
            insertPos++;
        }

        while (nums1It < m) {
            nums1[insertPos] = nums1Copy[nums1It];
            nums1It++;
            insertPos++;
        }

        while (nums2It < n) {
            nums1[insertPos] = nums2[nums2It];
            nums2It++;
            insertPos++;
        }
    }
};
