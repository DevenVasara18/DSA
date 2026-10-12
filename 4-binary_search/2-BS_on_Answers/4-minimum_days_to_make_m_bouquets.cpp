/*
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int flowers = 0;
            int bouquets = 0;

            for (int day : bloomDay) {

                if (day <= mid)
                    flowers++;
                else {
                    bouquets += flowers / k;
                    flowers = 0;
                }
            }

            bouquets += flowers / k;

            if (bouquets >= m)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};
*/