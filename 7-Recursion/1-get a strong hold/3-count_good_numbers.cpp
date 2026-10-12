/*
class Solution {
public:
    long long MOD = 1000000007;
    long long power(long long base,long long expo){
        if(expo == 0)
            return 1;

        long long half = power(base,expo/2);

        if(expo % 2 == 0){
            return (half*half) % MOD;
        }
        return (base*half*half) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long evenPosi = (n+1)/2;
        long long oddPosi = n/2;

        long long evenWays = power(5,evenPosi);
        long long oddWays = power(4,oddPosi);

        return (evenWays * oddWays) % MOD;
    }
};
*/