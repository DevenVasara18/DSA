/*
Approach 
- Traverse the entire grid using two nested loops.
- Whenever a cell contains a positive value, start a DFS to explore its entire connected island.
- Add the values of all connected cells to calculate the island's total sum.
- Mark every visited cell as 0 so that the same island is not counted again.
- After DFS finishes, check whether sum % k == 0. If true, increment count.
- Return count after processing the entire grid.
*/
/*

class Solution {
public:
    int m, n;

    long long dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= m || c >= n ||
            grid[r][c] == 0) {
            return 0;
        }

        long long sum = grid[r][c];
        grid[r][c] = 0;

        sum += dfs(grid, r + 1, c);
        sum += dfs(grid, r - 1, c);
        sum += dfs(grid, r, c + 1);
        sum += dfs(grid, r, c - 1);

        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    long long sum = dfs(grid, i, j);

                    if (sum % k == 0) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};

*/