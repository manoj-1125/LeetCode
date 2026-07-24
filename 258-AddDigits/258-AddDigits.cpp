// Last updated: 7/24/2026, 9:37:32 PM
class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return num;
        return (num-1)%9+1;
    }
};