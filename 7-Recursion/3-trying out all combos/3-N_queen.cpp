/*
class Solution {
public:

    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Check same column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0;
             i--, j--) {

            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < n;
             i--, j++) {

            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void solve(int row, int n,
               vector<string>& board,
               vector<vector<string>>& ans) {

        // All queens have been placed
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column in the current row
        for (int col = 0; col < n; col++) {

            // Check whether we can place queen here
            if (isSafe(board, row, col, n)) {

                // Choose
                board[row][col] = 'Q';

                // Explore next row
                solve(row + 1, n, board, ans);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        solve(0, n, board, ans);

        return ans;
    }
};
*/