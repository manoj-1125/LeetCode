// Last updated: 9/4/2026, 11:54:46 PM
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
                maxi=max(maxi,sum);
            }else
            sum=nums[i];
        }
        return maxi;
    }
};