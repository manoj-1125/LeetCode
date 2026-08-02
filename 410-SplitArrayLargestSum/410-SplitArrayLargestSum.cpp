// Last updated: 8/2/2026, 6:42:23 PM
class Solution {
public:
    bool isPossible(vector<int>& nums, int maxSum, int k) {
        int partition = 1;
        int subarraySum = 0;
        for (int n : nums) {
            if ((subarraySum + n) > maxSum) {
                partition++;
                subarraySum = n;
            } else {
                subarraySum += n;
            }
        }
        return partition <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        if(k>nums.size())
            return -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(nums, mid, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};