// Last updated: 7/20/2026, 10:21:08 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=nums[0];
        for(int i=1;i<=nums.size();i++)
            xor1^=i;
        for(int i=1;i<nums.size();i++)
            xor1^=nums[i];
        return xor1^xor2;
    }
};