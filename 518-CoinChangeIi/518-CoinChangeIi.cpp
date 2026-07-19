// Last updated: 7/19/2026, 11:59:50 PM
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned int> dp(amount + 1, 0);
        dp[0] = 1;
       
            for (int coin : coins) {
                 for (int i = coin; i <= amount; i++) {
                    dp[i]+=dp[i-coin];
            }
        }
      return (int)dp[amount];
    }
};