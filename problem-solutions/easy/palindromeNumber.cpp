class Solution {
public:
    bool isPalindrome(int x) {

        //Edge cases

        if(x < 0) {return false;}
        
        else if(x == 0) {return true;}

        else if (x != 0 && x % 10 == 0) {return false;}

        //Algorithm

    int number = x;
    int digits = 0;

    while (x != 0) {
        x /= 10;
        digits++;
    }

    std::vector<int> reversedDigitArray(digits);
    std::vector<int> digitArray(digits);

    for (int i = digits - 1; i >= 0; --i) {
        digitArray[i] = number % 10;
        reversedDigitArray[digits - i - 1] = number % 10;  
        number /= 10;  
    }

    for(int i=0; i<digits/2; i++) {
        if(digitArray[i] != reversedDigitArray[i]) 
            return false;
    }
    
    return true;
    }

};