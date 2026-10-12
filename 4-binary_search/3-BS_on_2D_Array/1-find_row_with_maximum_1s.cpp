/*
class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int ans = -1;
        int maxi = 0;

        for(int i = 0; i < n; i++) {

            int low = 0;
            int high = m;

            while(low < high) {

                int mid = low + (high - low) / 2;

                if(mat[i][mid] == 0)
                    low = mid + 1;
                else
                    high = mid;
            }

            int ones = m - low;

            if(ones > maxi) {
                maxi = ones;
                ans = i;
            }
        }

        return ans;
    }
};
*/