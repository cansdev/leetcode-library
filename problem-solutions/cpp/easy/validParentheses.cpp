#include <string>
#include <vector>

class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> stack;
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push_back(c);
            } else {
                if (stack.empty()) 
                    return false;
                if (c == ')' && stack.back() != '(') 
                    return false;
                if (c == '}' && stack.back() != '{') 
                    return false;
                if (c == ']' && stack.back() != '[') 
                    return false;
                
                stack.pop_back();
            }
        }
        
        // In the end, the stack should be empty for the string to be valid
        return stack.empty();
    }
};
