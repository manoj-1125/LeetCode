// Last updated: 7/21/2026, 10:47:01 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int product1=1,product2=1;
        product1=nums[n-1]*nums[n-2]*nums[n-3];
        product2=nums[0]*nums[1]*nums[n-1];
        return max(product1,product2);
    }
};