/*
Approach
1. Sort jobs by profit: Highest profit first using the comparator a[2] > b[2].
2. Find the maximum deadline: This determines how many time slots are needed.
3. Schedule each job: For every job, search backward from its deadline for the latest available slot.
4. Update the answer: If a free slot exists, schedule the job and add its profit and job count.
*/
/*

class Solution {
public:
    vector<int> JobScheduling(vector<vector<int>>& Jobs) {
        sort(Jobs.begin(), Jobs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[2] > b[2];
             });

        int n = Jobs.size();
        int maxDeadline = 0;

        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, Jobs[i][1]);
        }

        vector<int> slots(maxDeadline + 1, -1);
        int count = 0, profit = 0;

        for (int i = 0; i < n; i++) {
            int id = Jobs[i][0];
            int deadline = Jobs[i][1];
            int jobProfit = Jobs[i][2];

            for (int t = deadline; t >= 1; t--) {
                if (slots[t] == -1) {
                    slots[t] = id;
                    count++;
                    profit += jobProfit;
                    break;
                }
            }
        }

        return {count, profit};
    }
};

*/
/*
Complexity
Let (n) be the number of jobs and (D) the maximum deadline.
- Time: (O(nlog n+nD)) in the worst case.
- Space: (O(D)) for the scheduling slots.
*/