/*
Approach
- Create an m × n grid filled entirely with '#', representing obstacles.
- Change every cell in the first row to '.', creating a path from the top-left corner to the top-right corner.
- Change every cell in the last column to '.', extending the path down to the bottom-right corner.
- Return the grid. All other cells remain blocked, so there is exactly one valid path: move right along the first row, then move down along the last column.
*/
/*

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));

        for (int j = 0; j < n; j++) {
            grid[0][j] = '.';
        }

        for (int i = 0; i < m; i++) {
            grid[i][n - 1] = '.';
        }

        return grid;
    }
};

*/