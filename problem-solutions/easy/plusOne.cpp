class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        bool isAllNine = true;
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] != 9) {
                isAllNine = false;
                break;
            }
        }

        if (isAllNine) {
            vector<int> answer(digits.size() + 1, 0);  
            answer[0] = 1;
            return answer;
        }

        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;  
                return digits;
            }
            digits[i] = 0;  
        }

        return digits;  
    }
};
