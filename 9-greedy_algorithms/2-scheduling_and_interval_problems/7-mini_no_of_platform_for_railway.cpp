/*
Approach
- Store all starting times in start and ending times in end, then sort both arrays.
- Initialize i = 0 and j = 0 to track the next start and the earliest ending time.
- If start[i] <= end[j], a new interval starts before or when the earliest interval ends, so increment count and update maxCount.
- Otherwise, an interval has ended before the next interval starts, so decrement count and advance j.
- Continue until all starting times are processed.
- Return maxCount, which represents the maximum number of overlapping intervals and therefore the minimum number of groups required.
*/
/*

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start, end;

        for (int i = 0; i < intervals.size(); i++) {
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int i = 0, j = 0;
        int count = 0, maxCount = 0;
        int n = intervals.size();

        while (i < n) {
            if (start[i] <= end[j]) {
                count++;
                maxCount = max(maxCount, count);
                i++;
            } else {
                count--;
                j++;
            }
        }

        return maxCount;
    }
};

*/