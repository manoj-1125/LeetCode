// Last updated: 9/4/2026, 11:55:30 PM
class Solution {
public:
    int calculateSum(vector<int>& nums, int divisor) {
        int sum = 0;
        for(int n : nums) {
            sum += (n+divisor-1)/divisor;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(calculateSum(nums, mid) <= threshold) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};