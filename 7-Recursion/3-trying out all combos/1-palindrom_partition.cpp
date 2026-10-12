/*
class Solution {
public:

    bool isPalindrome(string& s, int start, int end) {

        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }

    void solve(string& s, int index,
               vector<string>& current,
               vector<vector<string>>& ans) {

        // Entire string has been partitioned
        if (index == s.size()) {
            ans.push_back(current);
            return;
        }

        // Try every possible ending position
        for (int i = index; i < s.size(); i++) {

            // Check whether s[index...i] is palindrome
            if (isPalindrome(s, index, i)) {

                // Choose substring
                current.push_back(s.substr(index, i - index + 1));

                // Explore remaining string
                solve(s, i + 1, current, ans);

                // Backtrack
                current.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> current;

        solve(s, 0, current, ans);

        return ans;
    }
};
*/