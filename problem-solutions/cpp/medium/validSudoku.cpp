#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Helper function
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            vector<bool> rowCheck(9, false), colCheck(9, false), gridCheck(9, false);

            for (int j = 0; j < 9; j++) {
                // Check the row
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    if (rowCheck[num]) return false;
                    rowCheck[num] = true;
                }

                // Check the column
                if (board[j][i] != '.') {
                    int num = board[j][i] - '1';
                    if (colCheck[num]) return false;
                    colCheck[num] = true;
                }

                // Check the 3x3 subgrid
                int rowIndex = 3 * (i / 3) + j / 3;
                int colIndex = 3 * (i % 3) + j % 3;
                if (board[rowIndex][colIndex] != '.') {
                    int num = board[rowIndex][colIndex] - '1';
                    if (gridCheck[num]) return false;
                    gridCheck[num] = true;
                }
            }
        }
        return true;  // Valid Sudoku
    }

    bool isValid(vector<vector<char>>& board, int num, int row, int col) {

        char c = num + '0';  

        for (int i = 0; i < 9; i++) {
            if (board[row][i] == c || board[i][col] == c)
                return false;
        }

        int startRow = row - row % 3, startCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i + startRow][j + startCol] == c)
                    return false;
            }
        }
        return true;
    }

};
