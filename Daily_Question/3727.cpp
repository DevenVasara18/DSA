/*
Approach — LeetCode 3727
Greedy + Sorting
1. Square every element: Since the score uses squares, negative and positive numbers with the same absolute value have the same contribution.
2. Sort the squared values in ascending order.
3. Assign signs optimally: The score alternates between addition and subtraction. To maximize it, place the largest \(\lceil n/2\rceil\) squared values in positive positions and the smallest \(\lfloor n/2\rfloor\) squared values in negative positions.
4. Calculate the answer: Add the larger squared values and subtract the smaller squared values.
Example: nums = [1, 2, 3]
Squared and sorted array: [1, 4, 9]
Maximum score: (9+4-1=12).
Time Complexity: (O(nlog n)) due to sorting.
Space Complexity: (O(n)) for storing the squared values.
*/

/*

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sq;

        for (int x : nums) {
            sq.push_back(1LL * x * x);
        }

        sort(sq.begin(), sq.end());

        long long score = 0;
        int n = sq.size();

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                score -= sq[i];
            } else {
                score += sq[i];
            }
        }

        return score;
    }
};

*/