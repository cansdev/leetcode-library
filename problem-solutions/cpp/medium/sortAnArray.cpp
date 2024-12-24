class Solution {
public:
    
    void merge(vector<int>& leftArray,
     vector<int>& rightArray,
      vector<int>& nums) {

        int leftSize = nums.size() / 2;
        int rightSize = nums.size() - leftSize;
        int i = 0, l = 0, r = 0; //indices for the vectors

        //check the conditions for merging
        while(l < leftSize && r < rightSize) {
            if(leftArray[l] < rightArray[r]) {
                nums[i] = leftArray[l];
                i++;
                l++;
             }
             else {
                nums[i] = rightArray[r];
                i++;
                r++;
             }
        }
        while(l < leftSize) {
            nums[i] = leftArray[l];
            i++;
            l++;
        }
        while(r < rightSize) {
            nums[i] = rightArray[r];
            i++;
            r++;
        }
    }

    void mergeSort(vector<int>& nums) {
        int size = nums.size();
        //base case
        if (size <= 1)
            return;
        int middle = size / 2;
        vector<int> leftArray(middle);
        vector<int> rightArray(size - middle);
        
        int i = 0; //left array
        int j = 0; //right array
        
        for(i; i<size; i++) {
            if(i < middle) {
                leftArray[i] = nums[i];
            }
            else {
                rightArray[j] = nums[i];
                j++;
            }
        }
        mergeSort(leftArray);
        mergeSort(rightArray);
        merge(leftArray, rightArray, nums);
     }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums);
        return nums;
    }
};