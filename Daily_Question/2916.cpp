/*
Approach
For every index i, consider all subarrays ending at i.
- Let dp[j] represent the number of distinct elements in subarray nums[j...i].
- When adding nums[i], the distinct count increases by 1 only for subarrays whose starting index is after the previous occurrence of nums[i].
- We need the sum of squares of these distinct counts over all subarrays.
- A segment tree supports range increment updates and maintains both the sum and sum of squares efficiently.
*/
/*
class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct Node {
        long long sum = 0, sq = 0, lazy = 0;
    };

    vector<Node> tree;
    int n;

    void apply(int node, int l, int r, long long val) {
        long long len = r - l + 1;
        tree[node].sq = (tree[node].sq + 2 * val % MOD * tree[node].sum
                         + len % MOD * val % MOD * val) % MOD;
        tree[node].sum = (tree[node].sum + len * val) % MOD;
        tree[node].lazy = (tree[node].lazy + val) % MOD;
    }

    void push(int node, int l, int r) {
        if (tree[node].lazy == 0 || l == r) return;

        int mid = (l + r) / 2;
        apply(node * 2, l, mid, tree[node].lazy);
        apply(node * 2 + 1, mid + 1, r, tree[node].lazy);
        tree[node].lazy = 0;
    }

    void update(int node, int l, int r, int ql, int qr, int val) {
        if (ql > r || qr < l) return;

        if (ql <= l && r <= qr) {
            apply(node, l, r, val);
            return;
        }

        push(node, l, r);
        int mid = (l + r) / 2;

        update(node * 2, l, mid, ql, qr, val);
        update(node * 2 + 1, mid + 1, r, ql, qr, val);

        tree[node].sum = (tree[node * 2].sum +
                          tree[node * 2 + 1].sum) % MOD;
        tree[node].sq = (tree[node * 2].sq +
                         tree[node * 2 + 1].sq) % MOD;
    }

    int sumSquares(int node, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return 0;

        if (ql <= l && r <= qr)
            return tree[node].sq;

        push(node, l, r);
        int mid = (l + r) / 2;

        return (sumSquares(node * 2, l, mid, ql, qr) +
                sumSquares(node * 2 + 1, mid + 1, r, ql, qr)) % MOD;
    }

    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.resize(4 * n);

        unordered_map<int, int> last;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int prev = last.count(nums[i]) ? last[nums[i]] : -1;

            update(1, 0, n - 1, prev + 1, i, 1);

            ans = (ans + sumSquares(1, 0, n - 1, 0, i)) % MOD;
            last[nums[i]] = i;
        }

        return ans;
    }
};
*/

/*
Complexity
- Time: (O(nlog n))
- Space: (O(n))
*/