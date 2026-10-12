/*
class Solution {
public:

    int lowerBound(vector<int>& nums, int x)
    {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(nums[mid] >= x)
            {
                ans = nums[mid];
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }

    int getFloor(vector<int>& nums, int x)
    {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(nums[mid] <= x)
            {
                ans = nums[mid];
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> getFloorAndCeil(vector<int> nums, int x)
    {
        return {getFloor(nums, x), lowerBound(nums, x)};
    }
};*/