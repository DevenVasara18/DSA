/*
class Solution {
public:
  int NthRoot(int N, int M) {
        long long low = 1;
        long long high = M;

        while(low <= high){

            long long mid = low + (high - low)/2;

            long long value = 1;

            for(int i = 1; i <= N; i++){
                value *= mid;

                if(value > M)
                    break;
            }

            if(value == M)
                return mid;

            else if(value < M)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
       }

};

*/