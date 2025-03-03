class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> partitionedArray;
            vector<int> beforePivot;
            vector<int> betweenPivot;
            vector<int> afterPivot;
    
            // make single pass and populate arrays
           for(int &num : nums) {
               if (num < pivot) {
                   beforePivot.push_back(num);
               }
               else if (num > pivot) {
                   afterPivot.push_back(num);
               } 
               else {
                   betweenPivot.push_back(num);
               }
           }
    
            // populate partitionedArray in relative order using three passes
            for(int &num : beforePivot) {
                partitionedArray.push_back(num);
            }
            for(int &num : betweenPivot) {
                partitionedArray.push_back(num);
            }
            for(int &num : afterPivot) {
                partitionedArray.push_back(num);
            }
    
            return partitionedArray;
        }
    };