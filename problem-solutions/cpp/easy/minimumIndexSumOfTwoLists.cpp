class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> commonStrings;
        int minIndexSum = INT_MAX;

        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] == list2[j]) {
                    int indexSum = i + j;
                    
                    if (indexSum < minIndexSum) {
                        minIndexSum = indexSum;
                        commonStrings.clear();
                        commonStrings.push_back(list1[i]);
                    }
                    else if (indexSum == minIndexSum) {
                        commonStrings.push_back(list1[i]);
                    }
                    break;
                }
            }
        }
        
        return commonStrings;
    }
};
