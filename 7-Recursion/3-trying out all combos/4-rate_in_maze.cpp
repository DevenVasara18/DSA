/*
class Solution {
    void solve(int i, int j,
               vector<vector<int>>& a,
               int m, int n,
               vector<string>& ans,
               string move,
               vector<vector<int>>& vis,
               int di[],
               int dj[]) {

        if (i == m - 1 && j == n - 1) {
            ans.push_back(move);
            return;
        }

        string dir = "DLRU";

        for (int ind = 0; ind < 4; ind++) {

            int nexti = i + di[ind];
            int nextj = j + dj[ind];

            if (nexti >= 0 && nextj >= 0 &&
                nexti < m && nextj < n &&
                !vis[nexti][nextj] &&
                a[nexti][nextj] == 1) {

                vis[i][j] = 1;

                solve(nexti, nextj, a, m, n,
                      ans, move + dir[ind],
                      vis, di, dj);

                vis[i][j] = 0;
            }
        }
    }

public:

    vector<string> findPath(vector<vector<int>>& mtx,
                             int m, int n) {

        vector<string> ans;

        vector<vector<int>> vis(m, vector<int>(n, 0));

        int di[] = {1, 0, 0, -1};
        int dj[] = {0, -1, 1, 0};

        if (mtx[0][0] == 1) {
            solve(0, 0, mtx, m, n,
                  ans, "", vis, di, dj);
        }

        return ans;
    }
};
*/