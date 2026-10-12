// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {

//         int cs = nums[0];
//         int maxi = nums[0];

//         int start = 0;
//         int end = 0;
//         int tempStart = 0;

//         for (int i = 1; i < nums.size(); i++)
//         {

//             cs += nums[i];

//             if (cs > maxi)
//             {
//                 maxi = cs;
//                 start = tempStart;
//                 end = i;
//             }

//             if (cs < 0)
//             {
//                 cs = 0;
//                 tempStart = i + 1;
//             }
//         }

//         cout << "Maximum Subarray: ";

//         for (int i = start; i <= end; i++)
//         {
//             cout << nums[i] << " ";
//         }

//         cout << endl;

//         return maxi;
//     }
// };