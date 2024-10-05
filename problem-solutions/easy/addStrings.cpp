class Solution {
public:
    string addStrings(string num1, string num2) {

        string answer;
        int carry = 0;
        int sum = 0;
        vector<int> intNum1(num1.size());
        vector<int> intNum2(num2.size()); 
        vector<int> intSum;

        for(int i=0; i<num1.size(); i++) {
            intNum1[i] = num1[i] - '0'; 
        }
        for(int j=0; j<num2.size(); j++) {
            intNum2[j] = num2[j] - '0'; 
        }

        while(intNum1.size() != 0 && intNum2.size() != 0) {
            sum = intNum1.back() + intNum2.back() + carry;
            
            if(sum >= 10) {
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }
            
            intSum.push_back(sum);
            intNum1.pop_back();
            intNum2.pop_back();
        }

        while(intNum1.size() != 0) {
            sum = intNum1.back() + carry; 
            if (sum >= 10) {
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }
            intSum.push_back(sum);
            intNum1.pop_back();
        }

        while(intNum2.size() != 0) {
            sum = intNum2.back() + carry; 
            if (sum >= 10) {
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }
            intSum.push_back(sum);
            intNum2.pop_back();
        }

        if (carry > 0) {
            intSum.push_back(carry);
        }

        reverse(intSum.begin(), intSum.end());

        for(int num : intSum) {
            answer.append(1, num + '0'); 
        }

        return answer;
    }
};
