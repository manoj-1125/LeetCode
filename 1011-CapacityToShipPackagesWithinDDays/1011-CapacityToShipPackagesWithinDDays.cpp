// Last updated: 9/4/2026, 11:56:17 PM
class Solution {
public:
    int calculatetotaldays(vector<int>& weights, int capacity) {

        int totaldays = 1;
        int load = 0;
        for (int weight : weights) {
            if ((load + weight) > capacity) {
                totaldays++;
                load = weight;
            } else {
                load += weight;
            }
        }
        return totaldays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (calculatetotaldays(weights, mid) <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};