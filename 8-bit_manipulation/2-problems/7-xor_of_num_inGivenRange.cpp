/*
class Solution{
    public:
        int f1(int n){
            if(n%4 == 1) return 1;
            if(n%4 == 2) return n+1;
            if(n%4 == 3) return 0;
            else return n;
        }
        int findRangeXOR(int l,int r){
            return f1(l-1)^f1(r);
        }
};
*/