/*
Approach 
- Create a DP state dp[i][j][x] to indicate whether XOR value x is achievable at cell (i, j).
- Initialize the starting cell with its own value: dp[0][0][grid[0][0]] = true.
- For each cell, consider the reachable XOR values from the cell above and the cell to the left.
- XOR each reachable value with the current cell value and mark the resulting XOR as reachable.
- At the bottom-right cell, scan XOR values from 0 to 1023 and return the first reachable value, since it is the minimum.
*/
/*
class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<vector<bool>>> dp(
            m, vector<vector<bool>>(n, vector<bool>(1024, false))
        );

        dp[0][0][grid[0][0]] = true;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0)
                    continue;

                for (int x = 0; x < 1024; x++) {
                    if (i > 0 && dp[i - 1][j][x])
                        dp[i][j][x ^ grid[i][j]] = true;

                    if (j > 0 && dp[i][j - 1][x])
                        dp[i][j][x ^ grid[i][j]] = true;
                }
            }
        }

        for (int x = 0; x < 1024; x++) {
            if (dp[m - 1][n - 1][x])
                return x;
        }

        return 0;
    }
};

*/