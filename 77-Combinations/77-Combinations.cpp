// Last updated: 7/20/2026, 12:01:35 AM
class Solution {
public:
    void backtrack(int start, int n, int k, vector<vector<int>>& ans,vector<int>& currList){
        if(currList.size()==k){
            ans.push_back(currList);
            return;
        }
            for(int j=start;j<=n;j++){
                currList.push_back(j);
                backtrack(j+1, n, k, ans, currList);
                currList.pop_back();
            }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>currList;
        backtrack(1, n, k, ans, currList);
        return ans;
    }
};