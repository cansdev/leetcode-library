class Solution {
public:
    int lengthOfLastWord(string s) {

        int length = 0;

        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] != ' ')
                    break;
            while(s[i] == ' ') 
                s[i]='0';
            
        }

        cout<<s<<endl;

        for(int i=s.size()-1; i>=0; i--) {

            if(s[i] == '0')
                continue;
            
            else if(s[i] == ' ')
                break;
            length++;
               
        }

        return length;
        
    }
};