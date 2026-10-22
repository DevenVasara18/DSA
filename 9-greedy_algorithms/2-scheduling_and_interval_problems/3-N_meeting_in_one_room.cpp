/*
Approach
1. Store each meeting as {end time, start time}.
2. Sort the meetings by end time in ascending order.
3. Select the first meeting because it finishes earliest.
4. For each subsequent meeting, select it only if its start time is strictly greater than the end time of the last selected meeting.
5. Return the number of selected meetings.
*/
/*

class Solution {
public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();

        vector<pair<int, int>> meetings;

        for (int i = 0; i < n; i++) {
            meetings.push_back({end[i], start[i]});
        }

        sort(meetings.begin(), meetings.end());

        int count = 0;
        int lastEnd = -1;

        for (int i = 0; i < n; i++) {
            if (meetings[i].second > lastEnd) {
                count++;
                lastEnd = meetings[i].first;
            }
        }

        return count;
    }
};

*/
/*
Complexity
- Time: (O(nlog n)) for sorting.
- Space: (O(n)) for storing the meetings.
*/