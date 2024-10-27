class Solution {
public:
    int climbStairs(int n) {

        if (n <= 2) 
            return n;
        
        int lookup_table[100] ={0}; 
        lookup_table[1] = 1;
        lookup_table[2] = 2;
        
        for (int i = 3; i <= n; i++) {
            lookup_table[i] = lookup_table[i - 1] + lookup_table[i - 2];
        }
        
        return lookup_table[n];
    }
};
