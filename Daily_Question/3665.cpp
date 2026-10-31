/*
1. Approach 
- Given an m × n grid containing 0 (empty cell) and 1 (mirror).
- Start from (0,0) and reach (m-1,n-1).
- The robot can move only right or down.
- If it encounters a mirror:
  - Moving right → reflected downward.
  - Moving down → reflected rightward.
- Use Dynamic Programming to count valid paths.
- Create dp[i][j][2]:
  - dp[i][j][0] = ways to arrive while moving right.
  - dp[i][j][1] = ways to arrive while moving down.
- For an empty cell, allow movement in both directions.
- For a mirror cell, change the incoming direction before continuing.
- Ignore movements outside the grid.
- Return the total ways to reach the destination modulo 1e9+7.
*/
/*

class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int mod = 1e9 + 7;

        vector<vector<vector<int>>> dp(
            m, vector<vector<int>>(n, vector<int>(2, 0))
        );

        dp[0][0][0] = 1;
        dp[0][0][1] = 1;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (i == 0 && j == 0)
                    continue;

                long long right = 0, down = 0;

                if (j > 0)
                    right = dp[i][j - 1][0];

                if (i > 0)
                    down = dp[i - 1][j][1];

                if (grid[i][j] == 1) {
                    dp[i][j][0] = down;
                    dp[i][j][1] = right;
                } else {
                    int ways = (right + down) % mod;
                    dp[i][j][0] = ways;
                    dp[i][j][1] = ways;
                }
            }
        }

        return dp[m - 1][n - 1][0];
    }
};

*/