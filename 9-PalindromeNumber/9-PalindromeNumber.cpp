// Last updated: 7/20/2026, 12:02:29 AM
class Solution {
public:
    bool isPalindrome(int x) {
        int l,r=0,m=x;
        bool ans;
        while(x>0){
            l=x%10;
            if (r > INT_MAX / 10 || (r == INT_MAX / 10 && l > 7))
                return 0;
            if (r < INT_MIN / 10 || (r == INT_MIN / 10 && l < -8))
                return 0;
            r=(r*10)+l;
            x=x/10;
        }
        if(m==r)
            ans=true;
        else
            ans=false;
        return ans;
    }
};