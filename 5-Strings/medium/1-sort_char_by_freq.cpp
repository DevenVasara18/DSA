/*
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char ch:s){
            freq[ch]++;
        }

        vector<pair<char,int>> v;

        for(auto it:freq){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b) {   // lamda functoion tells sort to how to sort 
            return a.second > b.second;
        });

        string ans;

        for(auto i:v){
            ans.append(i.second,i.first);         // append(count,character)  i.second times i.first 
        }

        return ans;
    }
};
*/