/*
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool isAllowed[26]={false};

        for(char c : allowed){
            isAllowed[c - 'a'] = true;
        }
        int count = 0;

        for(string str : words){
            bool consistent = true;

            for(char c : str){
                if(!isAllowed[c - 'a']){
                    consistent = false;
                }
            }
            if(consistent){
                count++;
            }
        }
        return count;
    }
};
*/