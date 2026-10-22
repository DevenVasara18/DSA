/*
Approach: Greedy
- $5 bill: Keep it as change.
- $10 bill: Give one $5 bill as change.
- $20 bill: Prefer one $10 and one $5 bill. If unavailable, give three $5 bills.
*/
/*

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (int bill : bills) {
            if (bill == 5) {
                five++;
            }
            else if (bill == 10) {
                if (five == 0) return false;
                five--;
                ten++;
            }
            else {
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                }
                else if (five >= 3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};

*/
/*
Complexity
- Time: (O(n)) — each bill is processed once.
- Space: (O(1)) — only two counters are maintained.
*/