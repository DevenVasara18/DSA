/*
class Solution {
public:

    bool solve(string& s, vector<string>& wordDict,
               int index, vector<int>& dp) {

        // Entire string has been segmented
        if (index == s.length()) {
            return true;
        }

        // Already calculated
        if (dp[index] != -1) {
            return dp[index];
        }

        for (int i = 0; i < wordDict.size(); i++) {

            string word = wordDict[i];

            // Check if word can start from index
            if (index + word.length() <= s.length() &&
                s.substr(index, word.length()) == word) {

                // Try to segment the remaining string
                if (solve(s, wordDict,
                          index + word.length(), dp)) {

                    return dp[index] = true;
                }
            }
        }

        return dp[index] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        vector<int> dp(s.length(), -1);

        return solve(s, wordDict, 0, dp);
    }
};
*/