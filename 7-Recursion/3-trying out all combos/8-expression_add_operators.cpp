/*
class Solution {
public:

    void solve(string& num, long long target, int index,
               long long value, long long prev,
               string expression, vector<string>& ans) {

        // All digits are used
        if (index == num.size()) {
            if (value == target) {
                ans.push_back(expression);
            }
            return;
        }

        for (int i = index; i < num.size(); i++) {

            // Numbers cannot have leading zeros
            if (i > index && num[index] == '0') {
                break;
            }

            string part = num.substr(index, i - index + 1);
            long long current = stoll(part);

            // First number
            if (index == 0) {

                solve(num, target, i + 1,
                      current, current,
                      part, ans);

            }
            else {

                // +
                solve(num, target, i + 1,
                      value + current,
                      current,
                      expression + "+" + part,
                      ans);

                // -
                solve(num, target, i + 1,
                      value - current,
                      -current,
                      expression + "-" + part,
                      ans);

                // *
                solve(num, target, i + 1,
                      value - prev + prev * current,
                      prev * current,
                      expression + "*" + part,
                      ans);
            }
        }
    }

    vector<string> addOperators(string num, int target) {

        vector<string> ans;

        solve(num, target, 0, 0, 0, "", ans);

        return ans;
    }
};
*/