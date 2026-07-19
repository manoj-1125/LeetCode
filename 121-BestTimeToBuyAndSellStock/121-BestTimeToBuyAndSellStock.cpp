// Last updated: 7/20/2026, 12:01:04 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                profit=max(prices[i]-min,profit);
            }
        }
        return profit;
    }
};