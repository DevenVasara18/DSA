// class Solution
// {
// public:
//     bool solve(vector<int> &nums, int k, int index, int sum)
//     {

//         // Base case
//         if (index == nums.size())
//         {
//             return sum == k;
//         }

//         // Include current element
//         bool include = solve(nums, k, index + 1,
//                              sum + nums[index]);

//         // Exclude current element
//         bool exclude = solve(nums, k, index + 1,
//                              sum);

//         return include || exclude;
//     }

//     bool checkSubsequenceSum(vector<int> &nums, int k)
//     {
//         return solve(nums, k, 0, 0);
//     }
// };