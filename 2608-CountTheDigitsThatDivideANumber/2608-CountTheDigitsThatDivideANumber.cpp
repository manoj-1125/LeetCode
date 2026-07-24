// Last updated: 7/24/2026, 9:37:05 PM
class Solution {
public:
    int countDigits(int num) {
        int val,q,n=num,count=0;
        while(n!=0){
            val=n%10;
            if(val!=0 && num%val==0)
                count++;
            q=n/10;
            n=q;
        }
        return count;
    }
};