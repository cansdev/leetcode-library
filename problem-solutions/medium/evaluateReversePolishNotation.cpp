class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> stack;
        for(int i=0; i<tokens.size(); i++) {
            if(tokens[i] != "+" 
            && tokens[i] != "-" 
            && tokens[i] != "*"
            && tokens[i] != "/") {
                stack.push(stoi(tokens[i]));
                continue;
            }
            
            if(tokens[i] == "+" && !stack.empty()) {
                int t1 = stack.top();
                stack.pop();
                int t2 = stack.top();
                stack.pop();
                stack.push(t1+t2);
                t1 = 0;
                t2 = 0;
            }

            if(tokens[i] == "-" && !stack.empty()) {
                int t1 = stack.top();
                stack.pop();
                int t2 = stack.top();
                stack.pop();
                stack.push(t2-t1);
                t1 = 0;
                t2 = 0;
            }

            if(tokens[i] == "/" && !stack.empty()) {
                int t1 = stack.top();
                stack.pop();
                int t2 = stack.top();
                stack.pop();
                stack.push(t2/t1);
                t1 = 0;
                t2 = 0;
            }

            if(tokens[i] == "*" && !stack.empty()) {
                int t1 = stack.top();
                stack.pop();
                int t2 = stack.top();
                stack.pop();
                stack.push(t2*t1);
                t1 = 0;
                t2 = 0;
            }
        }

        if(!stack.empty())
            return stack.top();
        
        return 0;
        
    }
};