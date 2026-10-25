/*
Approach
- Sort the intervals in ascending order based on their starting times.
- Create a result array and insert the first interval into it.
- Traverse the remaining intervals one by one.
- If the current interval starts before or at the ending point of the last interval in the result, they overlap. Merge them by updating the ending point to the maximum of both ending points.
- Otherwise, add the current interval as a new interval to the result.
- Return the result array.
*/
/*

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (int i = 0; i < intervals.size(); i++) {
            if (ans.empty() || ans.back()[1] < intervals[i][0]) {
                ans.push_back(intervals[i]);
            } else {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }
};

*/