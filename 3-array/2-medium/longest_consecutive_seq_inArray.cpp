/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Empty array
        if(nums.empty())
            return 0;

        // Step 1: Store all numbers in a HashSet
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        // Step 2: Check every unique number
        for(int num : st){

            // Is this the start of a sequence?
            if(st.find(num - 1) == st.end()){

                int current = num;
                int length = 1;

                // Extend the sequence
                while(st.find(current + 1) != st.end()){

                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
*/