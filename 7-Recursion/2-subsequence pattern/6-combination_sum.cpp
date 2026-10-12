/*
class Solution
{
public:
    void solve(vector<int> &candidates, int target, int index,
               vector<int> &current, vector<vector<int>> &ans)
    {

        // Target achieved
        if (target == 0)
        {
            ans.push_back(current);
            return;
        }

        // No more candidates
        if (index == candidates.size())
        {
            return;
        }

        // Include current element
        if (candidates[index] <= target)
        {

            current.push_back(candidates[index]);

            // index remains same because
            // an element can be used multiple times
            solve(candidates,
                  target - candidates[index],
                  index,
                  current,
                  ans);

            current.pop_back();
        }

        // Exclude current element
        solve(candidates,
              target,
              index + 1,
              current,
              ans);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates,
                                       int target)
    {

        vector<vector<int>> ans;
        vector<int> current;

        solve(candidates, target, 0, current, ans);

        return ans;
    }
};
*/