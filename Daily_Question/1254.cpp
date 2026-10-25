/*
Approach (Pointers)
- Traverse every cell in the grid.
- Whenever you find an unvisited land cell (0), start a DFS to explore its entire connected island.
- During DFS, check whether any cell of that island touches the grid boundary.
- If the island touches any boundary, it is not a closed island, because it can connect to the outside.
- If the entire island is explored without touching the boundary, increment the closed-island count.
- Mark visited land cells as water (1) to avoid counting the same island again.
*/
/*

class Solution {
public:
    int rows, cols;

    bool dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols)
            return false;

        if (grid[r][c] == 1)
            return true;

        grid[r][c] = 1;

        bool closed = true;

        if (!dfs(grid, r + 1, c)) closed = false;
        if (!dfs(grid, r - 1, c)) closed = false;
        if (!dfs(grid, r, c + 1)) closed = false;
        if (!dfs(grid, r, c - 1)) closed = false;

        return closed;
    }

    int closedIsland(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        int count = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(grid, i, j))
                        count++;
                }
            }
        }

        return count;
    }
};

*/