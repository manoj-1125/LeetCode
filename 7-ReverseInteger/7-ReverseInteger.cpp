// Last updated: 7/20/2026, 12:02:32 AM
class Solution {
public:
    int reverse(int x) {
        int l,r=0;
        while(x){
            l=x%10;
            if (r > INT_MAX / 10 || (r == INT_MAX / 10 && l > 7))
                return 0;
            if (r < INT_MIN / 10 || (r == INT_MIN / 10 && l < -8))
                return 0;
            r=(r*10)+l;
            x=x/10;
        }

        return r;
    }
};