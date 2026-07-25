// Last updated: 7/25/2026, 10:56:02 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++)
            ans[i]=ans[i&(i-1)]+1;
        return ans;
    }
};