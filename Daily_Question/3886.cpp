/*
Approach
A descent occurs when nums[j] > nums[j + 1].
1. Find all descents: Store every index j where the current element is greater than the next element.
2. Check each divisor k of n: The array is divided into blocks of length k.
3. Validate each block:
   - Each block can contain at most one descent.
   - The descent cannot occur at the block boundary.
   - The block must be capable of wrapping into sorted order.
   - Neighboring blocks must remain correctly ordered after rotation.
4. Sum valid divisors: If k satisfies all conditions, add it to the answer.
*/

/*

class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> drops;

        for (int j = 0; j + 1 < n; j++) {
            if (nums[j] > nums[j + 1])
                drops.push_back(j);
        }

        auto sortable = [&](int k) {
            if ((int)drops.size() > n / k)
                return false;

            int prevBlock = -1, prevDrop = -1;

            for (int j : drops) {
                int block = j / k;
                int offset = j % k;
                int start = j - offset;
                int end = start + k - 1;

                if (offset == k - 1 ||
                    block == prevBlock ||
                    nums[end] > nums[start] ||
                    (start &&
                     (prevBlock == block - 1
                          ? nums[prevDrop]
                          : nums[start - 1]) > nums[j + 1]) ||
                    (end + 1 < n && nums[j] > nums[end + 1])) {
                    return false;
                }

                prevBlock = block;
                prevDrop = j;
            }

            return true;
        };

        int ans = 0;

        for (int k = 1; k * k <= n; k++) {
            if (n % k == 0) {
                if (sortable(k))
                    ans += k;

                int other = n / k;

                if (other != k && sortable(other))
                    ans += other;
            }
        }

        return ans;
    }
};

*/

/*
Complexity
Let (d) be the number of divisors of (n), and (m) the number of descents.
- Time: (O(n + d cdot m))
- Space: (O(m))
*/