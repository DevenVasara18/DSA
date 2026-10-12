/*
class Solution {
public:
    void solve(string& digits, int index, string& current, vector<string>& ans,
               vector<string>& keypad) {

        // We have processed all digits
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        // Get the letters corresponding to current digit
        string letters = keypad[digits[index] - '0'];

        // Try every letter
        for (char ch : letters) {

            // Choose
            current.push_back(ch);

            // Move to next digit
            solve(digits, index + 1, current, ans, keypad);

            // Backtrack
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        // Important: empty input
        if (digits.empty()) {
            return ans;
        }

        vector<string> keypad = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        string current;

        solve(digits, 0, current, ans, keypad);

        return ans;
    }
};
*/