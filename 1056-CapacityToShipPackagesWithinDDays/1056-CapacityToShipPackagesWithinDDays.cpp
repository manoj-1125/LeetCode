// Last updated: 7/19/2026, 11:59:25 PM
class Solution {
public:
    int calculatetotaldays(vector<int>& weights, int capacity) {

        int totaldays = 1;
        int sum=0;
        for(int weight : weights) {
            if((sum+weight)>capacity){
                totaldays++;
                sum=weight;
            }else{
                sum+=weight;
            }
        }

        return totaldays;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0 ;
        int low = *max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);

        int ans;
        while(low <= high) {

            int mid = low + (high - low) / 2;

            int totaldays = calculatetotaldays(weights, mid);

            if(totaldays <= days) {
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