// Last updated: 7/20/2026, 12:00:24 AM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++)
            ans[i]=ans[i-1]*nums[i-1];
        int rproduct=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=rproduct;
            rproduct*=nums[i];
        }
        return ans;
    }
};