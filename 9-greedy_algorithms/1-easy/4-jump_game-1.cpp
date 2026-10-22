/*
Approach: Greedy — Maximum Reach
- maxIndex stores the farthest index reachable so far.
- If i > maxIndex, the current index cannot be reached, so return false.
- Otherwise, update the farthest reachable index using i + nums[i].
- If the loop completes, the last index is reachable, so return true.
*/
/*
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0;
        for(int i=0 ; i < n ;i++){
            if(i>maxIndex) return false;
            maxIndex = max(maxIndex,i + nums[i]);
        }
        return true;
    }
};
*/
/*
Complexity
- Time: (O(n)) — each element is visited once.
- Auxiliary space: (O(1)) — only a few variables are used.
*/