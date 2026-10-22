/*
Approach
1. Sort bt in ascending order so shorter jobs execute first.
2. waiting tracks the time each process must wait before execution.
3. totalWaiting accumulates the waiting times of all processes.
4. Return totalWaiting / bt.size() using integer division to get the floor of the average.
*/
/*

class Solution {
public:
    long long solve(vector<int>& bt) {
        sort(bt.begin(), bt.end());

        long long waiting = 0;
        long long totalWaiting = 0;

        for (int i = 0; i < bt.size(); i++) {
            totalWaiting += waiting;
            waiting += bt[i];
        }

        return totalWaiting / bt.size();
    }
};

*/
/*
Time: (O(nlog n)), due to sorting.
*/