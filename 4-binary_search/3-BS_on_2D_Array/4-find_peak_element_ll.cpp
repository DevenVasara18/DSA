/*
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            int rowIndex = 0;

            for(int i = 1; i < n; i++){
                if(mat[i][mid] > mat[rowIndex][mid]){
                    rowIndex = i;
                }
            }

            int left = (mid == 0) ? -1 : mat[rowIndex][mid - 1];
            int right = (mid == m - 1) ? -1 : mat[rowIndex][mid + 1];

            if(mat[rowIndex][mid] > left &&
               mat[rowIndex][mid] > right){
                return {rowIndex, mid};
            }
            else if(left > mat[rowIndex][mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return {-1,-1};
    }
};
*/