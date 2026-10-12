/*
class Solution {
public:

    void solve(int index, int n, string& current,
               vector<string>& ans) {

        if (index == n) {
            ans.push_back(current);
            return;
        }

        // Put 0
        current.push_back('0');

        solve(index + 1, n, current, ans);

        current.pop_back();

        // Put 1 only if previous character is not 1
        if (current.empty() || current.back() != '1') {

            current.push_back('1');

            solve(index + 1, n, current, ans);

            current.pop_back();
        }
    }

    vector<string> generateBinaryStrings(int n) {

        vector<string> ans;
        string current;

        solve(0, n, current, ans);

        return ans;
    }
};
*/