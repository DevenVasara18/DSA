/*
Approach
- Find the latest arrival date between Alice and Bob to determine the starting date of their overlap.
- Find the earliest departure date between Alice and Bob to determine the ending date of their overlap.
- Convert both dates from "MM-DD" format into day numbers using a prefix array that stores the total days before each month.
- If the ending day number is smaller than the starting day number, return 0 because there is no overlap.
- Otherwise, return endDay - startDay + 1, adding 1 because both arrival and departure days are included.

Time Complexity: (O(1))
Space Complexity: (O(1))
*/
/*

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        int prefix[] = {0, 31, 59, 90, 120, 151,
                        181, 212, 243, 273, 304, 334};

        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        int startDay = prefix[stoi(start.substr(0, 2)) - 1]
                       + stoi(start.substr(3, 2));

        int endDay = prefix[stoi(end.substr(0, 2)) - 1]
                     + stoi(end.substr(3, 2));

        return max(0, endDay - startDay + 1);
    }
};

*/