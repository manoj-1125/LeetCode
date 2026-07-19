// Last updated: 7/19/2026, 11:59:30 PM
class Solution {
public:

    long long calculateTotalHours(vector<int>& piles, int speed) {

        long long totalHours = 0;

        for(int banana : piles) {
            totalHours += (banana + speed - 1) / speed;
        }

        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long totalHours = calculateTotalHours(piles, mid);

            if(totalHours <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};