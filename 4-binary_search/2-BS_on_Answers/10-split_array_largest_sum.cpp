/*
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());

        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){

            int mid = low + (high - low)/2;

            int count = 1;
            int sum = 0;

            for(int x : nums){

                if(sum + x <= mid){
                    sum += x;
                }
                else{
                    count++;
                    sum = x;
                }
            }

            if(count <= k)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};
*/