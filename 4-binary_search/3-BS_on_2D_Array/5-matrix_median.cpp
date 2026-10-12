/*
class Solution
{
    public:
    int findMedian(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = matrix[0][0];
        int high = matrix[0][cols - 1];
        for (int i = 1; i < rows; i++)
        {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][cols - 1]);
        }
        int required = (rows * cols + 1) / 2;
        while (low < high)
        {
            int mid = (low + high) / 2;
            int count = 0;
            for (int i = 0; i < rows; i++)
            {
                count += upper_bound(matrix[i].begin(),
                matrix[i].end(),
                mid) -
                matrix[i].begin();
            }
            if (count < required)
            low = mid + 1;
            else
            high = mid;
        }
        return low;
    }
};

*/