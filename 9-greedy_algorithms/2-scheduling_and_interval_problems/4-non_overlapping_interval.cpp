/*
Steps:
1. Sort intervals by their ending times.
2. Select the first interval.
3. For each next interval:
   - If start >= previousEnd, keep it.
   - Otherwise, remove it.
4. Return the number of removed intervals.
*/
/*

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 0;
        int prevEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= prevEnd) {
                prevEnd = intervals[i][1];
            } else {
                count++;
            }
        }

        return count;
    }
};

*/