/*
Approach
1. Calculate each item's value-to-weight ratio: (ratio = frac{value}{weight}).
2. Sort items in descending order of this ratio.
3. If an item fits completely, take it and reduce the remaining capacity.
4. Otherwise, take only the fraction that fits and stop.
*/
/*

class Solution {
public:
    double fractionalKnapsack(vector<long long>& val,
                              vector<long long>& wt,
                              long long capacity) {
        int n = val.size();

        vector<pair<long long, long long>> items(n);

        for (int i = 0; i < n; i++) {
            items[i] = {val[i], wt[i]};
        }

        sort(items.begin(), items.end(),
             [](const auto& a, const auto& b) {
                 return (long double)a.first / a.second >
                        (long double)b.first / b.second;
             });

        double ans = 0;

        for (auto& item : items) {
            if (capacity == 0)
                break;

            long long value = item.first;
            long long weight = item.second;

            if (weight <= capacity) {
                ans += value;
                capacity -= weight;
            } else {
                ans += (double)value / weight * capacity;
                capacity = 0;
            }
        }

        return ans;
    }
};

*/
/*
Time: (O(nlog n)) due to sorting.
Space: (O(1)) for the index array.
*/