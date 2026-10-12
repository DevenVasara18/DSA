/*
class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.size() != goal.size())
            return false;

        for (int i = 0; i < s.size(); i++) {

            string rotated = s.substr(i) + s.substr(0, i);

            if (rotated == goal)
                return true;
        }

        return false;
    }
};



class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size())
            return false;

        string temp = s + s;

        if(temp.find(goal) != string::npos){
            return true;
        }
        else{
            return false;
        }
    }
};
*/