class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> pascalsTriangle;

        if(numRows == 0) {
            return {};
        }
        
        else if(numRows == 1) {
            pascalsTriangle.push_back({1}); // First row: [1]
            return pascalsTriangle;
        }
        else if(numRows == 2) {
            pascalsTriangle.push_back({1}); // First row: [1]
            pascalsTriangle.push_back({1, 1});  // Second row: [1, 1]
            return pascalsTriangle;
        }
        
        else {
        
        pascalsTriangle.push_back({1}); // First row: [1]
        pascalsTriangle.push_back({1, 1});  // Second row: [1, 1]

        for(int i=2; i<numRows; i++) {
            vector<int> newRow(i+1, 1);
            for(int j=1; j<i; j++) {
                newRow[j] = pascalsTriangle[i-1][j] + pascalsTriangle[i-1][j-1];
            }
            pascalsTriangle.push_back(newRow);
        }

        return pascalsTriangle;

    }

    }

};