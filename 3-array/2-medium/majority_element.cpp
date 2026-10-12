// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {

//         unordered_map<int, int> mpp;

//         for (auto it : nums)
//         {
//             mpp[it]++;
//         }

//         int fre = 0;
//         int ans = 0;

//         for (auto it : mpp)
//         {
//             if (it.second > fre)
//             {
//                 fre = it.second;
//                 ans = it.first;
//             }
//         }

//         return ans;
//     }
// };

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        for (int num : nums) {

            if (count == 0)
                candidate = num;

            if (num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};
*/