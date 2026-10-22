/*
Greedy strategy
1. Sort both arrays in ascending order.
2. Use r to track the current child and l to track the current cookie.
3. If the cookie satisfies the child's greed (s[l] >= g[r]), assign it and move to the next child.
4. Whether the cookie satisfies the child or not, move to the next cookie.
5. Return r, the number of content children.
*/

/*
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int r = 0, l = 0;

        while (r < g.size() && l < s.size()) {
            if (s[l] >= g[r]) {
                r++;
            }
            l++;
        }

        return r;
    }
};
*/
/*
Complexity
- Time: (O(nlog n + mlog m)), where (n = |g|) and (m = |s|), due to sorting.
- Auxiliary space: Depends on the sorting implementation; the two-pointer scan uses (O(1)) extra space.
*/