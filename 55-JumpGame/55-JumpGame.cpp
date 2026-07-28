// Last updated: 7/28/2026, 10:44:21 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;
        for(int i=0;i<nums.size();i++){
            if(i>reach)
                return false;
            reach=max(reach,i+nums[i]);
        }
        return true;
    }
};