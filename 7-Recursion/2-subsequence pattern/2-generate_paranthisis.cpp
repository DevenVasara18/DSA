/*
class Solution {
public:

    void solve(int open, int close, int n,
               string& current,
               vector<string>& ans) {

        // Base case
        if (current.size() == 2 * n) {
            ans.push_back(current);
            return;
        }

        // Choice 1: Add '('
        if (open < n) {

            current.push_back('(');

            solve(open + 1, close, n, current, ans);

            current.pop_back();
        }

        // Choice 2: Add ')'
        if (close < open) {

            current.push_back(')');

            solve(open, close + 1, n, current, ans);

            current.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        string current;

        solve(0, 0, n, current, ans);

        return ans;
    }
};
*/