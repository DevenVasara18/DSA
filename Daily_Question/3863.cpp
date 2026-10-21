/*
Approach
The key observation is that we only need to check the positions of the smallest and largest characters.
1. If the string is already sorted, return 0.
2. If its length is 2 and it is unsorted, return -1, because sorting the entire string is forbidden.
3. If the smallest character is already first, or the largest character is already last, return 1.
4. If the smallest or largest character is somewhere in the middle, return 2.
5. Otherwise, return 3.
*/
/*

class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted)
            return 0;

        if (n == 2)
            return -1;

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s[0] == mn || s[n - 1] == mx)
            return 1;

        for (int i = 1; i < n - 1; i++) {
            if (s[i] == mn || s[i] == mx)
                return 2;
        }

        return 3;
    }
};

*/
/*
Complexity
- Time: (O(n))
- Space: (O(1)) auxiliary space
*/