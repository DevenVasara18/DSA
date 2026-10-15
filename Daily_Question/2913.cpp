/*
The approach is Brute Force using three variables/loops and a seen array.
Step-by-step approach
1. Initialize ans = 0 to store the final sum and get the size of the array n.
2. Use an outer loop with i from 0 to n-1. This selects the starting index of each subarray.
3. Create a seen[101] array initialized to 0 and set distinct = 0. This tracks distinct elements for the current starting index.
4. Use an inner loop with j from i to n-1. This selects the ending index of the subarray.
5. Check whether nums[j] has appeared before:
- If seen[nums[j]] == 0, mark it as 1 and increment distinct.
- Otherwise, do not change distinct.
6. Calculate the square of the distinct count and add it to the answer:
ans = ans + distinct * distinct
7. After processing all subarrays, return ans.
*/

/*
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int seen[101] = {0};
            int distinct = 0;

            for (int j = i; j < n; j++) {
                if (seen[nums[j]] == 0) {
                    seen[nums[j]] = 1;
                    distinct++;
                }

                ans += distinct * distinct;
            }
        }

        return ans;
    }
};

*/