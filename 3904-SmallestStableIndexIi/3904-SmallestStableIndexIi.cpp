// Last updated: 9/5/2026, 11:58:53 PM
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i + 1]);
        }
        int leftMax = nums[0];
        for (int i = 0; i < n; i++) {
            leftMax = max(leftMax, nums[i]);
            if (leftMax - suffixMin[i] <= k)
                return i;
        }
        return -1;
    }
};