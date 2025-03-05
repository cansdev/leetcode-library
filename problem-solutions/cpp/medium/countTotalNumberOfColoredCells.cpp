class Solution {
    public:
        long long coloredCells(int n) {
            if(n==1) 
                return 1;
            
            long long coloredCells = 1;
            for(int i=1; i<=n-1; i++) {
                coloredCells += 4*i;
            } 
            return coloredCells;
        }
    };