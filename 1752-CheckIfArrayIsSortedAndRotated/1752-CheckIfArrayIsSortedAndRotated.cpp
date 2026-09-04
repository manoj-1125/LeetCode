// Last updated: 9/4/2026, 11:55:00 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n])
                cnt++;
        }
        return cnt<=1;
    }
};