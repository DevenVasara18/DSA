/*
class Solution {
public:
    int paint(int A, int B, vector<int>& C) {
        long long low = *max_element(C.begin(), C.end());

    long long high = accumulate(C.begin(), C.end(), 0LL);

    while(low <= high){

        long long mid = low + (high-low)/2;

        int painters = 1;

        long long sum = 0;

        for(int board : C){

            if(sum + board <= mid){
                sum += board;
            }
            else{
                painters++;
                sum = board;
            }
        }

        if(painters <= A)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (low * B) % 10000003;
    }
};
*/