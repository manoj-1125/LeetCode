// Last updated: 8/14/2026, 10:49:45 AM
class Solution {
public:
long long MOD=1e9+7;
    long long myPow(long long x, long long n) {
        long long ans=1;
        x=x%MOD;
        while(n){
            if(n%2){
                ans=(ans*x)%MOD;
                n=n-1;
            }else{
                x=(x*x)%MOD;
                n=n/2;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long evenPos=(n+1)/2;
        long long oddPos=n/2;
        long long firstPart=myPow(5,evenPos);
        long long secondPart=myPow(4,oddPos);
        return (firstPart*secondPart)%MOD;
    }
};